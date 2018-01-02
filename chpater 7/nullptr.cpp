#include <climits>
#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <type_traits>
#include <typeinfo>
#include <memory>
#include <atomic>
#include <thread>
//#include <cstdatomic>
#include <unistd.h>
#include <cstdlib>
/* at_quick_exit example */
#include <stdio.h>      /* puts */
#include <stdlib.h>     /* at_quick_exit, quick_exit, EXIT_SUCCESS */
using namespace std;

void fun(char* p){
    ccout<< "invoke fun(char* ) "<< endl;
}

void fun(int){
    cout<<"invoke fun(int)"<<endl;
}

template <typename T> void g(T* t){}
template <typename  T> void h(T t){}


int main ()
{
    fun(nullptr);
    fun(0);

    char* cp = nullptr;
//    int n1 = nullptr;
//    int n2 = reinterpret_cast<int>(nullptr);

    nullptr_t nptr;
    if(nptr == nullptr){
        cout<<"nullptr_t nptr == nullptr "<<endl;
    }else{
        cout<<"nullptr_t nptr != nullptr"<<endl;
    }
    if (nptr < nullptr){
        cout<<"nullptr_t nptr < nullptr"<<endl;
    }else{
        cout<<"nullptr_t nptr !< nullptr"<<endl;
    }
    if (sizeof(nullptr_t) == sizeof(void*)){
        cout<<" sizeof(nullptr_t) == sizeof(void*)"<<endl;
    }
    sizeof(nullptr);
    typeid(nullptr);

//    throw(nullptr);

    g(nullptr);
    g((float*) nullptr);

    h(0);
    h(nullptr);
    h((float*) nullptr);
    return 0;
}
