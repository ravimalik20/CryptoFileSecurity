FileSecurity

Author: Ravi Malik

Why This Project Exists?

This project was initially developed with the intention to learn. I wished to learn the concepts of security and started exploring about cryptography. Hence i wished to test the concepts I had learned in practise. So i decided to make a program which would ensure security of data within the file even if the file is intercepted by a third person. 

Some concepts applied in this project:

1. Block Cipher Encryption via. Rijndael/AES-128 block cipher encryption algorithms.

External Module used in this project:
1. CryptoLibAES-128 : This is an AES-128 encryption library written completely in C. This project also comes under the GNU GPL v2 license. The author of this library is Ravi Malik (myself :D).

Information about various files:
1. CryptoLibAES-128: An Open Source AES-128 block cipher encryption library, implemented completely in C and released under the GNU GPL v2 License. The author of this library is Ravi Malik (myself :D). Link to the Repository: https://github.com/ravimalik20/CryptoLibAES-128.
2. password_tools.h: Header file containing the logic to pre-process the password before using it.
3. secure.c: The main file whic is the interface to this project.

How to Use the Project:

1. Compile the file secure.c with GNU gcc compiler.
2. The program receives input as command line arguments.
3. The file runs in 2 modes:
	3.1. '-e': Encrypting Mode.
	3.2. '-d': Decrypting Mode.
4. the inputs that the program will receive are mode input_file_name password output_file_name

Example:
1. Encrypting 'file1' into 'file2' with password 'hello'
	./program -e file1 hello file2
2. Decrypting 'file2' into 'file3' using password 'hello'
	./program -e file2 hello file3
