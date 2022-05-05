// 智能指针
// C++ 11 引入了智能指针的概念来解决该问题。智能指针是一个可以像指针一样工作的对象，但是当它不再被使用时，可以自动删除动态分配的内存。
// 从 C++14 开始，有一个库函数 make_unique<T>() 可用于创建 unique_ptr 对象。该函数分配一个类型为 T 的对象，然后返回一个拥有该对象的独占指针
// unique_ptr<int> uptr = make_unique<int>();

#include <iostream>
#include <memory>

struct Task
{
    int mId;
    Task(int id) : mId(id)
    {
        std::cout << "Task::Constructor" << std::endl;
    }
    ~Task()
    {
        std::cout << "Task::Destructor" << std::endl;
    }
};

int main()
{
    // 创建一个 unique_ptr 对象，并且绑定到 new Task(23) 上
    std::unique_ptr<Task> taskPtr(new Task(23));
    // 通过智能指针访问成员变量
    int id = taskPtr->mId;
    std::cout << id << std::endl;

    return 0;
}