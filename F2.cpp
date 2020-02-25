#include <iostream>    // Header Stream
int main(int argc, char const *argv[]) {  // main declaration
  string C;
 string b;

 cin >>C;
 cin >> b;
 cout << C.size() <<" "<<b.size()<<endl;
 cout << C + b<< endl;
 cout <<b.front() + C.substr(1, C.size()-1) << " "<< C.front() + b.substr(1, b.size()-1);

  return 0;
}
