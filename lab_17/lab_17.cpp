#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[256];
    cout << "Enter a string of words: ";
    cin.getline(str, 256);

    char* words[128];
    int count = 0;
    char* token = strtok(str, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = 1; i < count; i++) {
        char* key = words[i];
        int j = i - 1;
        while (j >= 0 && tolower(words[j][0]) > tolower(key[0])) {
            words[j + 1] = words[j];
            j--;
        }
        words[j + 1] = key;
    }

    cout << "Sorted words: ";
    for (int i = 0; i < count; i++) {
        cout << words[i];
        if (i < count - 1) cout << " ";
    }
    cout << endl;
    return 0;
}

