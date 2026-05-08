#include <iostream>
using namespace std;

int main () {

  int num;
  int positiveCount;
  int negativeCount;

  while (true) 
  {
    cout << "Enter a Number: ";
    cin >> num;

    if (num == 0) {
      break;
    } else if (num > 0) {
      positiveCount++;
    }
  }
}
