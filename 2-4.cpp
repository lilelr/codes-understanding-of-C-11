#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

const char* hello(){
    return __func__;
}

const char* world(){
    return __func__;
}
struct  TestStruct{
    TestStruct():name(__func__){}
    const char* name;
};

#define LOG(...){\
   fprintf(stderr,"%s: Line: %d:\t",__FILE__,__LINE__);\
   fprintf(stderr,__VA_ARGS__);\
   fprintf(stderr,"\n");\
}


int main() {

    cout<<"Standard Clib:"<<__STDC_HOSTED__<<endl;
    cout<<"Standard C: "<<__STDC__<<endl;
    cout<<hello()<<","<<world()<<endl;
    TestStruct ts;
    cout<<ts.name<<endl;
//    cout<<__STDC_VER

    int x = 3;
    LOG("x = %d", x);
    return 0;
}