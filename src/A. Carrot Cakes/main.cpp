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

ll n,t,k,d;

cin>>n>>t>>k>>d;

ll t_1=0,t_2=d;

int rnd=(n+k-1)/k;

for (int i=0;i<rnd;i++)
{
    if (t_1<=t_2){t_1+=t;}
    else {t_2+=t;}
}


if (max(t_1,t_2)<rnd*t){cout<<"YES";}
else {cout <<"NO";}

    return 0;
}
