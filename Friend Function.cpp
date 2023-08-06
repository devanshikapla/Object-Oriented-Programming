
#include <iostream>
#include <conio.h>
using namespace std;

class demo{
    int a,b;
    public: 
    void getData();
    friend int sum(demo);
};

void demo :: getData(){
    cout <<"Enter Two numbers: ";
    cin>>a>>b;
}

int sum(demo aa){
    return aa.a + aa.b;
}

int main()
{
    
    demo aa;
    aa.getData();
    
    cout<<"Addition = "<< sum(aa)<<endl;
    
    return 0;
}
