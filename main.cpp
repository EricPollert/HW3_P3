#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double E;
  double R;
  double i;
  double C;
  
  double t;
  double e;
  

  e = 2.71828;
    
  cout << "What is value of E?" << endl;
  cin >> E;
  cout << "What is value of R?" << endl;
  cin >> R;
  cout << "What is value of C?" << endl;
  cin >> C;
  cout << "What is value of t?" << endl;
  cin >> t;
  
  i = (E/R)*pow(e, (-t/(R*C)));
  cout << "The value of i = " << i << endl;



  
}