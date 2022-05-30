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
   ll n;cin>>n;

   if (n>0){cout<<n;return 0;}
if(n==-10||n==-20||n==-30||n==-40||n==-50||n==-60||n==-70||n==-80||n==-90){cout <<"0";return 0;}
   else
   {
       ll ans_1,ans_2;

       ll z=0,y=0,temp=-1*n;


       z=temp%10;
       temp/=10;
       y=temp%10;
       temp/=10;

      if (temp!=0){ cout<<-temp<<min(z,y);}
     else{ cout<<max(-z,-y);}


   }



    return 0;
}
