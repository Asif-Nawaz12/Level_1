Task: 01
	Basic Calculator

Description: Create a simple calculator program that perform basic arithmetic operations (addition, subtraction, multiplication, division).

Explanation:

1. Input/Output Functions:
	
In C++, 'cout' and 'cin' are used for output and input, respectively.

2. User Input:

The program prompts the user to enter two numbers and an operator.
The operators can be one of the four basic arithmetic operations:
	addition ('+'), subtraction ('-'), multiplication ('*'), or division ('/').

3. Conditional Logic:

A 'switch' statement is used to determine which arithmetic operation to perform based on the operator entered by the user.
Each case corresponds to one of the arithmetic operations.

4. Division by Zero Handling:

Before performing division, the program checks if the second number ('num2') is zero. 
If it is, and error message is displayed to the user, indicating that division by zero is not allowed.

5. Ouput:

The result of the operation is printed to the console, formatted to two decimal places for clarity.



Task: 02
	Number Guessing Game

Description: Build a number guessing game where the program generates a random number, and the user tries to guess it.

Explanation:

1. Random Number Generation:

Use 'srand()' seeded with current time for better randomness.
'rand() % 100 + 1' generates numbers between 1-100.

2. Game Loop:

'do while' loop continues until correct guess
Tracks number of attempts taken

3. Feedback Systems:

Provides "Too high" or "Too Low" hints after each guess.
Congratulations player on correct guess with cout.

4. Error Handling:

While not explicity shown here, you could add input validation for non-integer entries.

5. Portability:

Works in both C and C++ environments.
Uses standard library functions available in both languages.



Task: 03
	String Manipulation 

Description: Write a program to implement basic strig operations such as reversing a string, counting vowels, and checking if the string is a palindrome.

Explanation:

1. String Reversal:

The C version manually reverses the array by swapping characters for bot ends.
The C++ version uses the built-in 'reverse()' algorithm.

2. Vowel Counting:

Both programs iterate through the string and count occurrences of vowels (a,e,i,o,u).
Case-insensitive counting is implemented using 'tolower()'.

3. Palindrome Check:

For palindromes, both versions compare characters from the start and end moving towards the center.
The C++ version first creates a filtered version containing only letters for more accurate palindrome detection.
Both handle case sensitivity by converting to lowercase.

