#include <bits/stdc++.h>
using namespace std;
#define ff  first
#define ss second
#define mod  1000000007
#define MAX  9999999999
#define el   '\n'
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
   string s="abcdefghijklmnopqrstuvwxyz0",in;
   int cnt=0,z;

       getline(cin,in);

z=in.size();
for(int i=0;i<=z;i++)
{
    for (int j=0;j<26;j++)
    {

            if (in[i]==s[j])
          {
            cnt++;
            s[j]='0';
          }

    }

}
cout <<cnt;





    return 0;
}
