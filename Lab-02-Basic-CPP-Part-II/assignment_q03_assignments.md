
# Question 3: Valid and Invalid Assignments

Given:
int num1, num2, newNum;
double x, y;

a. num1 = 35;
Valid.

b. newNum = num1 - num2;
Valid, assuming num1 and num2 have been initialized.

c. num1 = 5; num2 = 2 + num1; num1 = num2 / 3;
Valid.

d. num1 * num2 = newNum;
Invalid. The left side is an expression.

e. x = 12 * num1 - 15.3;
Valid.

f. num1 * 2 = newNum + num2;
Invalid. The left side is an expression.

g. x / y = x * y;
Invalid. The left side is an expression.