# Accelerated-Cpp
study notes and exercises for the book 'Accelerated C++'

## Preface
- Focus on the universally important parts of C++
- First part through Chapter 7, concentrates that use standard-library abstractions; Second part, starting with Chapter 8, talks about defining your own abstraction
- two appendices summarize and elucidate the important parts of the language and library at a level of detail
- Do go to the website:  http://www.acceleratedcpp.com

## 0 Getting Started

```
// a small C++ program
#include <iostream>

int main()
{
	std::cout << "Hello, world!" << std::endl;
	return 0;
}
```
1. comments: in `//`
2. #include *directives*: the name iostream is a **standard header**. Its name and behavior is defined
3. every c++ program must contain a function named **main**
4. curly braces: {}, what inside braces is treated as a unit 
5. `std::cout << "Hello, world!" << std::endl;`
- standard library's output operator <<; 
- preceding a name by **std::** indicates that the name is part of a **namespace** named std;
- The standard library uses std to contain all the names that it defines;
- the << write *Hello, world*, and then write the value of std:enl; writing the value of it ends the current line of output
6. return: ends the execution of the function which it appears and passes the value; type must be same with the type the function says
7. A slightly deeper look:
- << is **left-associative**, should work like `(std::cout<<"Hello, world")<<std::endl`; the endl is a **manipulator**, which tells << to do whatever the manipulator says to do
- The entire expression yields std::cout as its vlue; when we follow the expression by a semicolon, we are asking the implementation to discard the value---which is approporiate since we are interested only in side effects
- The operator :: is also known as the **scope operator**, thus std::out means "the name cout that is in the (namespace) scope std"
- Curly braces form another kind of scope.
8. Details:
- three entities that are not free-form:
  string literals: may not span lines
  #include name: must appear on a line by themselves
  //comments: ends at the end of the current line (`/*`is free-form)
- Types: define data structures and operations on those data structures; c++ has two kinds of types: those built in the core language, such as int; and those defined outside, such as std::ostream
- some special string literals: 
  `\n` newline character
  `\t` tab character
  `\b` backspace character

## 1 Working with strings
### 1.1 Input
1. a **variable** is an **object** that has name. An object, is a part of the computer's memory that has a type.(There are other objects which do not have names)
2. `std::cout<<"Please enter your first name:` is not followed by `std::endl`, so the computer waits on the same line for input
3. we should also #include<string> if we want to use it. When we define a type string and don't initialize it, it is initially empty.
4. string: when we ask the library to read a **string**, it begins by discarding **whitespace** characters from the input, then read characters until it encounters another whitespace character or end-of-file.
5. The input operation has another side effect: It causes our prompt, which ask for user's name in this case, to appear on the computer's output device. This the result of flushing the buffer.
6. **buffer**: 
	In general, the input-ouput library saves its output in an internal data structure called a buffer, using it to accumulate the characters to be written, and **flushes** the buffer, by doing so, it can combine several output operations into a single write.(since most systems take some amount of time to write to output device, regardless of how many characters there are to write.)
	Three events that caused the system to flush the buffer: 1) buffer might be full 2) read from a standard input stream 3) when we explicitly say to do so.

### 1.2 Framing a name
1. we can use `+` to **concatenate** a string and a string literal---or for that matter, two strings(but not two string literals)
2. `+` have different meanings; we say that the operator is **overloaded**
3. **const**: saying const as part of a variable's definition promises that we are not going to change the value of the variable for the rest of its lifetime. So must initialize it then and there.
4. **construct** the variable: By using *parentheses* is a definition, we tell the implementation to construct variables in a way that depends on the type of variable. For strings: (integer value, char value) means repeat the char value for the integer value times.
5. **char literals**: distinct from the string literals. A charcter literal is always enclosed in single quotes, a string literal is always enclosed in double quotes.
6. the expression `greeting.size()` is an example of calling a **member function**, size() means the number of characters in greeting

### 1.3 Details
1. variables defined inside a pair of curly braces are local variables. When the implementation reaches the },  it destroys the variables, and returns any memory they occupied to the system.

## 2 Looping and counting
This chapter changes the previous formated greetings in a way using loop so that we can modify the code easily to adjust the format.
### 2.3 Writing an unknown number of rows

