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

int t; cin>>t;
while(t--)
{

    int n; cin>>n; string s,in;

    for(int i=0;i<n;i++){ cin>>in; s+=in;}

     sort (s.begin(),s.end());
     int no_a=0,no_b=0,no_c=0,no_d=0,no_e=0,no_f=0,no_g=0,no_h=0,

     no_i=0,no_j=0,no_k=0,no_l=0,no_m=0,no_n=0,no_o=0,no_p=0,no_q=0,

     no_r=0,no_s=0,no_t=0,no_u=0,no_v=0,no_w=0,no_x=0,no_y=0,no_z=0;

    //cout<<s;
   for (int i=0;i<s.size();i++)
   {
       if (s[i]=='a'){no_a++;}
       if (s[i]=='b'){no_b++;}
       if (s[i]=='c'){no_c++;}
       if (s[i]=='d'){no_d++;}
       if (s[i]=='e'){no_e++;}
       if (s[i]=='f'){no_f++;}
       if (s[i]=='g'){no_g++;}
       if (s[i]=='h'){no_h++;}
       if (s[i]=='i'){no_i++;}
       if (s[i]=='j'){no_j++;}
       if (s[i]=='k'){no_k++;}
       if (s[i]=='l'){no_l++;}
       if (s[i]=='m'){no_m++;}
       if (s[i]=='n'){no_n++;}
       if (s[i]=='o'){no_o++;}
       if (s[i]=='p'){no_p++;}
       if (s[i]=='q'){no_q++;}
       if (s[i]=='r'){no_r++;}
       if (s[i]=='s'){no_s++;}
       if (s[i]=='t'){no_t++;}
       if (s[i]=='u'){no_u++;}
       if (s[i]=='v'){no_v++;}
       if (s[i]=='w'){no_w++;}
       if (s[i]=='x'){no_x++;}
       if (s[i]=='y'){no_y++;}
       if (s[i]=='z'){no_z++;}

   }
   bool flag =0;
 for (int i=0;i<26;i++)
{
    if (no_a!=0)
    {
        if(no_a%n==0){}
        else{flag=1;}

    }

   if (no_b!=0)
    {
        if(no_b%n==0){}
        else{flag=1;}

    }

    if (no_c!=0)
    {
        if(no_c%n==0){}
        else{flag=1;}

    }

    if (no_d!=0)
    {
        if(no_d%n==0){}
        else{flag=1;}

    }

    if (no_e!=0)
    {
        if(no_e%n==0){}
        else{flag=1;}

    }

    if (no_f!=0)
    {
        if(no_f%n==0){}
        else{flag=1;}

    }

    if (no_g!=0)
    {
        if(no_g%n==0){}
        else{flag=1;}

    }

    if (no_h!=0)
    {
        if(no_h%n==0){}
        else{flag=1;}

    }

    if (no_i!=0)
    {
        if(no_i%n==0){}
        else{flag=1;}

    }

    if (no_j!=0)
    {
        if(no_j%n==0){}
        else{flag=1;}

    }

    if (no_k!=0)
    {
        if(no_k%n==0){}
        else{flag=1;}

    }

    if (no_l!=0)
    {
        if(no_l%n==0){}
        else{flag=1;}

    }

    if (no_m!=0)
    {
        if(no_m%n==0){}
        else{flag=1;}

    }

    if (no_n!=0)
    {
        if(no_n%n==0){}
        else{flag=1;}

    }

    if (no_o!=0)
    {
        if(no_o%n==0){}
        else{flag=1;}

    }

    if (no_p!=0)
    {
        if(no_p%n==0){}
        else{flag=1;}

    }


    if (no_q!=0)
    {
        if(no_q%n==0){}
        else{flag=1;}

    }


    if (no_r!=0)
    {
        if(no_r%n==0){}
        else{flag=1;}

    }


    if (no_s!=0)
    {
        if(no_s%n==0){}
        else{flag=1;}

    }

     if (no_t!=0)
    {
        if(no_t%n==0){}
        else{flag=1;}

    }


    if (no_u!=0)
    {
        if(no_u%n==0){}
        else{flag=1;}

    }


    if (no_v!=0)
    {
        if(no_v%n==0){}
        else{flag=1;}

    }

    if (no_w!=0)
    {
        if(no_w%n==0){}
        else{flag=1;}

    }


    if (no_x!=0)
    {
        if(no_x%n==0){}
        else{flag=1;}

    }


    if (no_y!=0)
    {
        if(no_y%n==0){}
        else{flag=1;}

    }

    if (no_z!=0)
    {
        if(no_z%n==0){}
        else{flag=1;}

    }


}

if (flag){cout<<"NO\n";}
else{cout<<"YES\n";}

}


    return 0;
}
