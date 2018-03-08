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
//void Calc(int& , int, float&, float);
//
//void TestCalc(){
//    int x,y = 3;
//    float a,b = 4.0;
//    int success = 0;
//    auto validate = [&]() -> bool
//    {
//        if((x==y+z) && (a==b+c))
//            return 1;
//        else
//            return 0;
//    };
//    Calc(x,y,a,b);
//    success += validate();
//    y=1024;
//    b=1e13;
//    Calc(x,y,a,b);
//    success += validate();
//}

class _functor {
public:
    int operator()(int x, int y){
        return x + y;
    }
};

class AirportPrice{

public:
    AirportPrice(float rate):dutyfreerate_(rate){}

    float operator()(float price){
        return price * (1 - dutyfreerate_/100);
    }


private:
    float dutyfreerate_;
};

int main ()
{
//    int girls=3, boys=4;
//    auto totalChild = [](int x, int y)->int{return x+y;};
//    auto total_child = [girls, &boys]()->int{return girls + boys; };
//    cout<<totalChild<<endl;
//    cout<<total_child()<<endl;
//
//    _functor functor_total_child;
//    cout<<functor_total_child(5,6)<<endl;
//    int a1 = 3;
//    int b1 = 4;
//    [=]{return a1+b1;};
//    auto fun1 = [&] (int c1) {b1=a1+c1;};
//    auto fun2 = [=,&b1](int c2)->int{return b1+=a1+c2;};


    float tax_rate = 5.5f;
    AirportPrice Changi(tax_rate);

    auto Chani2 = [tax_rate](float price)->float{return price * (1- tax_rate/100); };

    float purchased = Changi(3699);
    float purchased2 = Chani2(3699);
    cout<<purchased<< " "<<purchased2<<endl;
    return 0;
}
