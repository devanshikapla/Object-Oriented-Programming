#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Demo{
    int a;
    public:
    Demo(){
        a = 10;
    }
    Demo (int x){
        a = x;
    }
    Demo (Demo & z){
        a = z.a;
    }
    void putData(){
        cout<<"A = "<<a<<endl;
    }
};

int main(){
    Demo aa;
    cout<<"Default constructor called "<<endl;
    
    aa.putData(); 
    cout<<"\n"<<endl;
    Demo bb(20);
    cout<<"Parameterized constructor called "<<endl;
    bb.putData();
    cout<<"\n"<<endl;
    
    Demo cc(aa); 
    cout<<"Copy constructor called "<<endl;
    
    cc.putData();
    cout<<"\n"<<endl;
}
