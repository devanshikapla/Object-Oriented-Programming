
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class A{
    protected :
    int x;
    public:
    void input(){
        cout<<"\n Enter number :";
        cin>>x;
    }
};

class B : public A{
    int y;
    public:
    void getData(){
        cout<<"\n Enter a number :";
        cin>>y;
        
    }
    void putData(){
        cout<<"\n Addition :"<<x + y;
    }
};

int main()
{
    B aa;
    aa.input();
    aa.getData();
    aa.putData();
    

    return 0;
}
