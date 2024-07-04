//QUESTION-->
//Write a C-program which convert roman number to decimal number 

//ANSWER-->
#include <iostream>
#include <string>

using namespace std;

//Creating function-1 which contain a chart of roman numbers
int roman_values(char b) {
    switch (b) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default : return 0;
    }
}

//Creating function-2 which helps to convert roman number to decimal numbers
int converting(string rnum) {
    int total = 0;
    int length = rnum.length();
    
    for (int i = 0; i < length; i++) {
        int currentvalue = roman_values(rnum[i]);
        int nextvalue = (i + 1 < length) ? roman_values(rnum[i + 1]) : 0;
        
        if (currentvalue < nextvalue) {
            total -= currentvalue;
        } else {
            total += currentvalue;
        }
    }
    return total;
}

int main() {
    string rnum;
    
    //Accepting userinput roman number from user
    cout << "Enter your number: ";
    cin >> rnum;
    
    //printing roman numbers to decimal numbers
    int decimal = converting(rnum);
    cout << "Decimal value is = " << decimal << "\n";
    
    return 0;
}
