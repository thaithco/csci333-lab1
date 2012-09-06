#include<iostream>

using std::cout;
using std::endl;

int euler(int n);

int main(){

 int n = 1000;
 cout << "Hello world!" << endl;

 cout << "The sum of the first " << n << " integers that are divisible by 3 or 5 is " << euler(n) << endl;

 return 0;

}

int euler(int n){
 if(n<=0){return -1;}
 int sum = 0;

 for (int i=0; i<n; i++){
  if(i%3 == 0 || i%5 == 0){
  sum+=i;
  }
 }
 return sum;
}
