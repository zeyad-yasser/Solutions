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

string s ;cin>>s;

 for(int i=s.size()-1;i>=0;i--)
 {
      if (s[i]=='0')
      {
          cout<<"O-|-OOOO"<<el;
      }

       if (s[i]=='1')
      {
          cout<<"O-|O-OOO"<<el;
      }

       if (s[i]=='2')
      {
          cout<<"O-|OO-OO"<<el;
      }
        if (s[i]=='3')
      {
          cout<<"O-|OOO-O"<<el;
      }
       if (s[i]=='4')
      {
          cout<<"O-|OOOO-"<<el;
      }
       if (s[i]=='5')
      {
          cout<<"-O|-OOOO"<<el;
      }
       if (s[i]=='6')
      {
          cout<<"-O|O-OOO"<<el;
      }
       if (s[i]=='7')
      {
          cout<<"-O|OO-OO"<<el;
      }
       if (s[i]=='8')
      {
          cout<<"-O|OOO-O"<<el;
      }
       if (s[i]=='9')
      {
          cout<<"-O|OOOO-"<<el;
      }

 }



 return 0;
}
