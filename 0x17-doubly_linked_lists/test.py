# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
n1 = 999
n2 = 999
res = 0

def is_palindrome(number):
    str_number = str(number)
    return str_number == str_number[::-1]
while n1 > 99:
    while n2 > 99:
        if is_palindrome(n1 * n2):
            res = n1 * n2
            print(res)
            exit()
        n2 -= 1
    n2 = 999
    n1 -= 1
