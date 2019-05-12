m = int(input())
arr = list(map(int, input().split()))
n = len(arr) 
inc = [1 for i in range(n+1)] 
LIS = [[] for i in range(n+1)]
LDS = [[] for i in range(n+1)]
max_index = -1

LIS[0].append(arr[0])
LDS[0].append(arr[n-1])

for i in range(1 , n): 
    for j in range(0 , i): 
        if ((arr[i] > arr[j]) and (inc[i] < inc[j] +1)): 
            inc[i] = inc[j] + 1
            if len(LIS[j]) > len(LIS[i]):
            	LIS[i] = LIS[j]
    LIS[i].append(arr[i])

    
dec = [1 for i in range(n+1)] 

for i in reversed(range(n-1)):
	for j in reversed(range(i-1, n)):
		if arr[i] > arr[j] and dec[i] < dec[j] + 1:
			dec[i] = dec[j] + 1
			if len(LDS[j]) > len(LDS[i]):
				LDS[i] = LDS[j]
	LDS[i].append(arr[i])
      
for i in range(0, n+1):
	LDS[i] = reversed(LDS[i])
	
length = inc[0] + dec[0] - 1
for i in range(1 , n): 
    length = max((inc[i] + dec[i]-1), length) 
    if inc[i] + dec[i]-1 >= length:
    	max_index = i

for i in range (len(LIS[max_index])):
	print(LIS[max_index][i])
	


print(length)


