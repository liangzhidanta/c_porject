#include <iostream>
#include <string>
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