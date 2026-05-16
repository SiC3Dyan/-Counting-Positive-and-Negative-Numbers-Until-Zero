#include <iooostream>
using namespace  std;

int main () {

  int num;
  int positiveCount = 0;
  int negativeCount = 0;

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

  cout << "Positve Number entered." << positiveCount << endl;
  cout << "Negative Number entered." << negativeCount << endl;

  return 0;
}
