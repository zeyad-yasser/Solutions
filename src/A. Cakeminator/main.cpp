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

   int m ,n; cin>>n>>m;

   string s; int row[11]={0}, col[11]={0};

   for (int i=0;i<n;i++)
   {
       cin>>s;
       for (int j=0;j<m;j++)
       {
           if(s[j]=='S')
           {
               row[i]=1;
               col[j]=1;
           }
       }

   }



int cakes(0);
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if (row[i]==0||col[j]==0)
           {
               cakes+=1;
           }
       }

   }
cout<<cakes;







    return 0;
}
