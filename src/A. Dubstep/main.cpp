
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
bool flag=1;

for (int i=0;i<s.size();)
{
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    {
        i+=3;
        if (!flag){cout<<" ";}
    }
    else{
           flag =0;
            cout<<s[i];i++;
    }

}



    return 0;
}
