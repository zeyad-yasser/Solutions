#include <iostream>

using namespace std;

int main()
{
     long double k,w,n,sum=0;
     long double prise=0;
     long double out;
    cin>>k;
    cin>>w;
    cin>>n;
    for (long long int i=1;i<=n;i++)

    {

   prise=i*k;
    sum=prise+sum;
    }
    out=sum-w;
    if (out>0)
cout<<out;


else if (out<=0)
cout<<"0";


    return 0;
}
