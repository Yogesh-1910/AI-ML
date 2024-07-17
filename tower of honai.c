//AUTHOR: YOGESH S 1GA22AI063
//DATE:4/07/2024 12:30AM
//MODIFIED DATE: 4/07/2024
/*
START CODE
------------------------------------------
*/

#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char S, char D, char T)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", S,D);
		return;
	}
	towerOfHanoi(n-1, S, T, D);
	printf("\n Move disk %d from rod %c to rod %c", n, S, D);
	towerOfHanoi(n-1, T, D, S);
}

int main()
{
	int n = 4; // Number of disks
	towerOfHanoi(n, 'S', 'D', 'T'); // A, B and C are names of rods
	return 0;
}
/*
END CODE
------------------------------------------
*/
