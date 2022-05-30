#include <bits/stdc++.h>

using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define el '\n'
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define p push

#define reed   freopen ("input.txt","r",stdin);
#define write  freopen ("output.txt","w",stdout);


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
