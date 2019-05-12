# your code goes here
n,m = list(map(int, input().split()))
adj_list = [[] for i in range(n+1)]
for i in range(m):
	u,v = list(map(int, input().split()))
	adj_list[u].append(v)
for i in range(1, n+1):
	adj_list[i].sort()
	print(i, end=" ")
	print(len(adj_list[i]), end=" ")
	for j in adj_list[i]:
		print(j, end=" ")
	print()