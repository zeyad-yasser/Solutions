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
   int t; cin>>t;
   while (t--)
   {
    ll n ,o_p=0,e_p=0,o_q=0,e_q=0,cnt=0; cin>> n; ll p[n];
       for (int i=0;i<n;i++)
        {
            cin>>p[i];
            if (p[i]%2==0||p[i]==0){e_p++;}
            else {o_p++;}

        }

       int m; cin>>m;  ll q[m];
       for (int i=0;i<m;i++)
        {
            cin>>q[i];
             if (q[i]%2==0||q[i]==0){e_q++;}
            else {o_q++;}
        }


       cout<<(o_p*o_q)+(e_p*e_q)<<"\n";
   }








    return 0;
}
