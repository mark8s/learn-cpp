// C++ 11 function类模板

/**
 * 定义
 * template< class R, class... Args >
  class function<R(Args...)>;
 * 
  R : 被调用函数的返回类型
  Args… : 被调用函数的形参

 */


#include <functional>
#include <iostream>
using namespace std;

int f(int a, int b)
{
    return a + b;
}

int main()
{
    function<int(int, int)> func = f;

    cout << f(1, 2) << endl; // 3
    system("pause");
    return 0;
}



