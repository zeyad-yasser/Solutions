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
    string s="1";

int n ,t; cin>>n>>t;


if (n==1&&t!=10){cout<<t; return 0;}
if (n==1&&t==10){cout<<-1; return 0;}

if (t==2||t==6)
{
    for (int i=0;i<n-1;i++)
   {
     cout <<s;
   }
   cout<<6;
}


if (t==4)
{
    for (int i =0;i<n;i++)
   {
     cout <<4;
   }

}


if (t==5||t==10)
{
    for (int i =0;i<n-1;i++)
   {
     cout <<s;
   }
   cout<<0;
}

if (t==8)
{
    for (int i =0;i<n;i++)
   {
     cout <<8;
   }

}

if (t==7)
{
    for (int i =0;i<n;i++)
   {
     cout <<7;
   }

}

if (t==3)
{
    for (int i =0;i<n;i++)
   {
     cout <<3;
   }

}


if (t==9)
{
    for (int i =0;i<n;i++)
   {
     cout <<9;
   }

}

    return 0;
}
