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
int z=s.size();
   for (int i = 0 ;i<z;i++)
   {
       if(s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='E'||s[i]=='Y')
       {
        s.erase(s.begin()+i);
        z--;
        i--;
       }
       if (s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='y')
       {
          s.erase(s.begin()+i);
          z--;
          i--;
       }
   }

   for (int i=0;i<s.size();i++)
   {
       s[i]=tolower(s[i]);

   }

for (int i=0;i<s.size();i++)
   {
      cout<<"." <<s[i];

   }



    return 0;
}
