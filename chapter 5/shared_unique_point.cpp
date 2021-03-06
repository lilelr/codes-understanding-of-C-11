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

    unique_ptr<int> up1(new int(11));
//    unique_ptr<int> up2 = up1;

    cout<< *up1<<endl;
    unique_ptr<int> up3 = move(up1);
    cout<<*up3<<endl;
//    cout<<*up1<<endl;
    up3.reset();
    up1.reset();
//    cout<<*up3<<endl;
    shared_ptr<int> sp1(new int(22));
    shared_ptr<int> sp2 = sp1;

    cout<<*sp1<<endl;
    cout<<*sp2<<endl;
    sp1.reset();
    cout<<*sp2<<endl;

    cout<<get_pointer_safety()<<endl;

    return 0;
}
