#include <stdio.h>

int magic(int *sqare, int size);

int main()
{
	int sqr[99];
	int counter,size;
	printf("Enter square size");
	scanf("%d", &size);
	for(counter = 0;counter < (size*size); counter++)
	{
		printf("Enter element:\n");
		scanf("%d", &sqr[counter]);
	}
	counter = magic(sqr, size);
	printf("%d", counter);
	return 0;
}

int magic(int *square, int size)
{
	int counterX, counterY, counter3, sum1 = 0, sum2 = 0;
	int mag;
	mag = (size*(size*size+1))/2;
	for(counterY = 0; counterY < (size*size); counterY += size)
	{
		for(counterX = counterY; counterX < size; counterX++)
		{
			sum1 += square[counterX];
			if(counterX < size)
			{
				for(counter3 = counterX; counter3 = (size*size); counter3 += size)
				{
					sum2 += square[counter3];
				}
				if(sum2 != mag)
				{
					return 1;
				}
			}
		}
		if(sum1 != mag)
		{
			return 2;
		}
	}
	sum1 = 0;sum2 = 0;
	for(counter3 = 0; counter3 < (size*size);counter3 += (size + 1))
	{
		sum1 += square[counter3];
	}
	if(sum1 != mag) return 3;
	
	for(counter3 = size; counter3 < (size*size); counter3 += (size - 1))
	{
		sum2 += square[counter3]; 
	}
	if(sum2 != mag) return 4;
	return 0;
}