// 引用
// 在c++中加入引用的主要目的是为了给函数传参。在C语言中，将变量名作为实参。这时将变量的值传递给形参。传递是单向的，在调用函数时，形参和实参不是同一个存储单元。在执行函数期间形参值发生变化并不传回给实参。
//而引用与他所引用的对象共用同一块内存空间，在函数中直接改变引用的值，原变量的值也会随之改
// https://blog.csdn.net/Mars_guest/article/details/78503291
// 常引用就是在引用之前加上const对引用进行限制，使得该引用在函数中不能进行改变（但可以改变原变量的值），例如 int a = 6;const int &b = a;
// 使用引用提高效率

#include <iostream>

//引用传递，这种方式对参数的修改是全局性的
void fun(int &x)
{
    x++;
}

//这种方式的参数是只读的
void fun1(const int &x)
{
    std::cout << x << std::endl;
}

int main()
{
    int num = 1;
    fun(num);
    std::cout << num << std::endl;
    fun1(num);
    return 0;
}
