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
ll n,m,z=0,y=MAX;
 cin>>n>>m;
 int arr[m+1]={ };


 for (int i=1;i<=m;i++)
{
    cin>>arr[i];
}

sort(arr+1,arr+m+1);


for (int i=1;i+(n-1)<=m;i++)
{
    z=abs(arr[i]-arr[i+(n-1)]);
    y=min(z,y);
}
cout<<y;




    return 0;
}
