n = int(input())

arr = list(map(int, input().split()))


start = 0
end = n - 1
while start <= end:
    mid = (int)((start + end) / 2) 
    if arr[mid - 1] < arr[mid] and arr[mid + 1] < arr[mid]:
        index = mid
        print(mid + 1)
        break
    elif arr[mid] < arr[mid + 1]:
        start = mid + 1
    elif arr[mid] > arr[mid + 1]:
        end = mid - 1
L = []
R = []
for i in range (0, index + 1):
	L.append(arr[i])
for i in range (0, n - index + 1):
	R.append(arr[n - i - 1])
l = 0
r = 0
for i in range (0, n):
	if L[l] <= R[r]:
		arr[i] = L[l]
		l += 1
	elif R[r] < L[l]:
		arr[i] = R[r]
		r += 1
	elif r == n - index - 1:
		for j in range (l, index):
			arr[i] = arr[l]
			l += 1
		break
	elif l == index:
		for j in range (r, index):
			arr[i] = arr[r]
			r += 1
		break
for i in range (0, n):
	print(arr[i], end = ' ')
	
		


	
 	
	