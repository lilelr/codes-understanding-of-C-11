#include <climits>
#include <cassert>
#include <iostream>
using namespace std;

struct Base{
    virtual void Turing() = 0;
    virtual void Dijstra() = 0;
    virtual void VNeumann(int g) = 0;
    virtual void DKnuth() const;
    void Print();
    void fun() final ;
};
struct DerivedMid: public Base{
    void VNeumamn(double g);
    void fun();
};

struct DerivedTop: public DerivedMid{
    void Turing() override;
    void Dikjstra() override;
    void VNeumamn(double g) override;
    void DKnuth() override ;
    void Print() override ;
};

int main() {

    return 0;
}
