#include <stdio.h>

void difficultyLevels();

enum difficultyLevel { leastDiff, moreDiff, mostDiff};

int main (void)
{
	int level;
	
    difficultyLevels(); //print options
	scanf("%d",&level);  
	
	if (level == leastDiff)
    {
        printf("you chose easy\n");
    }
    else if (level == moreDiff)
    {
        printf("you chose medium\n");
    }
    else if (level == mostDiff)
    {
        printf("you chose hard\n");
    }
    else 
    {
        printf("Invalid input\n");
    }
	return 0;
}

void difficultyLevels()
{
	printf("Hi, pick your difficulty level: \n");
	printf("Easy - 0\n");
	printf("Medium - 1\n");
	printf("Hard - 2\n");
	
}
