import sys
import math

def progress(R):
    num = R[0]
    count = 0
    answer = []
    for n in R:
        if n == num:
            count += 1
        else:
            answer.append(count)
            answer.append(num)
            num = n
            count = 1

    answer.append(count)
    answer.append(num)
    return ' '.join(str(x) for x in answer)

R = input('Enter number to start with: ')
L = int(input('Enter line to goto: '))
answer = R
result = R
print (answer)
for x in range(1,L):
    answer = result.split()
    result = progress(answer)
    print (result)
