// divneev singh 24070123043 Entc A2

#include<iostream>
#include<bitset>
using namespace std;

bool isValidInput(int num, int bitPos) {
    return (num >= 0 && num <= 255 && bitPos >= 0 && bitPos <= 7);
}

void displayBitOperation(int original, int result, int bitPos, string operation) {
    cout << operation << " bit " << bitPos << ":" << endl;
    cout << "Original: " << original << " (" << bitset<8>(original) << ")" << endl;
    cout << "Result:   " << result << " (" << bitset<8>(result) << ")" << endl;
    cout << endl;
}

int main(){
    int num1, num2, bitPos1, bitPos2;
    
    cout << "=== BIT SET OPERATION ===" << endl;
    cout << "Enter number (0-255): ";
    cin >> num1;
    cout << "Enter bit position to SET (0-7): ";
    cin >> bitPos1;
    
    if(!isValidInput(num1, bitPos1)) {
        cout << "Invalid input! Number must be 0-255, bit position 0-7." << endl;
        return 1;
    }
    
    cout << "\n=== BIT RESET OPERATION ===" << endl;
    cout << "Enter number (0-255): ";
    cin >> num2;
    cout << "Enter bit position to RESET (0-7): ";
    cin >> bitPos2;
    
    if(!isValidInput(num2, bitPos2)) {
        cout << "Invalid input! Number must be 0-255, bit position 0-7." << endl;
        return 1;
    }
    
    int setBit = num1 | (1 << bitPos1);
    int resetBit = num2 & (~(1 << bitPos2));
    
    cout << "\n=== RESULTS ===" << endl;
    displayBitOperation(num1, setBit, bitPos1, "SET");
    displayBitOperation(num2, resetBit, bitPos2, "RESET");
    
    cout << "Additional Operations:" << endl;
    cout << "Toggle bit " << bitPos1 << " of " << num1 << ": " << (num1 ^ (1 << bitPos1)) << endl;
    cout << "Check bit " << bitPos2 << " of " << num2 << ": " << ((num2 & (1 << bitPos2)) ? "1" : "0") << endl;
    
    return 0;
}

/*
=== BIT SET OPERATION ===
Enter number (0-255): 55
Enter bit position to SET (0-7): 5

=== BIT RESET OPERATION ===
Enter number (0-255): 35
Enter bit position to RESET (0-7): 5

=== RESULTS ===
SET bit 5:
Original: 55 (00110111)
Result:   55 (00110111)

RESET bit 5:
Original: 35 (00100011)
Result:   3 (00000011)

Additional Operations:
Toggle bit 5 of 55: 23
Check bit 5 of 35: 1
  /*
