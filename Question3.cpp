#include<iostream>
using namespace std;
class binary{
public:
  void convert(int a){
    int i;
    int arr[20];
    for (i=0;a>0;i++){
      arr[i]=a%2;
      a=a/2;
    }
    for(i=i-1;i>=0;i--)
    {
      cout<<arr[i];
    }
  }
};
int main(){
  binary num;
  int a;
  cout<<"Enter a number : ";
  cin>>a;
  num.convert(a);
  cout<<endl;
  return 0;
}
