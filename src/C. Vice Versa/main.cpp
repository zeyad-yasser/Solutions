#include <iostream>

using namespace std;
int main()
{
    int i,k=0;

    int n;cin>>n;
     char word [n];
     string y="";
    cin>> word;
     y+=word;
        for (int i=0;word[i]!='\0';i++)
    {
        k++;
    }
   string z="";
     for (int i=k-1;i>=0;i--)
    {

     z+=word[i];
    }

 if (z==y)

{
    cout<<z<<endl;

    cout<<"YES";
}
 if (z !=y)
{
    cout<<z<<endl;

    cout<<"NO";

}


}
