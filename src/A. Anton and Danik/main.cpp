#include <iostream>
using namespace std;
int main(){

 int sz;
 string result;
int cntA=0, cntD=0;
 cin>>sz>>result;

 for( int i=0;i<sz;i++){

    if(result[i]=='A') cntA++;
    else cntD++;
    }
if (cntA>cntD){cout<<"Anton";}
else if (cntA<cntD){cout<<"Danik";}
else{cout<<"Friendship";}
}
