# C++ Base64 library 📕
This is a simple Base64 library for C++ that i implement for increase my programming skills 💪.

# How to use 🧐
Import the Base64.h in the header of your C++ program and use the functions below:
```C++
// For encode
Base64::encode("my super string!");

// For decode
Base64::decode("bXkgc3VwZXIgc3RyaW5nIQ==");
```

# How implement ☝️🤓
It's very easy to implement base 64 encoding, let's take a example:

Bob want's encode the letter 'A', then he converts for your respectively ascii integer:
 * 'A' = 65.

Bob takes the number 65 and convert for a 8-bit Binary:
 * 65 = 01000001.

So now, Bob divides the 8-bit Binary in a group of 6 bits:
 * 01000001 -> 010000 01

Now, Bob takes the second group and increment four zeros because he needs to mantain the proportion of 6-bit groups:
 * 010000 01 -> 010000 01**0000**

Bob takes the group of binaries and convert for base 10:
 * 1 - 010000 = 16;
 * 2 - 010000 = 16;

Bob have the code '16 16' and he need to look this table and find the 16:
| Value | Letter |
|------:|--------|
|   0   |    A   |
|   1   |    B   |
|   2   |    C   |
|   3   |    D   |
|   4   |    E   |
|   5   |    F   |
|   6   |    G   |
|   7   |    H   |
|   8   |    I   |
|  pad  |    =   |

---
> You will find online 👍

Bob knows that 16 is 'Q' and the code '16 16' is QQ, but he need to put the pad character, because he increments zeros.

Imagine that one '=' symbol is equal two zeros and follow this proportion...

**Finally**, Bob can encode the letter 'A' for **QQ==**.

I recommend this articles for learn about:
+ https://en.wikipedia.org/wiki/Base64
+ https://www.base64encoder.io/learn/

# Errors? Report them ❤️!
Unfortunately I'm not one of the best programmers, so if you find any errors, please let me know!
