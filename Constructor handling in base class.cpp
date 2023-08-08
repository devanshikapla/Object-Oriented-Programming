
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A{
    
    protected:
    int a;
    public: 
    A(int x){
        a = x;
    }
    void display(){
        cout<<"\n A = "<<a;
    }
};

class B{
    protected :
    int b;
    public:
    B(int y){
        b = y;
    }
    
    void putData(){
        cout<<"\n B = "<<b;
    }
};

class C : public A , public B{
    int c;
    public :
    C(int p , int q , int r): A(p) , B(q)
    {
        c = r;
    }
    void show(){
        cout<<"\n C = "<<c;
    }
};

int main(){
    C aa(10,20,30);
    aa.display();
    aa.putData();
    aa.show();
    return 0;
}
