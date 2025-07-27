//divneev singh 24070123043 Entc A2

#include<iostream>
#include<bitset>
using namespace std;

void printBinary(int num, string label) {
    cout << label << " (" << num << "): " << bitset<8>(num) << endl;
}

int main(){
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "\nBinary representation:" << endl;
    printBinary(a, "a");
    printBinary(b, "b");
    
    cout << "\nBitwise Operations:" << endl;
    cout << "a & b  (AND)        = " << (a & b) << endl;
    cout << "a | b  (OR)         = " << (a | b) << endl;
    cout << "a ^ b  (XOR)        = " << (a ^ b) << endl;
    cout << "~a     (NOT a)      = " << (~a) << endl;
    cout << "~b     (NOT b)      = " << (~b) << endl;
    
    cout << "\nShift Operations on 'a':" << endl;
    cout << "a << 1 (Left  1)    = " << (a << 1) << endl;
    cout << "a << 2 (Left  2)    = " << (a << 2) << endl;
    cout << "a >> 1 (Right 1)    = " << (a >> 1) << endl;
    cout << "a >> 2 (Right 2)    = " << (a >> 2) << endl;
    
    cout << "\nResult Binary:" << endl;
    printBinary(a & b, "AND");
    printBinary(a | b, "OR");
    printBinary(a ^ b, "XOR");
    
    return 0;
}

/*
Enter two numbers: 5 8

Binary representation:
a (5): 00000101
b (8): 00001000

Bitwise Operations:
a & b  (AND)        = 0
a | b  (OR)         = 13
a ^ b  (XOR)        = 13
~a     (NOT a)      = -6
~b     (NOT b)      = -9

Shift Operations on 'a':
a << 1 (Left  1)    = 10
a << 2 (Left  2)    = 20
a >> 1 (Right 1)    = 2
a >> 2 (Right 2)    = 1

Result Binary:
AND (0): 00000000
OR (13): 00001101
XOR (13): 00001101
/*
