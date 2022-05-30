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

   int n; cin>>n; ll arr[n]={},arr2[n]={};
   for (int i=1;i<=n;i++)
   {
       cin>>arr[i];
       arr2[i]=arr[i];
       arr[i]+=arr[i-1];
   }

  sort(arr2,arr2+n+1);

  for (int i=1;i<=n;i++)
  {
      arr2[i]+=arr2[i-1];
  }

int m ; cin>>m;

while (m--)
{
      int x,y,z; cin>>z>>x>>y;

      if (z==1)
      {
           cout<<arr[y]-arr[x-1]<<el;
      }

      else
      {
           cout<<arr2[y]-arr2[x-1]<<el;
      }


}




    return 0;
}
