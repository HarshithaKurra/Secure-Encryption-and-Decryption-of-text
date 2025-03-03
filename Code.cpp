#include <iostream>
using namespace std;

// Function for XOR Encryption/Decryption with multi-character key
string encryptDecrypt(string text, string key) {
    string output = text;
    int keyLength = key.length();

    for (size_t i = 0; i < text.length(); i++) {
        output[i] ^= key[i % keyLength];  // XOR with repeating key
    }
    return output;
}

int main() {
    string text, key;

    cout << "Enter text to encrypt: ";
    getline(cin, text);  // Allows multi-word input

    cout << "Enter encryption key (multi-character): ";
    getline(cin, key);   // User enters a multi-character key

    // Encrypt the text
    string encrypted = encryptDecrypt(text, key);
    cout << "Encrypted: " << encrypted << endl;

    // Decrypt the text
    string decrypted = encryptDecrypt(encrypted, key);
    cout << "Decrypted: " << decrypted << endl;

    return 0;
}
