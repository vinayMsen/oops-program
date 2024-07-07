#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class house
{
    //memeber variables
    protected :
    int length,breadth;

    //memeber functions
    public :
    void setdata(int x, int y)
    {
        length= x;
        breadth= y;
    }
    void area()
    {
        cout<<length*breadth<<endl;
    }
};
// separate inherited class
class kamare : public house
{
  
};
 
 // other class
 class makaan
 {

 };

int main()
{
    house h1,h2;
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