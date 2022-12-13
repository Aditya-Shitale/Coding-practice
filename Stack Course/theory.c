#include <stdio.h>

int main()
{
    char ch[120];
    
    int mark1, mark2, mark3, mark4, total, count;
    printf("Total no. of students \n");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Enter name of student \n");
        scanf("%[^\n]s", &ch);
        printf("Enter marks of subject 1 \n");
        scanf("%d", &mark1);
        printf("Enter marks of subject 2 \n");
        scanf("%d", &mark2);
        printf("Enter marks of subject 3 \n");
        scanf("%d", &mark3);
        printf("Enter marks of subject 4 \n");
        scanf("%d", &mark4);

        printf("total marks %d\n", total = (mark1 + mark2 + mark3 + mark4));
    }
    


    return 0;
}