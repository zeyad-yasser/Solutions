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
ll a ,z=0; cin>>a;


for(ll i=1;;i++)
{
    a=a+1;
if(a<0) z= a*-1;
  else  z=a;
while (z>0){
  if (z%10==8) return cout<<i,0;
  else z/=10;
 }

}


    return 0;
}
