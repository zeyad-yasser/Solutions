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
ll n;
ll solve(ll lucky=0, ll index=0){
    if (lucky>n){
        return-1;
    }
    else if(lucky==n) {
        return index;
    }
   return max( solve(lucky *10+4, index*2+1),solve (lucky *10+7, index*2+2));



}

int main()
{
    MOLLTO();


  cin>>n;

  cout<<solve();

    return 0;
}
