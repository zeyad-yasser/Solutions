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


int n; cin>>n;
int r [n], l[n] , sum1=0,sum2=0;
for(int i=0;i<n;i++){
    cin >>l[i]>>r[i];
    sum1+=l[i]; sum2+=r[i];
}
int s1=sum1, s2=sum2;
if (sum1%2==0 && sum2%2==0){cout<<'0'; return 0;}
int f=-1;

    for(int i=0;i<n;i++){

            if (!(sum1%2==0 && sum2%2==0)){

                 sum1-=l[i];    sum2+=l[i];
                 sum1+=r[i];    sum2-=r[i];
            }

            if (sum1%2==0 && sum2%2==0){f=i;}



            sum1=s1; sum2=s2;
        }


if (f!=-1)cout<<1;
  else  cout<<-1;
    return 0;
}
