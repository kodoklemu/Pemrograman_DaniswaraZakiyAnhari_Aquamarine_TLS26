#include <iostream>
using namespace std;

int getStringLength (const char* str)
{
    int lenght = 0;
    while (str[lenght] != '\0') 
    {
        lenght++;
    }
    return lenght;
}

void encryptAlien (const char* message)
{
    if (message[0] == '\0') return;

    cout << message[0];
    int length = getStringLength(message);

    for (int i = 1; i < length; i++)
    {
        int previousValue = message[i - 1] - 'A' + 1;
        int currentValue = message[i] - 'A';
        int newValue = (previousValue + currentValue) % 26;
        char newChar = 'A' + newValue;
        cout << newChar;
    }
    cout << '\n';
}

int main()
{
    char message[1000];
    cout << "Masukkan pesan ke alien berupa huruf: ";
    cin.getline(message, 1000);
    encryptAlien(message);
    return 0;
}