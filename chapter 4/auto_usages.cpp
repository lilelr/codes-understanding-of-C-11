#include <climits>
#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <type_traits>
using namespace std;

template<typename T1, typename T2>
double Sum(T1& t1, T2& t2){
    auto s = t1+t2;
    return s;
};


//int x;
//int* y = &x;
//double foo();
//int& bar();
//auto* a = &x;
//auto& b = x;
//auto c = y;
//auto* d = y;
////auto* e = &foo();
////auto& f = foo();
////auto g = =bar();
//auto& h = bar();

double foo();
float *bar();
const auto a = foo();
const auto& b = foo();
volatile auto* c = bar();
auto d = a;
auto& e = a;
auto f = c;
volatile auto &g = c;

auto x= 1;
auto x1(1);
auto y{1};
auto z = new auto(1);

int main() {
    auto name  = "world.\n";
    cout<<"hello, "<<name;

    cout<<endl;
    double foo=8.9;
    auto x = 1;
    auto y = foo;
    struct m{int i;} str;
    auto str1 = str;

//    unsigned int a = 4294967295;
//    unsigned int b = 1;
//    auto c = a+b;
//    cout<<"a = "<<a<<endl;
//    cout<<"b = "<<b<<endl;
//    cout<<"a + b = "<<c <<endl;

    int a = 3;
    long b = 5;
    float c = 1.0f, d = 2.3f;
    auto e = Sum<int,long>(a,b);
    auto f = Sum<float, float>(c,d);


    return 0;
}
