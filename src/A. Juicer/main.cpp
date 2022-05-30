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
 ll n,b,d;
  unsigned ll tot_a=0,cnt=0;

  cin>>n>>b>>d;

  for(ll i=0;i<n;i++)
  {ll a;cin>>a;

      if (a<=b){
            tot_a+=a;

             if (tot_a>d){
               cnt++;
               tot_a=0;
          }
      }


  }
  //if (tot_a>=d)
    //  {
      //    cnt++;
       //   tot_a=0;
      //}


cout<<cnt;







    return 0;
}
