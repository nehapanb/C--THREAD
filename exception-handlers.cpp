#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first no\n";
    cin>>a;

    cout<<"enter second no\n";
    cin>>b;

    try
    {
     if(b<=0)
     {
        throw b;
     }
     cout<< a/b;

    }
    catch(int b)
    {
        cout<<"denominater can not be zero";
    }
    cout<<"\n done\n";
    
    
}