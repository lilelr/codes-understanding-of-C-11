#include <climits>
#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <type_traits>
#include <typeinfo>

using namespace std;

class White {
};

class Black {
};

//template<typename T1, typename T2>
//void Sum(T1 &t1, T2 &t2, decltype(t1 + t2) &s) {
//    s = t1 + t2;
//};

template<typename T1, typename T2>
auto Sum(T1 &t1, T2 &t2) -> decltype(t1+t2){
    return t1 + t2;
};



int main() {

    long la = 123;
    float fb = 4.5f;
    auto res = Sum(la,fb);
    cout<<res<<endl;



    return 0;
}
