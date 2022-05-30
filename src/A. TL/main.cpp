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


int m ,n ,mx=-200 ,mi=200 ,c=200; cin>>n>>m;

for(int i=0 ;i<n;i++){
    int x; cin>>x;
    mx=max(mx,x);
    mi=min(mi,x);
}


for(int i=0 ;i<m;i++){
    int x; cin>>x;
    c=min(c,x);
}

int z= max(mi*2,mx);
if(z>=c){cout<<-1;}
else cout<<z;



    return 0;
}
