#include <bits/stdc++.h>

using namespace std;

int main()
{
      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    for (int i=0;i<n;i++)
    {


   long long x,ans;cin>>x;
long long dis=1-(4*(-2*x));

ans =(-1+sqrt(dis))/(2);

if (2*x==ans*(ans+1))
{
  cout <<ans<<endl;
}
else {
        cout<<ans+1<<endl;}
    }
    return 0;
}
