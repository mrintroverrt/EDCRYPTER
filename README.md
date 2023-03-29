# Encryption and Decryption Program

This is a simple command-line program that can be used to encrypt and decrypt integer values using a key. The program is written in C language and uses bit manipulation techniques to perform the encryption and decryption.

# Usage

To use the program, you can follow these steps:

1.Compile the source code file using the `gcc` compiler. You can use the following 
command to compile the code:

gcc -o encryption encryption.c

2.To encrypt an integer value, run the executable file by typing its name and passing two integer arguments: the value to encrypt and the key. For example, to encrypt the integer value `10` using a key of `3`, you can run the following command:

./a.out encrypt 10 3

This will output the encrypted value to the console.

3.To decrypt the encrypted value using the same key, run the executable file again with the encrypted value and the key as arguments. For example, to decrypt the encrypted value `80` using the same key of `3`, you can run the following command:

./a.out decrypt 10 3

This will output the decrypted value to the console.

# Limitations

This program is designed to work with integer values only. It may not work as expected with floating-point values or other data types. Additionally, this program uses a very simple encryption technique and should not be considered secure for sensitive data.

# Author
This program was created by @Mr_introverrt for educational purposes. 
Feel free to modify and use it as needed Contact me @mr_introverrt Insta.