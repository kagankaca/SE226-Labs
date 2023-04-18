def equation(n):
    """
    Calculates the value of the equation ∑((-1)^(k+1) * k^n) for k from 1 to infinity
    using recursion and a global variable.

    Parameters:
    n (int): The value of n in the equation.

    Returns:
    None
    """
    global result
    
    # Base case: when k is greater than a large number, return
    if k > 100000:
        return
    
    # Calculate the value of the current term in the equation
    term = ((-1)**(k+1)) * (k**n)
    
    # Add the current term to the result
    result += term
    
    # Increment k and call the function again
    k += 1
    equation(n)

# Test the function with n=2
result = 0
k = 1
equation(2)
print(result)
