#include <iostream>

using namespace std;

int main()
{
   long  double Ax ,Ay,bx,by,c,n;
   long  double  px,py;
   cin>>n;
   for (int i=1;i<=n;i++)
   {


   cin>>Ax>>Ay>>bx>>by;
   cin>>px>>py;
  if ((px-Ax)*(by-Ay)==(py-Ay)*(bx-Ax))
  {
     cout<< "This way is perfect";
  }
  else
  {

  px=px-Ax;
  py=py-Ay;
  by=by-Ay;
  bx=bx-Ax;
  c=(px*by)-(py*by);
  if (c>0)

  {
      cout<<"Turn right"<<endl;
  }


  else {
    cout<<"Turn left"<<endl;
  }


  }
   }
    return 0;
}
