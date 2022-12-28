#include <iostream>
using namespace std;
int main(){
  int i, n;
  bool is_prime = true;
  cout << "Enter a positive integer: ";
  cin >> n;
  if (n == 0 || n == 1) {
    is_prime = false;
  }
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      cout<<i<<endl;
    //   break;
    }
  }
  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";
}
// 28 / 12 /2022 
// JU in Lap