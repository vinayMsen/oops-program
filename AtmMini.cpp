

#include <bits/stdc++.h>
#define vi vector<long long int>
//#define pp pop_back // This is unnecessary and incorrect
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define ll long long 
#define ff first
#define ss second

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
#define JAYSHRIRAM ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

class Atm                     // class atm
{
    private:                  // private member variables;
      ll int account_No;
      string name;
      int Pin;
      long double balance;
      string mobile_No;

    public:                   // public member function
    //setdata function is setting data into the private member variables
    void setdata(ll int account_no, string name, int pin, long double balance,string mobile_no)
    {
    // assigning formal arguments to the private member;
        account_No= account_no;
        name= name;
        Pin= pin;
        balance = balance;
        mobile_No= mobile_no;

    }
    ll int getAccountno()
    {
        return account_No;
    }
    string getName()
    {
        return name;
    }
    int getPin()
    {
        return Pin;
    }
    long double getBalance()
    {
        return balance;
    }
    string getMobileNO()
    {
        return mobile_No;
    }
    void setMobile(string mob_prev,string mob_new)
    {
        if(mob_prev == mobile_No)
        {
            mobile_No= mob_new;
            cout<<"\n Sucessfully Updated the Mobile No.";
           
        }
        else
        {
            cout<<"\n Incorrect !!! Old Mobile No";
        }
    }

    void cashwithDraw(int amount_a)
    {
        if(amount_a>0 && amount_a< balance)
        {
            balance-= amount_a;
            cout<<"\n Please COllect Your Cash";
            cout<<"\n Available Balance is :"<< balance;
        }
    }
      
};


int main() 
 {
    JAYSHRIRAM
     
    int choice =0, enterPin;
    ll int enterAccountNo;
    system("cls");
    
    // created user (object)
    Atm user1;
    // Set User Details (into Object)    // setting Default data
    user1.setdata(465102010968, "Vinay Sen",4747, 45000.2, "8269435139");

    do 
    {
        system("cls");
        cout<<"\n ***** WelCome To the OOPs ATM*****\n";
        cout<<endl<<"Enter Your Account Number: ";
        cin>> enterAccountNo;

        cout<<"\n Enter Your PIN"<<endl;
        cin>>enterPin;
        // checking authentication 
        if(enterAccountNo == user1.getAccountno() && enterPin== user1.getPin())
        {
            do
            {
                /* code */
            } while (choice!=5);
            
            
        }

    }while(1);

    
    return 0;
}

    /* 1:check balance
    -> 2:cash withdraw
    -> 3:show user details
    -> 4:update Mobile No.
    // 5:exit
    */