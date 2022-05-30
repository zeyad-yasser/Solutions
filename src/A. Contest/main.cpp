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

   int a, b, c, d; cin>>a>>b>>c>>d;
   ll ans1=max((3*a)/10,a-(a/250)*c), ans2=max((3*b)/10,b-(b/250)*d);

   if (ans1>ans2)cout<<"Misha";
   if (ans1<ans2)cout<<"Vasya";
   if (ans1==ans2)cout<<"Tie" ;




    return 0;
}
