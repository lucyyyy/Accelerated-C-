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

