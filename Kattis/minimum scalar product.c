#include <stdio.h>

int cmp(const void *x, const void *y) {
	long long X = *(long long *)x;
	long long Y = *(long long *)y;
	
	return X - Y;
}

int cmp2(const void *x, const void *y) {
	long long X = *(long long *)x;
	long long Y = *(long long *)y;
	
	return Y - X;
}

int main(void) {
	int cases, n, k, i, j, product;
	long long arr1[800], count, arr2[800]; 
	
	
	
	scanf("%d", &cases); 
	for(k=1; k<=cases; k++) {
	scanf("%d", &n); 
/*	
	for(i=0, product =0; i<2; i++) {
	
	
		for(j=0; j<n; j++) 
		scanf("%d", &arr1[j]);
		sort(arr1, n);
		for (count =0; count<n; count++) 
		printf("%d ", arr1[count]);
		for(j=0; j<n; j++)
		scanf("%d", &arr2[j]);
		sort(arr2, n);
		
	for (i=0; i<n; i++)
	product += arr1[i] * arr2[i];
	printf("case %d: %d\n", k, product);
	}
	}
	
	*/
	
	for(i=0; i<n; i++)
		scanf("%lld", &arr1[i]);
		
	for (i=0; i<n; i++)
		scanf("%lld", &arr2[i]);
	
	qsort(arr1, n, sizeof(long long), cmp);
	qsort(arr2, n, sizeof(long long), cmp2);
	
	count = 0;
	for(i = 0; i < n; i++)
		count = count + arr1[i] * arr2[i];
		
	printf("Case #%d: %lld\n", k,count);
	}

	 return 0; 
	 
}
