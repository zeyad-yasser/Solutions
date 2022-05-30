#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define ff first
#define ss second
#define mod 1000000007
#define MAX 9999999999
#define el '\n'
#define EL '\n'
#define s size()
#define ll long long
#define ld long double
#define f(a, b, c) for (ll a = b; a < c; a++)
#define fr(a, b, c) for (ll a = b; a >= c; a--)
#define pb push_back
#define pf push_front
#define p push
#define pi 3.14159265358979323846
#define reed freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define mk(arr, n, type) type *arr = new type[n];
///////////////////////////////////////////////////
bool sortbysecdesc(const pair<int, int> &a,
                    const pair<int, int> &b)
{
  return a.second > b.second;
}
//////////////////////////////////////////////////
bool sortbysec(const pair<int, int> &a,
                const pair<int, int> &b)
{
  return (a.second < b.second);
}
///////////////////////////////////////////////////
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
void MOLLTO()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

/*
  a-i candies of type i


*/

int main()
{
   MOLLTO();
   int t=1; cin>>t;
   while(t--)
   {
     vector <int> v;
     int n;cin>>n;
      f(i,0,n)cin>>v[i];
      int hold=-2;
      bool no=0;
      f(i,0,n){
       int idx= max_element(v.begin(),v.end())-v.begin();
       v[idx]--;
       if(hold==idx){ no =1; break;}
       hold=idx;
      }
      if(no)cout<<"NO"<<el;
      else cout<<"YES"<<el;
   }


}
