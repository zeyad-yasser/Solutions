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
    bool f=0;    int t;cin>>t;
    while (t--)
    {
        int n, cnt=0, cnt_O=0, cnt_O2=0; cin>>n;
        string s,z; cin>>s>>z;
        for(int i=0;i<n;i++)
        { f=0;
            for(int j=0;j<n;j++)
            {

              if (s[i]==z[j] ){f=1;}
              if (z[i]=='o') cnt_O++;
              if (s[i]=='o') cnt_O2++;
            }
          if (f==0)cnt++;

        }
cout<< cnt<<" "<< cnt_O<<el;

        if (cnt-cnt_O==cnt_O)cout<<"YES"<<el;
        else if(cnt_O==0)  cout<<"NO"<<el;
        else if(cnt_O==cnt_O2)  cout<<"NO"<<el;
        else cout<<"NO"<<el;

    }











    return 0;
}
