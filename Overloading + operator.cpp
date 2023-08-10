#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class demo{
    int a;
    public:
    void getData(){
        cout<<"Enter a number : "<<endl;
        cin>>a;
    }
    void putData(){
        cout<<"Value = "<<a;
    }
};

demo operator+(demo bb){
    demo cc;
    cc.a = a + bb.a;
    return cc;
}
int main()
{
    demo aa,bb,cc;
    aa.getData();
    bb.getData();
    cc = aa + bb;
    

    return 0;
}
