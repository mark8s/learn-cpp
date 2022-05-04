#include <iostream>

using namespace std;

// 基类
class Shape
{
public:
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

// 派生类
// 格式 class derived-class: access-specifier base-class
// 访问修饰符 access-specifier 是 public、protected 或 private 其中的一个，base-class 是之前定义过的某个类的名称
class Rectangle : public Shape
{
public:
    int getArea()
    {

        return width * height;
    }
}; // class 必须要以; 结尾 

int
main()
{
    Rectangle r;
    r.setWidth(5);
    r.setHeight(8);
    // 输出对象的面积
    cout << "Total area: " << r.getArea() << endl;

    return 0;
}