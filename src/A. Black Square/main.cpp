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

int arrv[5]={0};
ll ans =0;
for (int i=0; i<4;i++)
{
    cin>>arrv[i];
}
string s;cin>>s;
for (int i=0;i!=s.size();i++)

{
    if (s[i]=='1'){ans+=arrv[0];}
     if (s[i]=='2'){ans+=arrv[1];}
      if (s[i]=='3'){ans+=arrv[2];}
       if (s[i]=='4'){ans+=arrv[3];}

}
cout<<ans;



    return 0;
}
