#include <iostream>
using namespace std;

int main() {
    int num;      
    int evenCount = 0;
    int oddCount = 0;  

    
    do {
        cout << "Enter an integer: ";
        cin >> num;
        if (num == 0) break; 
        
        if (num % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++; 
        }
    } while (num != 0);

    
    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;

    return 0;
}
