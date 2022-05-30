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

ll  n, k, l, c, d, p, nl, np;

cin>>n>>k>>l>>c>>d>>p>>nl>>np;

ll tot_mil=k*l, ans1=tot_mil/nl;  ll ans2=c*d, ans3=p/np;


ll z= min(ans1,min(ans3,ans2));

cout<<z/n;






    return 0;
}
