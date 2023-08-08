
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A{
    protected:
    int a;
    public: 
    void input(){
        cout<<"\n Enter a number : ";
        cin>>a;
    }
    
};
class B{
    protected:
    int b;
    public: 
    void getData(){
        cout<<"\n Enter No : ";
        cin>>b;
    }
};

class C : public A , public B{
    public:
    void addition(){
        cout<<"\n Addition : "<<a + b;
    }
};

int main(){
    C aa;
    aa.input();
    aa.getData();
    aa.addition();
    return 0;
}
