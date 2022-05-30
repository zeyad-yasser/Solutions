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


  int pos=0,neg=0;
  int n,m; cin>>n>>m;
  while (n--)
  {
    int a; cin>>a;
    if (a==1)pos++;
        else neg++;
  }

  while (m--)
  {
      int r,l,dif;cin>>r>>l;
       dif=l-r+1;
       if (dif % 2 == 0 && dif<=2*pos && dif<=2*neg )cout<<1<<el;
       else cout<<0<<el;
  }










    return 0;
}
