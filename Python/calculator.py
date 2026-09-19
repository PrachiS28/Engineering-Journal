def add(a, b):
    return a + b
 
def sub(a, b):
    return a - b
 
def mul(a, b):
    return a * b
 
def div(a, b):
    # need to check for zero or it crashes lol
    if b == 0:
        print("Error! cant divide by zero")
        return None
    else:
        return a / b
 
 
while True:
    print("\nChoose an option:")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Quit")
 
    choice = input("Enter choice (1/2/3/4/5): ")
 
    if choice == '5':
        print("Thanks for using my calculator, bye!")
        break
 
    if choice in ('1', '2', '3', '4'):
        # taking input as float so decimals work too
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
 
        if choice == '1':
            print("Result =", add(num1, num2))
 
        elif choice == '2':
            print("Result =", sub(num1, num2))
 
        elif choice == '3':
            print("Result =", mul(num1, num2))
 
        elif choice == '4':
            result = div(num1, num2)
            if result != None:
                print("Result =", result)
 
    else:
        print("Invalid input, please choose from the menu")
        
