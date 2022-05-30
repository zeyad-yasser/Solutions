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

  int x1 , y1, x2, y2;

  cin>>x1 >> y1>> x2>> y2;


    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2)){cout<<-1; return 0;}

    if (x1==x2)
    {
        cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x2+abs(y1-y2)<<" "<<y2;
    }

    else if(y1==y2)
    {
        cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y2+abs(x1-x2);
    }

     else
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }









    return 0;
}
