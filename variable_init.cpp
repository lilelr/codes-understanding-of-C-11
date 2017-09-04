#include <climits>
#include <cassert>
#include <iostream>
using namespace std;

struct init{
    int a=1;
    double  b{1.2};
};


int main() {
    init yy;
    yy.a = 6;
    return 0;
}
