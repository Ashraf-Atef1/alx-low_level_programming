# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
n1 = 100
n2 = 100
res = 0

while n1 <= 999:
    while n2 <= 999:
        sum = n1 * n2
        sum_str = str(sum)
        if list(sum_str) == [*reversed(list(sum_str))]:
            res = sum_str
            print(sum_str)
        n2 += 1
    n2 = 100
    n1 += 1