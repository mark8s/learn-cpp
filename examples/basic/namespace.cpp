// 命名空间
// 它可作为附加信息来区分不同库中相同名称的函数、类、变量等。使用了命名空间即定义了上下文。本质上，命名空间就是定义了一个范围。
// https://www.runoob.com/cplusplus/cpp-namespaces.html

#include <iostream>
using namespace std;

namespace first_space
{
    void sayHello()
    {
        cout << "Hello form first_space" << endl;
    }
}

namespace second_space
{
    void sayHello()
    {
        cout << "Hello form second_space" << endl;
    }
}

// 可以使用 using namespace 指令，这样在使用命名空间时就可以不用在前面加上命名空间的名称。
using namespace first_space;

int main()
{
    sayHello();
    // 为了调用带有命名空间的函数或变量，需要在前面加上命名空间的名称
    second_space::sayHello();
    return 0;
}
