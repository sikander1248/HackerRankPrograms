n = int(input())

sq = [int(ele) for ele in input().split()]

d, m = [int(ele) for ele in input().split()]

res = 0

for i in range(0, n - m + 1):
#    print( sq[i : i + m] , ':' , sum(sq[i : i + m]) )
    if(sum(sq[i : i + m]) == d):
        res += 1

print(res)
