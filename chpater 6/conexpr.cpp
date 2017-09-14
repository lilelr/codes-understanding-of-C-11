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

constexpr int f();
int a = f();
const int b= f();
constexpr int f(){return 1};
constexpr int d = f();

struct MyType{
    constexpr MyType(int x):i(x){}
    int i;
};
constexpr MyType mt = {0};

int main() {


    return 0;
}
