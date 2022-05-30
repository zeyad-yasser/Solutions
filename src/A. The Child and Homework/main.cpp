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
 bool s_1=0,s_2=0,s_3=0,s_4=0;
string s1,s2,s3,s4;  cin>>s1>>s2>>s3>>s4;
int a,b,c,d,cnt=0;
 a=s1.size()-2; b=s2.size()-2; c=s3.size()-2; d=s4.size()-2;cnt=0;


if(a>=2*b && a>=2*c && a>=2*d  || a<=b/2 && a<=c/2 && a<=d/2 ){s_1=1; cnt++;}

if(b>=2*a && b>=2*c && b>=2*d  || b<=a/2 && b<=c/2 && b<=d/2 ){s_2=1; cnt++;}

if(c>=2*a && c>=2*b && c>=2*d  || c<=a/2 && c<=b/2 && c<=d/2 ){s_3=1; cnt++;}

if(d>=2*a && d>=2*c && d>=2*b  || d<=a/2 && d<=c/2 && d<=b/2 ){s_4=1; cnt++;}

if(cnt>=2||cnt==0){cout<<'C'; return 0;}

else
{
   if(s_1)cout<<'A';
   if(s_2)cout<<'B';
   if(s_3)cout<<'C';
   if(s_4)cout<<'D';
}

    return 0;
}
