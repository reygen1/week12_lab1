#include <iostream>
using namespace std;
#define val 33.3;
#define number 50;
int a;
int& fun(){
    return a;
}
int foo(){
    return a;
}
int main() {
    int n1=9,n2=11, *ptr_1= nullptr, *ptr_2= nullptr, k=0;
    double t;
    //*ptr_1=&n1;
    ptr_1 = &n2;

    //ptr_1=&n2;
    ptr_2 = &n1;
    t = val;
    fun() = number;
    //*ptr_2=&n2;
    //ptr_2=&n1;
    //t=val;
    //k=val;
    //foo()=number;
    //fun()=number;
    cout<<foo()<<" "<<++(*ptr_1)<<" "<<--t<<" "<< --(*ptr_2)<<endl;
return 0;
}