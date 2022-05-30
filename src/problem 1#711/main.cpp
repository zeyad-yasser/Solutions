#include <bits/stdc++.h>
using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define endl '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push


#define mk(arr,n,type)  type *arr=new type[n];
void c_p_c()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    c_p_c();
    int t;cin>>t;

   while (t--)

{
    ll n; cin>>n;
     for ( ll i = n ; ; i++)
     {
         ll num=i ,sum=0;
       while (num>0)
        {
           sum+=num%10;
            num/=10;
        }


         {
               if( __gcd(sum,i)>1){cout<<i<<"\n"; break;}
         }
     }

}

return 0;
}





