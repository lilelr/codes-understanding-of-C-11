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


int main ()
{
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
    return 0;
}
