#include<iostream>
using namespace std;
int main()
{
    int b;
    cout<<"enter number either 1,2,3\n";
    cin>>b;
    try{
        if(b==1)
        {
            throw'a';
        }
        else if(b==2)
        {
            throw 34.56;

        }
        else if(b==3)
        {
            throw 3;

        }
        cout<<"/n Welcome\n";
    }
    catch(int n)
    {
        cout<<"\ninteger value\n";
    }
    catch(char n)
    {
        cout<<"\nchar value\n";
    }
    catch(double n)
    {
        cout<<"\nfloa5 value\n";
    }
    cout<<"\nfinished";
}