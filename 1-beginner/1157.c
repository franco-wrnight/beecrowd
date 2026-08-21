#include <stdio.h>

int computeDivisorOfNumberSolutionOfProblem(int c){
	for(int i = 1; i <= c; i++){
		if(c % i == 0){ //si la division es entera y sin residuos es divisor
		printf("%d\n", i);
		}
	}
	return c;
}




int main()
{
    // compute divisors
    int n;
	scanf("%d", &n);
 computeDivisorOfNumberSolutionOfProblem(n);

    return 0;
}
