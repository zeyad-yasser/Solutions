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

ll a,b;
cin>>a>>b;
if (a==1&&b==1)
    {
      cout <<"1/1";return 0;
    }
else
{
    ll z=7-max(a,b);
     if (z==1){  cout<<"1/6";return 0;}

    if (z==2){  cout<<"1/3";return 0;}

    if (z==3){ cout <<"1/2";return 0;}

    if (z==4){ cout<<"2/3";return 0;}

    if (z==5){ cout<<"5/6";return 0;}

    if (z==6){cout<<"1/3";return 0;}


}







    return 0;
}
