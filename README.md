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
  0 A            17 R            34 i            51 z
  1 B            18 S            35 j            52 0
  2 C            19 T            36 k            53 1
  3 D            20 U            37 l            54 2
  4 E            21 V            38 m            55 3
  5 F            22 W            39 n            56 4
  6 G            23 X            40 o            57 5
  7 H            24 Y            41 p            58 6
  8 I            25 Z            42 q            59 7
  9 J            26 a            43 r            60 8
 10 K            27 b            44 s            61 9
 11 L            28 c            45 t            62 +
 12 M            29 d            46 u            63 /
 13 N            30 e            47 v
 14 O            31 f            48 w         (pad) =
 15 P            32 g            49 x
 16 Q            33 h            50 y

Bob knows that 16 is 'Q' and the code '16 16' is QQ, but he need to put the pad character, because he increments zeros.

Imagine that one '=' symbol is equal two zeros and follow this proportion...

**Finally**, Bob can encode the letter 'A' for **QQ==**.

I recommend this articles for learn about:
+ https://en.wikipedia.org/wiki/Base64
+ https://www.base64encoder.io/learn/

# Errors? Report them ❤️!
Unfortunately I'm not one of the best programmers, so if you find any errors, please let me know!
