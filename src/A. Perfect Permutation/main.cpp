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

int v; cin>>v;
if (v%2!=0){cout<<-1; return 0;}
for(int i=1;i<=v ;i++)
{
   if (i%2==0)cout<<i-1<<" ";
   if (i%2!=0)cout<<i+1<<" ";

}


    return 0;
}
