// 预处理器
// 预处理器是一些指令，指示编译器在实际编译之前所需完成的预处理。
// 所有的预处理器指令都是以井号（#）开头，只有空格字符可以出现在预处理指令之前。

#include <iostream>
using namespace std;

#define PI 3.14159

int main()
{

    cout << "Value of PI :" << PI << endl;

    return 0;
}


