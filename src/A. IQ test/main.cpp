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
   int n ,ans_1=0 ,cnt_e=0 ,cnt_o=0, ans_2=0; cin>>n;
   for(int i=1;i<=n;i++)
   {
       int z;  cin>>z;
       if (z%2==0)
       {
           ans_1=i;
           cnt_e++;
       }

       else
       {
           ans_2=i;
           cnt_o++;
       }
   }

  if (cnt_e==1){cout<<ans_1; return 0;}
  if (cnt_o==1){cout<<ans_2; return 0;}



    return 0;
}
