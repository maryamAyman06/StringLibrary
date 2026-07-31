# clsString Library (C++)

A lightweight C++ string utility class that wraps the standard `std::string` and provides many commonly used string manipulation functions.

## Features

This library includes functions for:

- Get string length
- Print the first letter of every word
- Capitalize the first letter of each word
- Convert the first letter of each word to lowercase
- Convert the entire string to uppercase
- Convert the entire string to lowercase
- Invert character cases
- Count uppercase letters
- Count lowercase letters
- Count all letters
- Count a specific character
- Count vowels
- Print vowels
- Print every word
- Count words
- Split strings
- Trim left spaces
- Trim right spaces
- Trim both sides
- Join strings
- Reverse word order
- Replace substrings
- Remove punctuation

---

## Class Overview

```cpp
class clsString
```

The class stores a private string value:

```cpp
string _Value;
```

It also supports a property:

```cpp
Value
```

which allows easy getting and setting of the internal string.

---

## Constructors

### Default Constructor

```cpp
clsString();
```

Creates an empty string.

### Parameterized Constructor

```cpp
clsString(string Value);
```

Initializes the object with a string.

---

## Available Functions

### Basic

| Function | Description |
|----------|-------------|
| `Length()` | Returns string length |
| `SetValue()` | Set string value |
| `GetValue()` | Get string value |

---

### Letter Case

| Function | Description |
|----------|-------------|
| `UpperFirstLetterOfEachWord()` | Capitalize first letter of every word |
| `LowerFirstLetterOfEachWord()` | Lowercase first letter of every word |
| `UpperAllString()` | Convert entire string to uppercase |
| `LowerAllString()` | Convert entire string to lowercase |
| `InvertAllStringLetterCase()` | Toggle uppercase/lowercase |

---

### Letter Statistics

| Function | Description |
|----------|-------------|
| `CapitalLetterCount()` | Count uppercase letters |
| `SmallLetterCount()` | Count lowercase letters |
| `CountLetters()` | Count letters by type |
| `CountSpecificLetter()` | Count occurrences of a character |
| `CountVowels()` | Count vowels |

---

### Printing

| Function | Description |
|----------|-------------|
| `PrintFirstLetterOfEachWord()` | Print first character of every word |
| `PrintVowel()` | Print all vowels |
| `PrintEachWord()` | Print every word on a new line |

---

### Word Operations

| Function | Description |
|----------|-------------|
| `CountNumberOfWordsInString()` | Count words |
| `split()` | Split string using delimiter |
| `ReverseWordsInString()` | Reverse word order |

---

### Trim

| Function | Description |
|----------|-------------|
| `TrimLeft()` | Remove leading spaces |
| `TrimRight()` | Remove trailing spaces |
| `Trim()` | Remove spaces from both sides |

---

### Join

Supports joining:

- Vector of strings

```cpp
vector<string>
```

- Array of strings

```cpp
string[]
```

---

### Replace

```cpp
Replace(oldValue, newValue)
```

Replaces every occurrence of a substring.

---

### Remove Punctuation

```cpp
RemovePunc()
```

Removes punctuation symbols from the string.

---

## Static vs Object Functions

Most functions are provided in two versions.

### Static Version

```cpp
clsString::UpperAllString(text);
```

Returns a processed string without creating an object.

### Object Version

```cpp
clsString str("hello world");

str.UpperAllString();

cout << str.Value;
```

Operates directly on the object's stored value.

---

## Example

```cpp
#include "clsString.h"

int main()
{
    clsString text("hello world from cpp");

    cout << text.Length() << endl;

    text.UpperFirstLetterOfEachWord();

    cout << text.Value << endl;

    text.UpperAllString();

    cout << text.Value << endl;

    cout << text.CountVowels() << endl;

    text.ReverseWordsInString();

    cout << text.Value << endl;
}
```

Output

```
20
Hello World From Cpp
HELLO WORLD FROM CPP
4
CPP FROM WORLD HELLO
```

---

## Notes

- Most functions are available as both **static** and **member** methods.
- The class internally uses `std::string`.
- String splitting is implemented using a custom delimiter.
- Character operations rely on the standard C++ `<cctype>` library.

---