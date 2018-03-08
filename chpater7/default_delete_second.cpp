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

class TwoCstor{
public:
    TwoCstor() = default;
    TwoCstor(int i):data(i){}

private:
    int data;
};

class NoCopyCstor{
public:
    NoCopyCstor() = default;
    NoCopyCstor(const NoCopyCstor &) = delete;
};
int main ()
{
    NoCopyCstor a;
//    NoCopyCstor b(a);
    cout<<is_pod<TwoCstor>::value<<endl;
    return 0;
}
