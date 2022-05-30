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
void c_p_c()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    c_p_c();

string s; cin>>s;
  if (s.size()==1){cout<<"0";return 0;}
ll x=22; int cnt=0;
 while (x>=10){
        x=0;
    for(int i=0;i<s.size();i++){

    x+=s[i]-'0';

    }
    s=to_string(x); cnt++;

}

 cout<<cnt;






    return 0;
}
