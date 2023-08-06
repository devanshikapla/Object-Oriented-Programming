#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Demo{
    int a,b;
    public:
    Demo(){
        a = 10;
        b = 20;
    }
    void putData();
};

void Demo :: putData(){
    cout<<"A = "<<a<<"\tB = "<<b;
}

int main(){
    
    Demo aa;
    aa.putData();
    return 0;
}
