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

int n; cin>>n;
vector<pair<int,int>>vp(n);
for(int i=0;i<n;i++)
{
    int x,y; cin>>x>>y;
    vp[i]={x,y};
}
sort(vp.begin(),vp.end());

for(int i=0;i<n-1;i++)
{

 if(vp[i].second>=vp[i+1].second){cout<<"Happy Alex"; return 0;}
}

cout<<"Poor Alex";






    return 0;
}
