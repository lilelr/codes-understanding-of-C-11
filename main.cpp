#include <climits>
#include <cassert>
#include <iostream>

using namespace std;

struct Rational1 {
    Rational1(int n = 0, int d = 1) : num(n), den(d) {
        cout<<__func__<<"  "<<num<<" "<<den<<endl;

    }

    int num;
    int den;
};

void Display1(Rational1 ra){
    cout<<__func__<<ra.num<<" "<<ra.den<<endl;
}
struct Rational2 {
    explicit  Rational2(int n = 0, int d = 1) : num(n), den(d) {
        cout<<__func__<<"  "<<num<<" "<<den<<endl;
    }

    int num;
    int den;
};

void Display2(Rational2 ra){
    cout<<__func__<<ra.num<<" "<<ra.den<<endl;
}

int main() {
    Rational1 r1_1 = 11;
    Rational1 r1_2 (12);

//    Rational2 r2_1 = 21;
    Rational2 r2_2(22);

    Display1(1);

    Display2(Rational2(3));
//    Display2(2);
    return 0;
}
