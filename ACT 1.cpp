#include <Iostream>
using namespace std;

int main () {
  int num;
  int postiveCount = 0;
  int negativeCount = 0;

  while (true) 
  {
    cout << "Enter a Number: ";
    cin >> num;

    if (num == 0) {
      break;
    } else if (num > 0) {
      postiveCount++;
    } else {
      negativeCount++;
    }
  }

  cout << "Positive Numbers entered." << positiveCount << endl;
  cout << "Negative Numbers entered." << negativeCount << endl;

  return 0;
}
