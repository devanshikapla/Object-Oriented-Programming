#include <iostream>
#include <bits/stdc++.h>

using namespace std;
//Early binding compiler knows what will be executed.
class A{
    public:
    void show(){
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
    B aa;
    aa.show();
    aa.A.show();
    return 0;
}
