// override 重写
// C++11 中的 override 关键字，可以显式的在派生类中声明，哪些成员函数需要被重写，如果没被重写，则编译器会报错。

class Base
{
public:
    virtual void fun1() const;
    virtual void fun2(int x);
    virtual void fun3() &;
    void fun4() const; // is not declared virtual in Base
};

class Derived : public Base
{
public:
    virtual void fun1() override;
    virtual void fun2(unsigned int x) override;
    virtual void fun3() && override;
    virtual void fun4() const override;
};

