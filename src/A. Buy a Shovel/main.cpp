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
   ll k,z,r,i;
cin>>k>>r;

for (i=1;i<=MAX;i++)
{
    z=k*i;
    if (z%10==r||z%10==0)
    {
        cout<<i;return 0;
    }
}


//cout <<z%10;



    return 0;
}
