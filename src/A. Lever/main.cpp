
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


  string s; cin>>s; ll pivot=0,arr[s.size()]={};

  for(int i=0;i<s.size();i++)
  {
      if (s[i]=='^') pivot=i;
  }
   for(int i=0;i<s.size();i++)
   {
       if (isdigit(s[i]))
       {
           arr[i]=s[i]-'0';
       }

   }

  ll sum=0;

  for(int i=0;i<s.size();i++)
   {
       sum+=(arr[i]*(i-pivot));
   }
  if (!sum){cout<<"balance"; return 0;}
  if(sum>0)cout<<"right";
  else cout<<"left";







    return 0;
}