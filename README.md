It is my first repository on git hub, so it is possible that I will make some errors regarding style, presentation, and overall professionalism. Don't be too harsh, if you must judge.
# Credit card validator in C
  This program checks whether a given credit card number is valid using **Luhn's Algorithm**(a checksum formula, used by most financial institutions to validate credit card numbers).

# Contents
  So, the program consists of three functions: main, digits, and luhn. 
  1) main function handles the conditionals for checking the card's type. Yes, I hardcoded the required card numbers to check for the type, but in this case, this seems to be the only available option. Also, the main function calls for the digits and luhn functions, thus making the code more organized and easier to comprehend(at least for me). 
  2) digits function uses the do, while loop in order to count the number of digits in the card's number. Every iteration, it divides the number by 10 and increases the digits variable by 1 until the number would not be less than 0. Then, it returns the number of digits it has counted.
  3) luhn function was the hardest one to write, since it should handle the complex(at least for me at the time) algorithm. First, I declared two variables: l for the sum of digits that would not be touched and s for the sum of the doubled digits. Then, I made a loop that would iterate until the card's number would not reach 0. In the loop, the l summs up all the untouched numbers, whilst s summs up ws, new variable declared inside the loop to double every second digit. After that, I took the sum of these two numbers and checked its second number, whether it's 0 or not. If yes, it returns 1, if no, it returns 0. (At the time, I thought that 0 should represent an error and 1 a success :) ).

# How it works
  1. The program takes a credit card number as input.
  2. It applies Luhn's algorithm:
    a) multiplies every second digit by 2.
    b) sums up these doubled digits with the untouched digits.
    c) if the resulting number ends with a 0, the card is valid.
  3. Based on the card's first digits and length, it identifies the card's type: AMEX, MASTERCARD, or VISA(others count as invalid).

 # Example runs
 ./credit
 Number: 4003600000000014
 VISA

 ./credit
 Number: 378282246310005
 AMEX

 ./credit
 Number: 5105105105105100
 MASTERCARD

 ./credit
 Number: 1234567890123456
 INVALID

 # Reflection
 Overall, since it is one of my first programs in C, it was pretty hard to write and it contains a plenty of things that could be done better. However, writing it gave me a solid foundation in loops, conditionals, functions, arithmetic operations, and debugging in C. In addition, writing this code has reinforced my view of CS as a universal field that could be applied in any modern day situation, like finances and banking in case of my program. So, despite its imperfections, it gave me more confidence in writing code, which is an important step on my way to CS career.

