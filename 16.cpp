
#include<iostream>
using namespace std;
class basic{
public :
int a;
int b;
void getdata(void)
{
    a=10;
    b=20;
}
void putdata(void){
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
};
int main(){
    basic x;
    x.getdata();
    x.putdata();
    return 0;
}
