#include <iostream>
using namespace std;

int main() 
{
    int num;
    int positiveCount = 0;
    int negativeCount = 0;

    while (true)
	{
        cout << "Enter a number: ";
        cin >> num;

        if (num == 0) {
            break;
        } else if (num > 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }
    }

    cout << "Positive numbers entered: " << positiveCount << endl;
    cout << "Negative numbers entered: " << negativeCount << endl;

    return 0;
}

