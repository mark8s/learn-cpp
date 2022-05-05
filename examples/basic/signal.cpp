// 信号处理
// 信号是由操作系统传给进程的中断，会提早终止一个程序。在 UNIX、LINUX、Mac OS X 或 Windows 系统上，可以通过按 Ctrl+C 产生中断。
// 有些信号不能被程序捕获，但是下表所列信号可以在程序中捕获，并可以基于信号采取适当的动作。这些信号是定义在 C++ 头文件 <csignal> 中。
// https://www.runoob.com/cplusplus/cpp-signal-handling.html

#include <iostream>
#include <csignal>
// windows 使用 windows.h ，linux 使用 unistd.h
#include <windows.h>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";
    // 清理并关闭
    // 终止程序
    exit(signum);
}

int main()
{
    int i = 0;
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);
    while (++i)
    {
        cout << "Going to sleep...." << endl;
        if (i == 3)
        {
            // 使用函数 raise() 生成信号
            raise(SIGINT);
        }
        Sleep(1000);
    }

    return 0;
}
