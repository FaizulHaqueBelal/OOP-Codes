#include<iostream>
using namespace std;
int main(){
    const int n = 10;
    //int n = 15;//just to show the value will not change.//
    cout<<"n= "<<n<<endl;
    for(int i=1;i<=n;i++){//without static value//
        int x =0;
        cout<<x<<endl;
        x++;
    }
    for(int i=1;i<=n;i++){//with static value//
        static int y =0;
        cout<<y<<endl;
        y++;
    }
    return 0;
}
