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

int z;
float c;
void Calc(int& , int, float&, float);

void TestCalc(){
    int x,y = 3;
    float a,b = 4.0;
    int success = 0;
    auto validate = [&]() -> bool
    {
        if((x==y+z) && (a==b+c))
            return 1;
        else
            return 0;
    };
    Calc(x,y,a,b);
    success += validate();
    y=1024;
    b=1e13;
    Calc(x,y,a,b);
    success += validate();
}

int main ()
{
    int a1 = 3;
    int b1 = 4;
    [=]{return a1+b1;};
    auto fun1 = [&] (int c1) {b1=a1+c1;};
    auto fun2 = [=,&b1](int c2)->int{return b1+=a1+c2;};

    return 0;
}
