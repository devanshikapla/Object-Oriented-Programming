#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A{
    public:
    void display(){
        cout<<"\n Base Class ";
    }
};

class B : public A{
    public:
    void display(){
        cout<<"\n Derived Class ";
    }
};
int main()
{
    B aa;
    aa.display();

    return 0;
}
