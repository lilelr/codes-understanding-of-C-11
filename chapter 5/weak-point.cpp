#include <climits>
#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <type_traits>
#include <typeinfo>
#include <memory>
using namespace std;

void mycheck(weak_ptr<int>& wp){
    shared_ptr<int> sp = wp.lock();
    if (sp!= nullptr){
        cout<<"still "<<*sp<<endl;
    } else{
        cout<<" pointer is invalid. "<<endl;
    }
}

int main() {

//   shared_ptr<int> sp1(new int(22));
//    shared_ptr<int> sp2 = sp1;
//    weak_ptr<int> wp = sp1;
//    cout<<*sp1<<endl;
//    cout<<*sp2<<endl;
//     mycheck(wp);
//
//    sp1.reset();
//    cout<<*sp2<<endl;
//    mycheck(wp);
//
//    sp2.reset();
//    mycheck(wp);

    int* p = new int;
    p+=10;
    p-=10;
    *p = 10;
//   get_pointer_safety()
    return 0;
}
