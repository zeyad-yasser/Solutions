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

   ll y,k,n,f=0; cin>> y>>k>>n;
ll x=0;
for(int i=1;i<=n/k;i++){
    if(i*k>y){
        f=1;
        cout<<(i*k)-y<<" ";
    }
}
if(!f)cout<<-1;



    return 0;
}
