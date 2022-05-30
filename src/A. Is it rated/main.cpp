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

int n;cin>>n;
int z,y;
int a[n];
int b[n];
for (int i=0;i<n;i++)
{
    cin>>z;cin>>y;

    a[i]=z;  b[i]=y;
 if (z!=y){cout<<"rated";return 0;}
}

for (int i=1;i<n;i++)
{
    if (a[i]>a[i-1]){cout<<"unrated";return 0;}
}

cout <<"maybe";






    return 0;
}
