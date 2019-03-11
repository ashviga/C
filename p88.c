#include <stdio.h>

int main(void) {
	int a,k;
	float m;
	scanf("%d %d",&a,&k);
	m=a>>k;
	printf("%.2f",m);
	return 0;
}
