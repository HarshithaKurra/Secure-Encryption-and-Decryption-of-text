# Secure-Encryption-and-Decryption-of-text
Encryption is the process of converting plaintext into unreadable ciphertext using an algorithm and a key. This ensures that unauthorized users cannot understand the data.
 Example:
 Plaintext: HELLO
 Encrypted (Ciphertext): X&@P^
Only someone with the correct key can decrypt and retrieve the original message.

Decryption is the reverse process—it converts encrypted data (ciphertext) back into readable plaintext using the correct key.
Example:
 Ciphertext: X&@P^
 Decrypted (Plaintext): HELLO
Encryption and decryption ensure secure communication and data protection.
In this project, we implement XOR encryption and decryption using a multi-character key in C++. The same function is used for both encryption and decryption.

Steps in the Project
========================
Take plaintext input from the user.
Take an encryption key (multi-character key).
Encrypt the text using XOR (^) operation with the repeating key.
Display encrypted text (ciphertext).
Decrypt the text using the same XOR process.
Display decrypted text (original message restored).

How XOR Encryption Works:
============================
XOR (^) is a bitwise operation where:
Same bits result in 0 (1 ^ 1 = 0, 0 ^ 0 = 0)
Different bits result in 1 (1 ^ 0 = 1, 0 ^ 1 = 1)
