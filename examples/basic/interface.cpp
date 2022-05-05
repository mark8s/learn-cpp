// 接口
// C++ 接口是使用抽象类来实现的。
// 如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。
// 抽象类（通常称为 ABC）不能被用于实例化对象，它只能作为接口使用。如果试图实例化一个抽象类的对象，会导致编译错误。
// 如果一个 ABC 的子类需要被实例化，则必须实现每个虚函数，这也意味着 C++ 支持使用 ABC 声明接口。如果没有在派生类中重写纯虚函数，就尝试实例化该类的对象，会导致编译错误。

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

class Triangle : public Shape
{
public:
    int getArea()
    {
        return (width * height) / 2;
    }
};

int main()
{
    Rectangle rec;
    Triangle tri;

    rec.setWidth(5);
    rec.setHeight(7);
    // 输出对象的面积
    cout << "Total Rectangle area: " << rec.getArea() << endl;

    tri.setWidth(5);
    tri.setHeight(7);
    // 输出对象的面积
    cout << "Total Triangle area: " << tri.getArea() << endl;
}
