//
// Created by YuXiao on 4/14/18.
//
#include <iostream>

using namespace std;

class Point
{
public:
    Point(int xx = 0, int yy = 0) { X = xx; Y = yy; countP ++; }
    Point(Point &p);
    ~Point() { countP --; }
    int GetX() { return X; }
    int GetY() { return Y; }
    void GetC() { cout << "Object id = " << countP << endl; } //输出静态数据成员
private:
    int X, Y;
    static int countP; //静态数据成员声明，用于记录点的个数
};

Point :: Point(Point &p)
{
    X = p.X;
    Y = p.Y;
    countP ++; //在构造函数中对countP累加，所有对象共同维护同一个countP
}

//int Point :: countP = 0; //静态数据成员定义和初始化，使用类名限定
int Point :: countP =2;
class HasPtrMem{
public:
    HasPtrMem():d(new int(0)){
        cout << "Construct: "<<++n_cstr <<endl;
    }

    HasPtrMem(const HasPtrMem& h):d(new int(*h.d)){
        cout<< "Copy construct: "<<++n_cptr <<endl;
    }
    HasPtrMem(HasPtrMem&& h):d(h.d){
        h.d = nullptr;
        cout<<"Move construct: "<<n_mvtr++<<endl;
    }

    ~HasPtrMem(){
        delete  d;
        cout<<"Destruct: "<<++n_dstr <<endl;
    }

    int* d;
    static int n_cstr;
    static  int n_dstr;
    static int n_cptr ;
    static int n_mvtr;

};
int HasPtrMem:: n_cstr = 0;
int HasPtrMem:: n_dstr = 0;
int HasPtrMem:: n_cptr = 0;
int HasPtrMem:: n_mvtr =0;

//
//HasPtrMem GetTemp() {
//    return HasPtrMem();
//}


HasPtrMem GetTemp() {
    HasPtrMem h;
    cout<<"Resource from "<< __func__ <<": "<<hex <<h.d<<endl;
    return h;
}
int main(){
    HasPtrMem a = GetTemp();
    cout<<"Resource from "<< __func__ <<": "<<hex<< a.d<<endl;
}
