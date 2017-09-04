#include <climits>
#include <cassert>
#include <iostream>
using namespace std;


class P;
template <typename T> class People{
    friend T;
};

People<P> PP;
People<int> Pi;

int main() {

    return 0;
}
