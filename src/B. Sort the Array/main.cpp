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

  int n; cin>>n;

  int a[n] , b[n];
  for (int i=0; i<n;i++)
  {
       cin>>a[i];
       b[i]=a[i];
  }

sort(b,b+n);
int r=-1,l=-1;
for(int i=0;i<n;i++)
{
   if (a[i]!=b[i])
   {
      l=i; break;
   }

}


for (int i=n-1;i>=0;i--)
{
    if (a[i]!=b[i])
    {
        r=i; break;
    }
}



if (l==-1&&r==-1){cout<<"yes\n"<<"1 1"; return 0;}
int temp =-2;

/*for(int i=0;i<n;i++)
{
   if (a[i]!=b[i])
   {
      temp=a[i];
      a[i]=a[r]; break;
   }

}


for (int i=n-1;i>=0;i--)
{
    if (a[i]!=b[i])
    {
       a[i]=temp; break;
    }
}
*/
 reverse(a + l, a + r + 1);

for(int i=0;i<n;i++)
{
   if (a[i]!=b[i])
   {
    cout<<"no"; return 0;
   }

}

cout<<"yes"<<el<<l+1<<" "<<r+1;



    return 0;
}
