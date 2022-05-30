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

int t; cin>> t;

while(t--){
     string s; cin>>s;
     ll z=s.size();  int o=0; int  cnt_a=0;
    for (int i=0;i<z;i++){
        if (s[i]=='a')cnt_a++;
        else break;
    }

  if (cnt_a==z){cout<<"NO"<<el; }
  else{
    int o=0;
    for(int i=0;i<z;i++)
    {
        if (s[z-i-1]!='a'&&o==0)
        {
            o=1;
            cout<<"YES"<<el;
            for (int j=0;j<i;j++)
            {
              cout<<s[j];
            }
            cout<<'a';
            for (int j=i;j<z;j++)
            {
              cout<<s[j];
            }
             cout<<el; //o=1;
        }

    }

  }
 }


return 0;
}


