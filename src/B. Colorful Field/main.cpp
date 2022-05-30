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


int n ,m ,k, t; cin>>n>>m>>k>>t;

char grid[n][m];
char in[] {'c','k','g'};

for (int i =0;i<k;i++)
{
    int x ,y; cin>>x>>y;
    grid[x][y]='.';
}

for(int i=0;i<n;i++)
{
    for (int j=0;j+3<m;j+=3)
    {
       if (grid [i][j]!='.')
       {
           for (int i=0;i<3 ;i++)
           {
               grid[i][j]=
           }

       }
    }
}

for(int i=0;i<n;i++)
{
    for (int j=1;j<m;j++)
    {

    }
}


for(int i=0;i<n;i++)
{
    for (int j=2;j+3<m;j+=3)
    {
       if (grid [i][j]!='.' && grid [i][j]!='c' && grid [i][j]!='k')
       {
          grid[i][j]='g';
       }
    }
}

for(int i=0;i<n;i++)
{
    for (int j=0;j<m;j++)
    {
      cout<<grid[i][j];
    }
}







    return 0;
}
