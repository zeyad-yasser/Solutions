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
   string num_1,num_2;
int first_zeros_1=0,first_zeros_2=0,tot_len;
cin>>num_1>>num_2;


tot_len =num_1.length();;
for (int i=0;i<tot_len;i++)
{
    if (num_1[i]=='0'){first_zeros_1++;}
    else{break;}
}
int len1=tot_len-first_zeros_1;


tot_len=num_2.length();
for (int i=0;i<tot_len;i++)
{
    if (num_2[i]=='0'){first_zeros_2++;}
    else{break;}
}


int len2=tot_len-first_zeros_2;



if (len1>len2){cout<<">";return 0;}
if (len1<len2){cout<<"<";return 0;}

else if (len1==len2)

{
   bool flag =true;
    int z =num_1.length();
    for (int i=first_zeros_1,j=first_zeros_2; i<z ;i++,j++)
    {

        if (num_1[i]>num_2[j]){cout<<">";flag=0;break;}
        if (num_1[i]<num_2[j]){cout<<"<";flag=0;break;}

    }

     if (flag ==1){cout<<"=";}

}

    return 0;
}
