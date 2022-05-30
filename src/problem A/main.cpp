#include <iostream>

using namespace std;

int main()
{
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int x=0,y=0,l;
long long sum;
int zz=0;
int countr=0;
int z=0;
long mod;
int n ;cin>>n>>mod;
cin>>x>>y>>l;
    int num[n][n];


   for (int i=0; i<n ;i++)
    {
           for (int j=0; j<n ;j++)
           {
                cin>>num[i][j];
           }
    }

    while(zz!=l)
    {

    for (int i=(x-1); i<n ;i++)
    {


           for (int j=(y-1); j<n ;j++)
           {

                sum=((sum%mod)+(num[i][j]%mod))%mod;
                countr++;
                 if (countr==l-1){ break;}

           }

               countr=0;

            if (z==l-1){ break;}
             z++;

    }
    zz++;


    }







    cout << sum  << endl;
    return 0;
}
