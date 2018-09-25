formula = input().split()
index = formula.index('x')
op = formula[1]

if op == '-':
    if index == 2:
        ans = int(formula[0]) - int(formula[4])
    elif index == 4:
        ans = int(formula[0]) - int(formula[2])
    else:
        ans = int(formula[4]) + int(formula[2])
else:
    if index == 2:
        ans = int(formula[4]) - int(formula[0])
    elif index == 4:
        ans = int(formula[0]) + int(formula[2])
    else:
        ans = int(formula[4]) - int(formula[2])

print(ans)
