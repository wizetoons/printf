# 0x11. C - printf
Aim: For collaboration purpose and to understand the concept of printf

Tasks

0. Write a function that produces output according to a format.

    c: converts input into a character
    
    s:  converts input into a string

 1. Handle the following conversion specifiers:
    
    d: converts input into a base 10 integer
	  
    i: converts input into an integer
  
2. Handle the following custom conversion specifiers
	  
    b: The unsigned int argument is converted to binary
3. Handle the following conversion specifiers:

	u: convert an integer argument to unsigned decimal
  
	o: convert an integer argument to unsigned octal.
  
	x: convert an integer argument to unsigned hexadecimal, using lowercase letters.
  
	X: convert an integer argument to unsigned hexadecimal, using uppercase letters.
  
4. Use a local buffer of 1024 chars in order to call write as little as possible.

5. Handle the following custom conversion specifier:

	S : prints the string.
  
	Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
  
6. Handle the following conversion specifier: 
	
  p:
7. Handle the following flag characters for non-custom conversion specifiers:

	  +: numerical conversions, prefix number with a + sign if positive.
  
	  space: signed numerical conversions, prefix number with a space if positive.
  
	  #: adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions
  
8. Handle the following length modifiers for non-custom conversion specifiers:

	l: conversions in short signed or unsigned ints
  
	h: conversions in long signed or unsigned ints
  
9.  Handle the field width for non-custom conversion specifiers.

10.  Handle the precision for non-custom conversion specifiers.

11.  Handle the 0 flag character for non-custom conversion specifiers.

12.  Handle the - flag character for non-custom conversion specifiers.

13.  Handle the following custom conversion specifier:
	
    r : prints the reversed string

14.  Handle the following custom conversion specifier:
	
    R: prints the rot13'ed string
  
15.  All the above options work well together.
