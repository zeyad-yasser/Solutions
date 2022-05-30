#include <bits/stdc++.h>

using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define el '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push

#define reed   freopen ("input.txt","r",stdin);
#define write  freopen ("output.txt","w",stdout);


#define mk(arr,n,type)  type *arr=new type[n];
void MOLLTO()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    MOLLTO();

ll r, l; cin>>l>>r;
/*
for(int i=l;i<=r;i++)
{
    for(int j=i+1;j<=r;j++)
    {
        if (__gcd(i,j)==1)
            {
               for(int k=j+1;k<=r;k++)
               {
                    if (__gcd(j,k)==1)
                   {

                       cout<<i<<" "<<j<<" "<<k; return 0;
                   }
               }
            }
    }

}
*/
    if(l%2!=0)l++;
    if(r-l<2)cout<<"-1\n";
    else cout<<l<<" "<<l+1<<" "<<l+2<<endl;

//   :)

    return 0;
}
