#include <Iostream>
using namespace std;

int main () {
  
  int num;
  int positiveCount = 0;
  int negativeCount = 0;

  while  (true) 
  {
    cout << "Enter a Number: ";
    cin >> num;

    if (num == 0) {
      break;
    } else if (num > 0) {
      positiveCount++;
    } else {
      negativeCount++;
    }
  }

  cout << "Positive Number enetered." << positiveCount  << endl;
}
