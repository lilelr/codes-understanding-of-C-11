#include <climits>
#include <cassert>
using namespace std;

// static assert
char* ArrayAlloc(int n){
    assert(n > 0);
    return new char [n];
}

int positive(const int n){
    static_assert(n ==  0 , "value must > 0 ");
}

template <typename t, typename u> int bit_copy(t& a, u& b){
    static_assert(sizeof(b) == sizeof(a), "the parameters of bit_copy must have same width.");

};

int main() {
    char* a = ArrayAlloc(0);

    int c = 100;
    double b;
//    bit_copy(c,b);

    return 0;
}
