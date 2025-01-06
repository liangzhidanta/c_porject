/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-06 08:13:39
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-06 20:11:33
 * @FilePath: \c_porject\1.6_编译器项目\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "printColor.h" 

struct Token {
    e_TokenCode type;
    std::string value;
};

class Lexer {
public:
    Lexer(const std::string& source) : source(source), pos(0) {}

    Token nextToken() {
        skipWhitespace();
        if (pos >= source.length()) {
            return { TK_EOF, "" };
        }

        char currentChar = source[pos];
        if (isalpha(currentChar) || currentChar == '_') {
            return identifierOrKeyword();
        } else if (isdigit(currentChar)) {
            return number();
        } else {
            return operatorToken();
        }
    }

private:
    std::string source;
    size_t pos;

    void skipWhitespace() {
        while (pos < source.length() && isspace(source[pos])) {
            pos++;
        }
    }

    Token identifierOrKeyword() {
        size_t start = pos;
        while (pos < source.length() && (isalnum(source[pos]) || source[pos] == '_')) {
            pos++;
        }
        std::string value = source.substr(start, pos - start);
        // 检查是否为关键字
        if (value == "char") return { KW_CHAR, value };
        if (value == "int") return { KW_INT, value };
        // ... 添加其他关键字检查
        return { TK_IDENT, value };
    }

    Token number() {
        size_t start = pos;
        while (pos < source.length() && isdigit(source[pos])) {
            pos++;
        }
        return { TK_CINT, source.substr(start, pos - start) };
    }

    Token operatorToken() {
        char currentChar = source[pos++];
        switch (currentChar) {
            case '+': return { TK_PLUS, "+" };
            case '-': return { TK_MINUS, "-" };
            case '*': return { TK_STAR, "*" };
            // ... 添加其他运算符
            default: return { TK_EOF, "" };
        }
    }
};

void printToken(Token token) {
    char* value = const_cast<char*>(token.value.c_str());
    printColor(value, token.type);
}

int main() {
    std::string code = "int a = 10 + 20;";
    Lexer lexer(code);

    Token token;
    do {
        token = lexer.nextToken();
        printToken(token); // 调用 printToken 函数
        std::cout << "Type: " << token.type << ", Value: " << token.value << std::endl;
    } while (token.type != TK_EOF);

    return 0;
}