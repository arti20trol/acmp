//TASK 5
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int days;
	scanf("%d", &days);
	int date[days];
	int chet = 0;
	int nechet = 0;

	for(int i = 0; i < days; i++) {
		scanf("%d", &date[i]);
	}

	for (int i = 0; i < days; ++i)
	{
		if (date[i] % 2 != 0)
		{
			printf("%d ", date[i]);
		}
	}
	printf("\n");
	for (int i = 0; i < days; ++i)
	{
		if (date[i] % 2 == 0)
		{
			printf("%d ", date[i]);
		}
	}
	printf("\n");

	for (int i = 0; i < days; ++i)
	{
		if (date[i] % 2 == 0)
		{
			chet++;
		}else {nechet++;}
	}
	if (chet == nechet)
	{
		printf("YES\n");
	}
	if (chet > nechet)
	{
		printf("YES\n");
	}
	if (chet < nechet)
	{
		printf("NO\n");
	}
	return 0;
}
