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

template<typename T1, typename T2>
void Sum(T1 &t1, T2 &t2, decltype(t1 + t2) &s) {
    s = t1 + t2;
};

int myhash(char*);
decltype(myhash(nullptr)) my_int;
map<char*, decltype(myhash(nullptr)) > dict_key1;

typedef double (*func) ();

void Overloaded(int);
void Overloaded(char);
int && RvalRef();
const bool Func(int);

int main() {

    int i=4;
    int arr[5] ={0};
    int* ptr = arr;
    struct S{double d;} s;

    //rule 1
    decltype(arr) var1;
    decltype(ptr) var2;
    decltype(s.d) var4;
//    decltype(Overloaded) var5;

    // rule 2
    decltype(RvalRef()) var6=1;

    //rule 3
    decltype(true ?i:i) var7 = i;
    decltype((i)) var8= i;
    decltype(++i) var9 = i;
    decltype(arr[3]) var10 =i;
    decltype(*ptr) var11 = i;
    decltype("Lval") var12 = "lval";

    // rule 4
    decltype(1) var13;
    decltype(i++) var14;
    decltype((Func(1))) var15;

    // 判断是否是左值
    cout<<is_lvalue_reference<decltype(++i)>::value<<endl;

    const int ic = 0;
    volatile  int iv;
    struct myS{int i;};
    const myS  mya = {0};
    volatile myS b;
    volatile myS* p = &b;
    cout<<is_const<decltype(ic)>::value <<endl;
    cout<<is_volatile<decltype(iv)>::value<<endl;
//    White a;
//    Black b;
//    cout<< typeid(a).name()<<endl;
//    cout<< typeid(b).name() <<endl;
//    White c;
//    bool a_b_sametype = (typeid(a).hash_code() == typeid(b).hash_code());
//    bool a_c_sametype = (typeid(a).hash_code() == typeid(c).hash_code());
//
//    cout<<"Same type?"<<endl;
//    cout<<"A and B?"<<(int)a_b_sametype<<endl;
//    cout<<"A and C?"<<(int)a_c_sametype<<endl;

//    int i;
//    decltype(i) j = 0;
//    cout << typeid(j).name() << endl;
//
//    float a;
//    double b;
//    decltype(a + b) c;
//    cout << typeid(c).name() << endl;
//
//    vector<int> vec;
//    typedef decltype(vec.begin()) vectype;
//    for (vectype i = vec.begin(); i < vec.end(); i++) {
//
//    }
//
//    vector<int>::iterator k;
//
//    for (k = vec.begin(); k < vec.end();
//         k++) {
//
//    }
//
//    int a = 3;
//    long b = 5;
//    float c = 1.0f, d = 2.3f;
//    long e;
//    float f;
//    Sum(a,b,e);
//    Sum(c,d,f);
//
//    result_of<func()>::type func;



    return 0;
}
