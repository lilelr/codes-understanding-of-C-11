#include <climits>
#include <cassert>
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

enum  Gender{boy,girl};
class People{
public:
    People(initializer_list<pair<string, Gender>> l){
        auto i = l.begin();
        for(;i!=l.end();++i){
            data.push_back(*i);
        }
    }

private:
    vector<pair<string,Gender>> data;
};
int a[] = {1,3,4};
int b[] {3,4,5};
vector<int> c{1,3,5};
map<int, float> d = {{3,1.0f}, {2,2.0f}};

void Fun(initializer_list<int> iv)
{

}

class Mydata{
public:
    Mydata& operator[](initializer_list<int> l){
        for(auto i=l.begin();i!=l.end();++i){
            idx.push_back(*i);
        }
        return *this;
    }

    Mydata& operator=(int v){
        if(idx.empty() != true){
            for (auto i=idx.begin();i!=idx.end();++i) {
                d.resize(*i>d.size() ? *i: d.size());
                d[*i-1] = v;
            }
            idx.clear();
        }
        return *this;
    }

    void Print(){
        for(auto i=d.begin();i!=d.end();++i){
            cout<<*i<<" ";
        }
        cout<<endl;
    }
private:
    vector<int> idx;
    vector<int> d;
};

int main() {
    int* i = new int(1);
    double* d = new double{1.2f};
    People ship2012 = {{"Garfield", boy},{"HelloKitty",girl}};
    Fun({2,3});
    Fun({});

    Mydata e;
    e[{2,3,5}]=3;
    e[{1,4,5,8}] = 4;
    e.Print();
    return 0;
}
