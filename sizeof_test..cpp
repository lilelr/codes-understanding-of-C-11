#include <climits>
#include <cassert>
#include <iostream>
using namespace std;

struct People{
    int age;
    static People* all;
};

int main() {
    People p;
    cout<< sizeof(p.age)<<endl;
    cout<< sizeof(People::all)<<endl;
    cout<< sizeof(People::age)<<endl;
    cout<< sizeof(int*)<<endl;
    return 0;
}
