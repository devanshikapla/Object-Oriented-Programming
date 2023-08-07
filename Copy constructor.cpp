#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Demo{
    int a;
    public:
        Demo(){
            a = 10;
        }
        Demo(Demo & z){
            a = z.a;
        }
        void putData(){
            cout<<"\n A = "<<a;
        }
};


int main()
{
   Demo aa;
   Demo bb(aa);
   Demo cc = bb;
   aa.putData();
   cout<<"\n"<<endl;
   cout<<"bb object called "<<endl;
   bb.putData();
   cout<<"\n"<<endl;
   cout<<"cc object called "<<endl;
   cc.putData();
    

   return 0;
    
}
