a = input()
word= list(a)
standard = 0
ans = 0

if(len(word)%2 == 0):
    standard = len(word) // 2
else:
    standard =(len(word) - 1)// 2

for i in range(0, standard, 1):
    if(word[i] == word[len(word)-1-i]):
        ans += 0
    else:
        ans += 1
if(ans == 0):
    print('1')
else:
    print('0')