/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2025-01-08 09:00:37
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2025-01-08 22:04:47
 * @FilePath: \c_porject\z_cpp学习\C++ vector 容器\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/* C++ 中的 vector 是一种序列容器，它允许你在运行时动态地插入和删除元素。

vector 是基于数组的数据结构，但它可以自动管理内存，这意味着你不需要手动分配和释放内存。

与 C++ 数组相比，vector 具有更多的灵活性和功能，使其成为 C++ 中常用的数据结构之一。

vector 是 C++ 标准模板库（STL）的一部分，提供了灵活的接口和高效的操作。

基本特性:
    动态大小：vector 的大小可以根据需要自动增长和缩小。
    连续存储：vector 中的元素在内存中是连续存储的，这使得访问元素非常快速。
    可迭代：vector 可以被迭代，你可以使用循环（如 for 循环）来访问它的元素。
    元素类型：vector 可以存储任何类型的元素，包括内置类型、对象、指针等。
使用场景：
    当你需要一个可以动态增长和缩小的数组时。
    当你需要频繁地在序列的末尾添加或移除元素时。
    当你需要一个可以高效随机访问元素的容器时。
    要使用 vector，首先需要包含 <vector> 头文件：
 */
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    // 创建一个 vector，初始化两个元素
    vector<int> myVector1;// 创建一个存储整数的空 vector
    vector<int> myVector2(5);// 创建一个存储五个整数的 vector，每个元素都是 0
    vector<int> myVector3(5, 10);// 创建一个存储五个整数的 vector，每个元素都是 10
    //或
    vector<int> vec; // 默认初始化一个空的 vector
    vector<int> vec2 = {1, 2, 3, 4}; // 初始化一个包含元素的 vector
    // 添加一个元素
    myVector1.push_back(3);// 添加一个元素 3 到 myVector1 的"末尾"
    myVector1.push_back(4);// 添加一个元素 4 到 myVector1 的"末尾"
    // 可以使用下标操作符 [] 或 at() 方法访问 vector 中的元素：
    int x = myVector1[0]; // 获取第一个元素
    int y = myVector3.at(1); // 获取第二个元素
    cout << x << endl;
    cout << y << endl;
   
    //获取大小,可以使用 size() 方法获取 vector 中元素的数量：
    int size = myVector1.size(); // 获取 vector 的大小
    cout << size << endl;
    //迭代访问,可以使用迭代器遍历 vector 中的元素：
    for (auto it = myVector3.begin(); it != myVector3.end(); ++it) {
        cout << *it << " ";
    }

 


    // 删除最后一个元素
}