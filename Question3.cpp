#include <iostream>
using namespace std;
class decimal{
    private:
    int n;
    int a;
    public:
    void get(){
        cout<<"enter a number";
        cin>>a;
       a=n;

    }
    void convert() {
      int a[5];
      int i=0;
        while(n!=0)
        {
        a[i]=n%2;
        n=n/2;
        i++;
        }
        for(int j=i-1; j>=0; j--)
        cout<<a[j];
        }
};

int main()
{
  decimal d;
  d.get();
  d.convert();


    return 0;
}
