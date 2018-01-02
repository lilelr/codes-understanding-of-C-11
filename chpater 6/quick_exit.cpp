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

struct A{
    ~A(){
        cout<< "Destruct A."<<endl;
    }
};

void fnQExit (void)
{
    puts ("Quick exit function.");
}

int main ()
{
    A a;
    at_quick_exit (fnQExit);
    puts ("Main function: Beginning");
    quick_exit (EXIT_SUCCESS);
    puts ("Main function: End");  // never executed
    return 0;
}
