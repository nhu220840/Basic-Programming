wrong_count = 0
while True:
    try:
        num = float(input("Enter a positive number: "))
        if num > 0:
            break
        wrong_count += 1
    except ValueError:
        print("That's not a number!")
        wrong_count += 1
    if wrong_count == 5:
        print("You have entered the wrong number 5 times. Bye!")
        break
print("You've entered", wrong_count, "time(s) wrong.")