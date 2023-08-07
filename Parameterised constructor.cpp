#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Demo{
    int a , b;
    public:
        //parameterized constructor
       Demo(int m , int n){
           a = m;
           b = n;
       }
       void putData(){
           cout<<"\na : "<<a<<"\nb : "<<b;
       }
};


int main()
{
    Demo aa(6,0);
    aa.putData();
    

    return 0;
    
}
