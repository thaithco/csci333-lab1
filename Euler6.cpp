#include <iostream>

using std::cout;
using std::endl;

int main(){
 long squares=0;
 long sums=0;
 long result=0;
 for(int i=1; i<=100; i++){
  squares+=(i*i);
 }
 for(int i=1; i<=100; i++){
  sums+=i;
 }
 sums*=sums;
 result = sums - squares;

 cout << "The difference is: " <<  result << endl;

 return 0;
}
