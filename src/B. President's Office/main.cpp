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
   int n,m; char col; cin>>n>>m>>col;

   char arr[n][m];

 for (int i=0;i<n;i++)
 {
     for (int j=0;j<m;j++)
     {
         cin>>arr[i][j];

     }

 }

 set<char>ans;

 for (int i=0;i<n;i++)
 {
     for (int j=0;j<m;j++)
     {
         if (arr[i][j]==col)
         {
                if (i+1< n){if (arr[i+1][j]!=col&&arr[i+1][j]!='.')ans.insert(arr[i+1][j]);}

                if (i-1>-1){if (arr[i-1][j]!=col&&arr[i-1][j]!='.')ans.insert(arr[i-1][j]);}

                if (j+1< m){if (arr[i][j+1]!=col&&arr[i][j+1]!='.')ans.insert(arr[i][j+1]);}

                if (j-1>-1){if (arr[i][j-1]!=col&&arr[i][j-1]!='.')ans.insert(arr[i][j-1]);}

         }
     }
 }

     cout<<ans.size();




    return 0;
}
