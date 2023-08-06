#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Demo{
    int x;
    static int y;
    public :
    void getData(int a){
        x = a;
        y = y + 1;
    }
    void putData(){
        cout<<"\n x :" << x << "\n y :" << y;
        
    }
    static void abc(){
        cout<<"\n y :"<<y;
    }
};

int Demo :: y;

int main(){
    Demo aa;
    aa.getData(10);
    aa.putData();
    cout<<"\nstatic Method called"<<endl;
    Demo :: abc();
    return 0;
}
