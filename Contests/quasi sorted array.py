n = int(input())
arr = list(map(int, input().split()))
i = 0 
flag = 0
first = -1
last = -1
count = 0
while i < n - 1:
	print("count is " + str(count))
	if arr[i] >= arr[i + 1]:
		if flag == 0:
			flag = 1
			first = i
	elif flag == 1:
		last = i
		break
	i += 1
print(str(first) + " " + str(last))
if flag == 0: 
	print("YES")
else:
	if last == -1:
		last = n - 1
	for i in range (0, int((last - first) / 2) + 1):
		temp = arr[i + first]
		arr[i + first] = arr[last - i]
		arr[last - i] = temp
	flag = 0
	for i in range (0, n - 1):
		if arr[i] > arr[i + 1]:
			flag = 1
			break
	if flag == 1:
		print("NO")
	else:
		first += 1
		last += 1
		print("YES " + str(first) + " " + str(last))
	

		

	
		