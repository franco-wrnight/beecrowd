#include <stdio.h>
int output;
int solve(int p1, int c1, int p2, int c2)
{
	int leftSide;
	leftSide = p1 * c1;
	int rightSide;
	rightSide = p2 * c2;

	if (rightSide > leftSide)
	{
		output = -1;
	}

	if (leftSide > rightSide)
	{
		output = 1;
	}

	if (leftSide == rightSide)
	{
		output = 0;
	}

	return output;
}

int main()
{
	int p1;
	int c1;
	int p2;
	int c2;
	scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
	solve(p1, c1, p2, c2);
	printf("%d\n", output);
	return 0;
}
