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
ll  n, m, a, b,ans=0,ans_2=0 ;
cin>> n>>m>> a>> b;
int z=n;
while (n>0)
{


        if (n>=m||b<=n)
        {
            ans+=b;
             n-=m;
        }
        else
        {
            if (a<b)
            {
                ans+=a;
                 n-=1;
            }
            else
            {
                ans+=b;
                n-=m;
            }

        }




}
while(z>0)
    {
        ans_2+=a;
        z-=1;
    }




cout<<min(ans,ans_2)<<" ";







    return 0;
}
