//call by value
#include <iostream>
using namespace std;
void swap(int x, int y){
    int swap;
    swap=x;
    x=y;
    y=swap;
}
int main() {
 int a=5,b=2;
 swap(a,b);
 cout<<"value of a is"<<a<<endl;
 cout<<"value of b is"<<b<<endl;

    return 0;
}
