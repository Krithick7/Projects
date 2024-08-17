#include<iostream>
using namespace std;
double da = 10000;
class Deposit
{
    double p;
    public:
    double pa;
    double deposit()
    {
        cout<<"\nEnter the amount to deposit : ";
        cin>>p;
        da+=p;
        cout<<"\nThe Deposited amount is "<<p<<endl<<"\n";
    }
};
class Withdrawal : public Deposit
{   
    public:
    double pa = da;
    double z;
    double withdraw()
    {
        for (int i=1; i<=3; i++)
        {
        cout<<"\nEnter the amount to withdraw from your account :";
        cin>>z; 
        if (z<=da)
        {
            cout<<"\nThe Amount Withdrawed is "<<z<<endl;
            da = da-z;
            cout<<"\nThe Balance amount is "<<da<<endl<<"\n";
            break;
        }
        else
        { 
            cout<<"\nThe amount is exceeding the limit...!\n"<<endl;
            cout<<"Your Account Balance is "<<da<<"\n"<<endl;
            continue;
        }
        }
    }
};
class Balance : public Withdrawal
{
    public:
    double balance()
    {   
        pa = da;
        cout<<"\nYour Balance amount is "<<pa<<endl<<"\n";
    }
};
int main()
    {
    int n;
    int a=1234;
    int b=a;
    cout<<"\t\t-------ATM-------"<<"\n"<<endl;
    cout<<"Enter your Password : ";
    cin>>b;
    cout<<"\n"<<endl;
    do
    {
    if (b==a)
    {
        cout<<"\t------Services------"<<"\n"<<endl;
        cout<<"\t1. Deposit \n\t2. Withdrawal \n\t3. Check Balance\n\t4. Exit"<<endl;
        cout<<"\t---------------------\n"<<endl;
        cout<<"Enter your Choice : ";
        cin>>n;
        Deposit d;
        Withdrawal w;
        Balance b;
        switch (n)
        {
            case 1:
            d.deposit();
            break;

            case 2:
            w.withdraw();
            break;

            case 3:
            b.balance();
            break;

            case 4:
            cout<<"\n\t------Thank You------"<<endl<<"\n\n";
            exit(1);
            break;
        
            default:
            float k = n;
            if (k<0)
            {
                cout<<"Wrong Choice !";
                cout<<"Enter a Correct Choice !";
                exit(1);
            }
            else{
            cout<<"\tWRONG CHOICE...!"<<endl;
            cout<<"Enter the correct choice...!\n"<<endl;
            break;}
        }
    }
    else
    {
        cout<<"Wrong Password....!"<<endl;
        cout<<"Run the Program again !!"<<endl;
        break;
    }    
    }while (true);
    }