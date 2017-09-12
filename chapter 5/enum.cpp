#include <climits>
#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <type_traits>
#include <typeinfo>

using namespace std;

enum class Type {General, Light, Medium, Heavy};
enum class Category{General=1, Pistol, MachineGun, Cannon};

enum class C: char {C1=1, C2=2};
enum class D: unsigned int{D1=1,D2=2,Dbig=0XFFFFF0U};
int main() {

    Type t = Type::Light;
//    if(t== Category::General){
//
//    }

    if (t>Type::General){
        cout<<"Not General Weapon"<<endl;
    }

    if((int)t>0){
        cout<<"Not General Weapon"<<endl;
    }

    return 0;
}
