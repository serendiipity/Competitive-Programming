# your code goes here
from collections import deque
Q = deque([])
arr = list(map(int, input().split()))
n = arr[0]
m = arr[1]
count = 0
V = []
adj_list = [[] for i in range(n+1)]

for i in range (0, m):
	e = list(map(int, input().split()))
	u = e[0]
	v = e[1]
	adj_list[u].append(v)
	adj_list[v].append(u)
	
visited = []
for i in range (0, n+1):
	visited.append(0)

for i in range (1, n+1):
	if visited[i] != 1:
		Q.append(i)
		while len(Q) != 0:
			u = Q.popleft()
			if visited[u] == 0:
				if len(adj_list[u]) != 0:
					for i in range(0, len(adj_list[u])):
						Q.append(adj_list[u][i])
				visited[u] = 1
		count += 1
print(count)
	