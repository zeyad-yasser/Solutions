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
void MOLLTO()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    MOLLTO();


  int n,x=0; cin>>n;
  int cash [n];for(int i=0;i<n;i++)cin>>cash[i];
  int ans [1000],sum=0;
  while(x!=n)
  {

       for(int i=0;i<cash[x];i++)
    {

      int m;cin>>m;
      sum=sum+(5*m)+15;
    }

    ans[x]=sum;
    sum=0;
     x++;
  }
ll z=MAX;
  for(int i=0;i<x;i++){
        if (z>ans[i])z=ans[i];
  }

cout<<z;







    return 0;
}
