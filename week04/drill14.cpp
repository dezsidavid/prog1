#include <iostream>


class B1 {
public:
    virtual void pvf() = 0;
    void f() {
        std::cerr << "B1::f()\n";
    }
    virtual void vf() {
        std::cerr << "B1::vf()\n";
    }
};

class D1 : public B1 {
public:
    void f() {
        std::cerr << "D1::f()\n";
    }
    void vf() override {
        std::cerr << "D1::vf()\n";
    }
    void pvf() override {
        std::cerr << "D1::pvf()\n";
    };
};

class D2 : public D1 {
public:
    void pvf() override {
        std::cerr << "D2::pvf()\n";
    };
};

class B2 {
public:
    virtual void pvf() = 0;
};

class D21 : public B2 {
public:
    void pvf() override {
        std::cerr << str << std::endl;
    }

private:
    std::string str{"string"};
};

class D22 : public B2 {
public:
    void pvf() override {
        std::cerr << i << std::endl;
    }

private:
    int i{0};
};

void f(B2 &bb) {
    bb.pvf();
}

int main() {

    /*
    D1 d;
    d.f();
    d.vf();
    d.pvf();

    B1 &BR = d;
    BR.f();
    BR.vf();
    BR.pvf();

    D2 dd;
    dd.f();
    dd.vf();
    dd.pvf();
    */

    D21 bbd;
    D22	bbdd;

    f(bbd);
    f(bbdd);

    return 0;
}
