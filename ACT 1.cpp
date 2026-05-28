#include <iostream> 
using namspace std;

int main () {

  int num;
  int poositiveCount = 0;
  int negativeCount = 0;

  while (true) 
  {

    else if (num == 0) {
      break;
    } else if (num > 0) {
      positiveCount++;
    } else {
      negativeCount++;
    }
  }

  cout << "Positive Numbers entered." << positiveCount << endl;
  cout << "Negative Numbers entered." << negativeCount << endl;
  
}
