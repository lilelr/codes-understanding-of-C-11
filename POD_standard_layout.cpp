#include <climits>
#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <type_traits>
using namespace std;

struct B1{};
struct B2{};

struct D1 : B1{
    B1 b; // 第一个非静态变量跟基类相同
    int i;
};

struct D2 : B1{
    B2 b;
    int i;
};


struct SLayout1 {};
struct SLayout2{
private:
    int x;
    int y;
};

struct SLayout3 : SLayout1{
    int x;
    int y;
    void f();
};

struct SLayout4 : SLayout1{
    int x;
    SLayout1 y;
};

struct SLayout5 : SLayout1, SLayout3{};

struct SLayout6{static int y;};

struct SLayout7:SLayout6 {int x;};

struct NonSLayout1 : SLayout1{
    SLayout1 x;
    int i;
};

struct NonSLayout2 : SLayout2{
    int z;
};

struct NonSLayout3 : NonSLayout2{};

struct NonSLayout4{
public:
    int x;
private:
    int y;
};

union U{};
union U1{U1(){}};
enum E{};
typedef double* DA;
typedef void (*PF)(int, double);

int main() {
    D1 d1;
    D2 d2;
    cout<<hex;
    cout<< reinterpret_cast<long long>(&d1)<<endl;
    cout<< reinterpret_cast<long long>(&(d1.b))<<endl;
    cout<< reinterpret_cast<long long>(&(d1.i))<<endl;

    cout<< reinterpret_cast<long long>(&d2)<<endl;
    cout<< reinterpret_cast<long long>(&(d2.b))<<endl;
    cout<< reinterpret_cast<long long>(&(d2.i))<<endl;

    cout<<is_standard_layout<SLayout1>::value <<endl;
    cout<<is_standard_layout<SLayout2>::value <<endl;
    cout<<is_standard_layout<SLayout3>::value<<endl;
    cout<<is_standard_layout<SLayout4>::value<<endl;
    cout<<is_standard_layout<SLayout5>::value<<endl;
    cout<<is_standard_layout<SLayout6>::value<<endl;
    cout<<is_standard_layout<SLayout7>::value<<endl;

    cout<<is_standard_layout<NonSLayout1>::value<<endl;
    cout<<is_standard_layout<NonSLayout2>::value<<endl;
    cout<<is_standard_layout<NonSLayout3>::value<<endl;
    cout<<is_standard_layout<NonSLayout4>::value<<endl;

    cout<<"judging POD"<<endl;
    cout<<is_pod<U>::value<<endl;
    cout<<is_pod<U1>::value<<endl;
    cout<<is_pod<E>::value<<endl;
    cout<<is_pod<int>::value<<endl;
    cout<<is_pod<DA>::value<<endl;
    cout<<is_pod<PF>::value<<endl;
    return 0;
}
