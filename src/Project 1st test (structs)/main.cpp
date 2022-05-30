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
struct student
{
  string  name;
  ll   seat_no;
  float    GPA;
  int marks[5];
};


string subject[5]={ " Electronics "," English"," Calc" ," Physics", " SP "};

int main()
{
    MOLLTO();


student s_data[100]={};

int n ; cin>>n;
for(int i=0;i<n;i++){

    cin>>s_data[i].name;
    cin>>s_data[i].seat_no;
    cin>>s_data[i].GPA;
    for(int j=0;j<5;j++)
    cin>>s_data[i].marks[j];

}

//         calling             //
////////////////////////////////////////////////////
ll k; cin>> k;

    for(int i=0;i<n;i++)
    if (k==s_data[i].seat_no)k=i;




cout<<" STUDENT NAME: "<<s_data[k].name<<el;
cout<<" SEAT NUMBER: "<<s_data[k].seat_no<<el;
cout<<" GPA: "<<s_data[k].GPA<<el;
 for(int j=0;j<5;j++)
    cout<<subject[j]<<" "<<s_data[k].marks[j]<<el;

    return 0;
}



