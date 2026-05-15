#include   <isotream>
using namespace std;

int  main () {

  int num;
  int  psoitiveCount = 0;
  int negativeCount = 0;

  whille (true) 
  {
    if (num == 0) {
      break;
    } else if  (num > 0) {
      positiveCount++;
    } else {
      negativeCount++;
    } 
  }

  cout << "Poositive Number entered." << positiveCount << endl;
  cout << "Negative Number entered." << negativeCount << endl;

  return 0;
}
