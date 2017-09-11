#include <climits>
#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <type_traits>
using namespace std;

using uint = unsigned int;
typedef unsigned int UINT;
using sint = int;
template<typename T> using MapString = std::map<T,char*>;
MapString<int> numberedString;
int main() {
    cout<< is_same<uint, UINT>::value <<endl;
    return 0;
}
