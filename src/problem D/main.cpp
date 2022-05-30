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

   ll n , bud, cnt=0,f=0 ; cin>> n;
   vector<vector<char>> arr(n+2,vector<char>(n+2,'0'));
   for(int i=1;i<=n;i++)
   {
       for (int j=1;j<=n;j++)
       {
        char z; cin>>z; arr[i][j]=z;
       }
   }

    for(int i=1;i<=n;i++)
   {
       for (int j=1;j<=n;j++)
       {
            cnt=0;
        if (arr[i][j+1]=='o')cnt++;

        if (arr[i][j-1]=='o')cnt++;

        if (arr[i+1][j]=='o')cnt++;

        if (arr[i-1][j]=='o')cnt++;

        if(cnt%2!=0){ f=1;  break;}

       }
   }

   if (f){cout<<"NO"; return 0;}
   cout<<"YES";


    return 0;
}
