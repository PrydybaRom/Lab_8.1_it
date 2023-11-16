#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


// Рахує кількість +
int countSymbolsPlus(const char* str) {
    int pCount = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '+') {
            pCount++;
        }
    }
    return pCount;
}

// Рахує кількість -
int countSymbolsMinus(const char* str) {
    int mCount = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '-') {
            mCount++;
        }
    }
    return mCount;
}

// Рахує кількість =
int countSymbolsEquals(const char* str) {
    int eCount = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '=') {
            eCount++;
        }
    }
    return eCount;
}

// Змінює символи + - = на **
char* ChangeSymbols(const char* str) {
    int length = strlen(str);
    char* resultArray = new char[length * 2 + 1];

    int j = 0; 

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '=') {
            resultArray[j++] = '*';
            resultArray[j++] = '*';
        }
        else {
            resultArray[j++] = str[i];
        }
    }

    resultArray[j] = '\0'; 

    return resultArray;
}

int main() {
    const int arraySize = 101; 
    char str[arraySize];

    cout << "Enter string:" << endl;
    cin.getline(str, arraySize);

    int pCount = countSymbolsPlus(str);
    int mCount = countSymbolsMinus(str);
    int eCount = countSymbolsEquals(str);

    cout << "Str contained + : " << pCount << endl;
    cout << "Str contained - : " << mCount << endl;
    cout << "Str contained = : " << eCount << endl;

    char* modifiedArray = ChangeSymbols(str);
    cout << "Modified Array : " << modifiedArray << endl;

    delete[] modifiedArray;

    return 0;
}
