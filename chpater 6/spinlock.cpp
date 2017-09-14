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
using namespace std;

std::atomic_flag lock=ATOMIC_FLAG_INIT;
void f(int n){
    while (lock.test_and_set(std::memory_order_acquire)){
        cout<<"Waiting from thread "<<n<<"\n"<<endl;
    }
    cout<< "Thread "<<n<< " starts working "<<"\n"<<endl;

}

void g(int n){
    cout<<"Thread "<<n<<"is going to start."<<"\n"<<endl;
    lock.clear();
    cout<<"Thread "<<n<<" starts working "<<"\n"<<endl;
}

int main() {

    lock.test_and_set();
    thread t1(f,1);
    thread t2(g,2);
    t1.join();
    usleep(100);

    t2.join();
    return 0;
}
