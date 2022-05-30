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

 int m,n;cin>>n>>m;

char arr_copy[n+5][m+5];
char arr_og[n+5][m+5];

for (int i=1;i<=n;i++)
    {
       for (int j=1;j<=m;j++)
       {
         arr_copy[i][j]='W';
       }

    }



for (int i=1;i<=n;i++)
    {
    for (int j=1;j<=m;j++)
      {
        if ((i%2)!=0&&(j%2)==0)
        {
            arr_copy[i][j]='B';
        }
         if ((i%2)==0&&(j%2)!=0)
        {
            arr_copy[i][j]='B';
        }
      }
    }


    for (int i=1;i<=n;i++)
    {
       for (int j=1;j<=m;j++)
       {
        cin>>arr_og[i][j];
        if (arr_og[i][j]=='-'){arr_copy[i][j]='-';}
       }
    }




 for (int i=1;i<=n;i++)
    {
       for (int j=1;j<=m;j++)
       {
         cout<<arr_copy[i][j];
       }
       cout<<"\n";
    }




    return 0;
}
