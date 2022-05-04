#include <iostream>
using namespace std;

class Box
{
private:
    /* data */
public:
    // 当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本。
    static int objectCount;
    double length;
    double breadth;
    double height;
    Box(/* args */);
    Box(double length);
    Box(double length, double height);
    Box(double length, double breadth, double height)
    {
        length = length;
        breadth = breadth;
        height = height;
        objectCount++;
        cout << "Object is being created +1" << endl;
    }
    ~Box();

    //成员函数
    double get(void);
    void set(double len, double bre, double hei);

    // 成员函数可以定义在类定义内部，或者单独使用范围解析运算符 :: 来定义
    void sayHello()
    {
        cout << "Hello!" << endl;
    }
};

// 无参构造函数，在每次创建对象的时候执行
Box::Box(/* args */)
{
    cout << "Object is being created" << endl;
}

// 带参数构造函数，在每次创建对象的时候执行
Box::Box(double length)
{
    cout << "Object with length is being created" << endl;
    this->length = length;
}

// 使用初始化列表来初始化字段
Box::Box(double height, double length) : height(height), length(length)
{
    cout << "Object with length is being created,height = " << height << endl;
}

// 类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行
Box::~Box()
{
    cout << "Object is being deleted" << endl;
}

double Box::get(void)
{
    return length * breadth * height;
}

// 在类的外部使用范围解析运算符 :: 定义该函数,在 :: 运算符之前必须使用类名
void Box::set(double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}

// 初始化类 Box 的静态成员,需要初始化，不然报错
int Box::objectCount = 0;

int main()
{
    Box Box1;       // 声明 Box1，类型为 Box
    Box Box2;       // 声明 Box2，类型为 Box
    Box Box3;       // 声明 Box3，类型为 Box
    Box Box4(20.0); // 声明 Box4，length值为20.0，类型为 Box

    double volume = 0.0; // 用于存储体积

    // box 1 详述
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // box 2 详述
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    // box 1 的体积
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Box1 的体积：" << volume << endl;

    // box 2 的体积
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Box2 的体积：" << volume << endl;

    // box 3 详述
    Box3.set(16.0, 8.0, 12.0);
    // 调用成员函数是在对象上使用点运算符（.）
    volume = Box3.get();
    cout << "Box3 的体积：" << volume << endl;

    Box1.sayHello();

    Box4.height = 10.0;
    Box4.breadth = 13.0;
    volume = Box4.height * Box4.length * Box4.breadth;
    cout << "Box4 的体积：" << volume << endl;

    Box box5(1.0, 2.0, 3.0);
    Box box6(1.0, 3.0, 5.0);
    Box box7(2.0, 3.0, 5.0);

    cout << "ObjectCount = " << Box::objectCount << endl;

    return 0;
}
