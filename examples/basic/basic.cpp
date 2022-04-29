#include <iostream>
#include <string>
using namespace std;

// static 共享变量
static int count = 10;

int main()
{
    // 字符串操作
    string username = "hello,mark\n";
    cout << username;
    string fromCity = "changsha\n";
    cout << fromCity;

    // const定义常量
    // endl 表示结尾换行
    const int LENGTH = 10;
    const int WIDTH = 5;
    cout << LENGTH * WIDTH << endl;

    // 自动推断类型 auto
    auto x1 = {1, 2};

    // 判断语句
    int a = 100;

    if (a < 20)
    {
        cout << "a 小于 20" << endl;
    }
    else
    {
        cout << "a 大于 20" << endl;
    }

    // 函数
    int aa = 100;
    int bb = 200;
    int result = max(aa,bb);
    cout << "Max value is : " << result << endl;


}

// 函数返回两个数中较大的那个数
int max(int num1, int num2) 
{
   // 局部变量声明
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}