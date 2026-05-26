#include <iostream>
using namespace std;

int main () {

  int num;
  int  positiveCount = 0;
  int  negativeCount = 0;

  while (true) 
  {
    if (num == 0) {
      break; 
    } else if (num > 0) {
      positiveCount++;
    } else {
      negativeCount++;
    }
  }

  coout << "Positive Numbers  entered." << positiveCount << endl;
    coout << "Positive Numbers  entered." << positiveCount << endl;

  return 0;
}
  
