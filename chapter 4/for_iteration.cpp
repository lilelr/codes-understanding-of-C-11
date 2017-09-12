#include <climits>
#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <type_traits>
#include <typeinfo>

using namespace std;



int main() {


    int arr[5] = {1,2,3,4,5};
    for(int & e:arr){
        e*=2;
    }
    for(int & e: arr){
        cout<< e<<'\t';
    }

    for(auto e:arr){
        cout<<e<<'\t';
    }

    vector<int> v = {1,2,3,4,5};

    for (auto i=v.begin();i!=v.end();i++){
        cout<<*i<<endl;
    }

    for(auto e:v){
        cout<<e<<endl;
    }

    return 0;
}
