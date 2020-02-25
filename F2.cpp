#include <iostream>    // Header Stream
int main(int argc, char const *argv[]) {  // main declaration
  string A;
 string B;

 cin >>A;
 cin >> B;
 cout << A.size() <<" "<<B.size()<<endl;
 cout << A + B<< endl;
 cout <<A.front() + A.substr(1, A.size()-1) << " "<< A.front() + B.substr(1, B.size()-1);

  return 0;
}
