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


  int t; cin>>t;
  while (t--)
  {

      int n; cin>>n;
      //if (n==0){cout<<"0"<<el; f=0;}
      int a[n+100] ,b[n+100], cnt=0,s1=0,s2=0,pev[n]={0},nev[n]={0};
      for(int i=0;i<n;i++)cin>>a[i],s1+=a[i];
      for(int i=0;i<n;i++)cin>>b[i],s2+=b[i];

      if (s1==s2) {
        for(int i=0;i<n;i++)
        {
            if (a[i]>b[i])pev[i]+=abs(a[i]-b[i]),cnt++;
            if (a[i]<b[i])nev[i]+=(-1*abs(a[i]-b[i])),cnt++;
        }
        cout<<cnt<<el;

       for(int i=0;i<n;i++)
        {
            cout<<nev[i]<<" ";
        }
        cout<<el;
        for(int i=0;i<n;i++)
        {
            cout<<pev[i]<<" ";
        }
        /*
        int i=0,j=0;
            do
            {
                if (nev[j]!=0 && pev[i]!=0)
                    {cout<<i+1<<" "<<j+1<<el;
                      pev[i]-=1;
                     nev[j]+=1;
                    }

               if  (pev[i]==0) i++;

               if (nev[j]==0) j++;

            }while (i!=n ||j!=n);

      }
     */



  }
  if (s1!=s2)cout<<"-1"<<el;
  }











    return 0;
}
