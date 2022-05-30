#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define z ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{

int n;cin>>n;
ll arr[n];
ll sum=0;
ll in,ex;
ll imp,ans=-1,m=0;
ll zz[10000];
for (int i=1;i<=n;i++)
{
    cin>>arr[i];
    sum+=arr[i];
}
int c; cin>>c;

for (int i=0;i<c;i++)
{
    imp=0;
    cin>>in >>ex;
    for (int j=in;j<=ex;j++)
    {
     zz[m]+= arr[j];
    }


if (ans< zz[m])
{
    ans=zz[m];
}
m++;

}
cout<<sum-ans;
    return 0;
}
