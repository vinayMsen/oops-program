#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class house
{
    //memeber variables
    private :
    int length,breadth;

    //memeber functions
    public :
    void setdata(int x, int y)
    {
        length= x;
        breadth= y;
    }
    public :
     void area()
    {
        cout<<length*breadth<<endl;
    }

};

int main()
{
    house h1;
    int t;
    for(cin>>t; t; t--)
    {
        int x,y;
        cin>>x>>y;
        h1.setdata(x,y);
        h1.area();
    }
    return 0;
}