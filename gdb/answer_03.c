#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int	    i = 0, num = 0;
    double  j = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++){
	j = i/3 + i;
	printf("j = %lf \n", j);
    }

    char* str = (char*)malloc(10*sizeof(char)); 

    strcpy(str, "Success!");
    printf("%s\n", str);

    return 0;
}

