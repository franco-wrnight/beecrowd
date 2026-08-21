#include <stdio.h>
#include <stdlib.h>

int sumPortionsSolveProblemFunction(int p1, int p2, int p3, int p4, int p5){
	int p1Weight = 300;
	int p2Weight = 1500;
	int p3Weight = 600;
	int p4Weight = 1000;
	int p5Weight = 150;
int sum = 0;
	sum = p1*p1Weight + p2*p2Weight + p3*p3Weight + p4*p4Weight + p5*p5Weight + 225;
return sum;
}

int main(void){
	int p1, p2, p3, p4, p5;
	scanf("%d %d %d %d %d", &p1, &p2, &p3, &p4, &p5);
	int result;	
	result = sumPortionsSolveProblemFunction(p1,p2,p3,p4,p5);
	printf("%d\n", result);

return 0;

}
