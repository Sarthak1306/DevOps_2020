#include<iostream>
using namespace std;
int main()
{
  int x,y,z;
  cout<<"X\tY\tZ\tX*Y+Z"<<endl;
  for(x=0;x<=1;x++)
    for(y=0;y<=1;y++)
      for(z=0;z<=1;z++)
      {
        if(x*y+z==2)
        {
          cout<<x<<"\t"<<y<<"\t"<<z<< "\t"<<"1"<<endl;
        }
        else{
          cout<<x<< "\t" <<y<< "\t" <<z<< "\t" <<x*y+z<<endl;
        }
      }
      return 0;

}
