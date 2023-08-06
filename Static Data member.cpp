#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Demo{
    int x , y;
    static int z;
    public :
    void getData(int a , int b){
        x = a;
        y = b;
        z = z + 1;
    }
    void putData(){
        cout<<"\nx = " << x <<"\ny = "<<y<<"\nz = "<<z;
    }
};
//mandatory line for static variables;
int Demo :: z;

int main()
{
    Demo aa, bb;
    aa.getData(5,10);
    bb.getData(20,30);
    aa.putData();
    

    return 0;
    
}
