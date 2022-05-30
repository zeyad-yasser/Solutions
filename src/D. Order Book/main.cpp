#include <bits/stdc++.h>
using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX 999999
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
    map<string, bool>mp;
     int n;cin>>n;

    string s[n+1];

    for(int i=0; i<n; i++)  cin>>s[i];


    for(int  i=n-1;i>=0;i--)
    {
        if(mp[s[i] ] !=1 ){cout<<s[i] <<endl; mp[s[i] ]=1;}
    }

    return 0;
}
