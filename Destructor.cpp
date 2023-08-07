#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int cnt = 0;

class Demo{
    public:
    Demo(){
        cnt = cnt + 1;
        cout<<"Constructor envoked"<<endl;
        cout<<"Number of object created : "<<cnt<<endl;
    }
    
    ~Demo(){
        cnt = cnt - 1;
        cout<<"Destructor envoked"<<endl;
        cout<<"Number of object destroyed : "<<cnt<<endl;
    }
    
};
int main(){
    Demo aa , bb , cc;
    
}
