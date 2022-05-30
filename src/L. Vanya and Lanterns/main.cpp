#include <bits/stdc++.h>
#include <iomanip>
#include<cstdlib>

using namespace std;

int main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int  n,l; cin>>n>>l;
double arr[n];
  bool zero =false;
  bool zz =false;
  for (int i=0 ;i<n;i++)
  {
      cin>>arr[i];

  }
  sort(arr,arr+n);

   double ans=0;
    ans =max(ans,arr[0]);
   ans= max(ans,l-arr[n-1]);
   for (int i=0 ;i<n-1;i++)
  {
      double dis =arr[i+1]-arr[i];

            dis/=(2.00);
            ans=max(ans,dis);
  }
 cout<<fixed<<setprecision(9)<<ans<<endl;

    return 0;
}
