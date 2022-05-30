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


  int f=0;
  int r1,r2,c1,c2,d1,d2;
  cin>>r1>>r2>>c1>>c2>>d1>>d2;

  for(int a=1;a<10;a++)
  {
      for(int b=1;b<10;b++)
      {
          for(int c=1;c<10;c++)
          {
              for(int d=1;d<10;d++)
            {
                if(a!=b&& a!=c&& a!=d && b!=c && b!=d && c!=d )
                {
                    if(a+c==c1 && a+b==r1 && a+d==d1 && b+d==c2 && b+c==d2 && c+d==r2 ){cout<<a<<" "<<b<<el<<c<<" "<<d; f=1; return 0;}
                }


            }


          }

      }

  }

if(!f)cout<<-1;



    return 0;
}
