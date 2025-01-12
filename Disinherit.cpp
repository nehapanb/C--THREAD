#include<iostream>
using namespace std;
int main(){
class company 
{
    public :virtual void empinfo()final
    {
        cout << " Total emp:100000\n ";

    }
};
class BhopalBranch : public company
{
    public:void empinfo()

    {
        cout<<"\n Total employee 600000\n";
    }
};
int main()
{
    Bhopal Branch p;
    p.empinfo();

}
}
