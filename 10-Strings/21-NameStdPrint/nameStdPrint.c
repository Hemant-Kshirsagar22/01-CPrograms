#include <stdio.h>

char nameStdString[10][20] = 
			{
				"Hemant\0",
				"Kshirsagar\0",
				"10th\0",
				"Siddhant\0",
				"Kshirsagar\0",
				"10th\0"
			};

char std[] = "10th\0";
int main(void)
{
	void printStudentFrom10thStd(void);

	printf("Students from 10th std :\n");
	printStudentFrom10thStd();

	return(0);
}

void printStudentFrom10thStd(void)
{
	int i = 0;
	int j = 0;
	int flag = 0;

	for(i = 2; i < sizeof(nameStdString) / sizeof(nameStdString[0]); i = i + 3)
	{
		flag = 0;
		for(j = 0; nameStdString[i][j] != '\0'; j++)
		{
			if(nameStdString[i][j] != std[j])
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			printf("%s\n",nameStdString[i - 2]);
		}
	}
}

