#include <iostream>    // Header Stream
int main(int argc, char const *argv[]) {  // main declaration
<<<<<<< HEAD
  string C;
 string b;

 cin >>C;
 cin >> b;
 cout << C.size() <<" "<<b.size()<<endl;
 cout << C + b<< endl;
 cout <<b.front() + C.substr(1, C.size()-1) << " "<< C.front() + b.substr(1, b.size()-1);
=======
  string A;
 string B;
>>>>>>> testbranch

 cin >>A;
 cin >> B;
 cout << A.size() <<" "<<B.size()<<endl;
 cout << A + B<< endl;
 cout <<A.front() + A.substr(1, A.size()-1) << " "<< A.front() + B.substr(1, B.size()-1);
 cout << "The Code is Complete! Hurray!";
 cout<<"YOYOYOOYOY";
  return 0;
}
