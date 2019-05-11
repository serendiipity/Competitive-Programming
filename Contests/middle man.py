n = int(input())
arr = list(map(int, input().split()))
max = arr[0]
for i in range (1, n):
	if arr[i] > max:
		max = arr[i]
max += 1
c = [0] * max
for i in range (0 , n):
    c[arr[i]] += 1
count = 0   

for j in range (0 , max):
    for i in range (0 , c[j]):
        arr[count] = j
        count += 1
print(arr[int(n/2)])