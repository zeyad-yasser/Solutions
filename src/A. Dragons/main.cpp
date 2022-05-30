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

   int s ,n; cin>> s>>n;
pair<ll , ll> z[1003];
 for(int i=0;i<n;i++)
 {
     int x, y;
     cin>>x>>y;
     z[i].first=x;
     z[i].second=y;

 }

  sort(z,z+n);

  for (int i=0;i<n;i++)
  {
      if (s>z[i].first){s+=z[i].second;}
      else{cout<<"NO"; return 0;}
  }
   cout<<"YES";


    return 0;
}






