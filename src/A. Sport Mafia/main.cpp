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
   int n,k; int ii=1,cnt=0;  ll ans=0;
   cin>>n>>k;

   if (n==1&&k==1){cout<<"0";return 0;}
   if (n==1&&k==0){cout<<"1";return 0;}

   if(n!=1&&k==0)
   {

       for (int i=0;i<n;i++)
       {
            if (ans<n)ans+=(1+i);

            else{cout<<ans-i; return 0;}
       }


   }


   else
   {
      int ans_2=0;

      for (int i=0;i<MAX;i++)
      {

         if (ans_2>k){cout<<ans_2-k;return 0;}
         else{ ans_2+=i;}
      }



   }




    return 0;
}
