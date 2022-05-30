#include <iostream>

using namespace std;
char num[1000000];


int main()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;

    cin>>n;
    for (int i=0;i<n;i++)
{



     cin>>num;


char num2[1000000]=" ";
    for (int i=0;num[i]!='\0';i++)

    {

        if(num[i]=='4')
       {
          num2[i]='7';
       }
       else
       {
           num2[i]='4';
       }

    }


      cout<<num2<<endl;




}


  return 0;
}
