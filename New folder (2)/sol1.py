import math

n = int(input("Enter n: "))
x = int(input("Enter x: "))

# Lambda function to calculate the factorial of a number
factorial = lambda num: math.factorial(num)

# Lambda function to calculate the value of each term in the equation
term_value = lambda i: n**i / factorial(i)

# Create a list of term values up to x
term_list = [term_value(i) for i in range(x+1)]

# Calculate the sum of the terms and add 1 to get the final result
result = sum(term_list) + 1

print(result)
