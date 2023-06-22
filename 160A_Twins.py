n=int(input())
coins=[int(i) for i in input().split()]
coins=sorted(coins,reverse=True)
sum1=sum(coins)
cointaken=0
takenamt=0
for i in range(n):
    if(takenamt<=(sum1/2)):
        cointaken+=1
        takenamt+=coins[i]
    else:
        break
print(cointaken)