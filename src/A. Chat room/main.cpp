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

string r="hello";
string s;cin>>s; int z=s.size();
int cnt=0;

for (int i=0 ;i<z;i++)
{

    if (s[i]!='h'&&s[i]!='e'&&s[i]!='l'&&s[i]!='o')
    {
        s.erase(s.begin()+i);
        i--;
         z--;
    }

//cout <<s<<"\n";
}

z=s.size(); //cout<<z<<endl;;

for (int i=0 ;i<z;i++)
{
  if (s[i]=='h'&&cnt==0){cnt++;i++;}
   if (s[i]=='e'&&cnt==1){cnt++;i++;}
    if (s[i]=='l'&&cnt==2){cnt++;i++;}
     if (s[i]=='l'&&cnt==3){cnt++;i++;}
      if (s[i]=='o'&&cnt==4){cnt++;i++;}

       //cout<<cnt;
    if (cnt ==5){break;}



}

if (cnt==5){cout<<"YES";}
else {cout <<"NO";}
    return 0;
}
