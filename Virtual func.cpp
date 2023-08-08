#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A{
    public:
    virtual void show(){
        cout<<"\n Base Class";
    }
};
class B : public A{
    public : 
    void show(){
        cout<<"\n Derived class";
    }
};
int main()
{
    A * bptr;
    B aa;
    bptr = &aa;
    bptr -> show();
    return 0;
}
