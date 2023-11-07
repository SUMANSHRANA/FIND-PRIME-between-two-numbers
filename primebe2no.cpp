#include<iostream>
using namespace std;
int main()
{
    int n1;
    int n2;

    cout<<"ENTER SATRTING NO";cin>>n1;
    cout<<"ENTER ENDIGN NO";cin>>n2;
    for(int i=n1;i<=n2;i++)
    {
        int count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0){count++;break;}
            else{continue;}
        }
        if(count==0){cout<<i<<"is a prime number";}
    }
    return 0;

}