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
  ll a,b,c;
  ll x,y,z,v,w,u,ans;
cin>>a>>b>>c;

 z=a*b*c;
 y=a+b+c;

 v=(a+b)*c;
 x=a*(b+c);

 w=a+(b*c);
 u=(a*b)+c;

ans =max(max(max(z,y),max(v,x)),max(w,v));

cout <<ans;




    return 0;
}
