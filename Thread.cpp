#include<iostream>
using namespace std;
void even (int start,int ends)
{
    for (int i=start; i<=ends; i++)
    {
        if(i%2==0)
        {
            cout<<"Even no="<<i<<"\t";
        
        }
    }
}
void odd (int start,int ends)
