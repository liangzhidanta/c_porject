#include<vector> // 包含vector模板类的头文件
#include<stdio.h> // 包含标准输入输出函数的头文件
using namespace std; // 使用std命名空间，以避免频繁使用std::
int main() {
    // 使用vector模板类创建一个整型向量
    vector<int> vec1; // 创建一个空的vector<int>对象，用于存储整型数据
    // 使用push_back方法向向量末尾添加元素
    // 逐个向vec1中添加元素，构建一个包含三个整数的向量
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    // 打印向量元素，展示向量的使用
    printf("vec1[0] = %d, vec1[1] = %d, vec1[2] = %d\n",
        vec1[0], vec1[1], vec1[2]);
    // 清空向量，释放资源
    vec1.clear();
    return 0; // 主函数返回0，表示程序正常结束
}
