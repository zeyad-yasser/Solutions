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

ll n,k;
cin>>n>>k;
if (n%2!=0)
{
  ll z=(n/2)+1;
    if (k<=z){cout<<(2*k)-1;}
    else {cout<<(k-z)*2;}
}

else
{

    if (k<=((n/2))){cout<<(2*k)-1;}
    else {cout<<(k-(n/2))*2;}

}








    return 0;
}
