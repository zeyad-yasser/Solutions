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

ll x; cin>>x;

//cout<<x<<"\n";


for (ll i=1;i<1001;i++)
{

    if ((i*i*i*i*i*i)==x)
    {
    cout<<"YES";
    return 0;
    }
    //cout<<i<<endl;
}
 cout<<"NO";
    return 0;
}

//1000000000000000000

//wrong 1 يسطى ارجوك كفاااااية
