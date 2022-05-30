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

string s;cin>>s;

string s_2;

for (int i=0;i<s.size();i++)
{
    if (s[i]!='+')
        {
            s_2.pb(s[i]);
        }
}

sort(s_2.begin(),s_2.end());

cout<<s_2[0];
for (int i=1;i<s_2.size();i++)
{
        cout<<"+"<<s_2[i];
}


    return 0;
}
