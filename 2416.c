#include <stdio.h>
#include <stdlib.h>
int solveModulo;
int solution(int a, int b){
        int solveModulo = (a % b);
return solveModulo;
}

int main(){
	int meters;
        int track;
        scanf("%d %d", &meters, &track);
       	solveModulo = solution(meters, track);
        printf("%d\n", solveModulo);
        return 0;


}
