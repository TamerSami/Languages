print("Enter values for a and b to calculate -b/a")

a = float(input("a: "))
b = float(input("b: "))

if a == 0:
    if b == 0:
        print("Infinite Solutions.")
    else:
        print("No Solution.")
else:
    result = float(-(b/a))
    print(f"x = -{b}/{a} = {result}")
