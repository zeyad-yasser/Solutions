#include <iostream>
#include <cmath>
using namespace std;


int main()
{

    int n;
    cin>>n;
    char  num[16];
    char rev[16];
    for(int i=15;i>=0;i--)
    {
        num [i]=(n%2);
        if(n!=0)

        {
            n/=2;
        }
    }
        int z=0;
for (int j=15 ;j>=0;j--)
{
    rev[z]=num [j];
    z++;
}
   int holder=0;

    int dec=0;
    int p=0;


    for (int i=15 ;i>=0;i--)
    {
        holder=rev[i];
        dec+=holder*pow(5,p);
        p++;
    }
    cout<<dec;



    return 0;
}
