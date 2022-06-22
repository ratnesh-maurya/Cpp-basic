t = int(input())
while(t > 0):
    a = []
    n = int(input())

    a = [int(j) for j in input().split()][:n]
    a.sort()
    diff = a[1]-a[0]
    for i in range(len(a)-1):
        if diff > a[i+1]-a[i]:
            diff = a[i+1]-a[i]
    print(diff)
    t = t-1
