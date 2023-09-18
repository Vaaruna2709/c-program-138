#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("enter the units:");
	scanf("%d",&n);
	if (100>=n) {
		printf("No charges");
		
	}
	else if(111<n<400) {
		printf("%d", n * 4);
	}
	else
	printf("%d", n * 6);
	
	return 0;
}
