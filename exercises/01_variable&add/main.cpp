#include "../exercise.h"
#include <iostream>
using namespace std;
// READ: 运算符 <https://zh.cppreference.com/w/cpp/language/expressions#.E8.BF.90.E7.AE.97.E7.AC.A6>
class X {
    private:
    int _x;
    public:
    friend ostream & operator <<(ostream & os,X &x);
     X(int x):_x(x){
     }

     ~X(){
     }
     X& operator +(X &right){
        _x+=right._x;
        return *this;
     }

};
ostream & operator <<(ostream & os,X &x){
    os<<x._x;
    return os;

}
int main(int argc, char **argv) {
    // TODO: 补全变量定义并打印加法运算
    // x ?
    X x(1);
    std::cout << x << " + " << x << " = " << x + x << std::endl;
    return 0;
}
