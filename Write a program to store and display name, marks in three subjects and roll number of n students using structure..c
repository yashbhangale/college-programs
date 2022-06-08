#include <stdio.h>

struct student
{
    char name[20];
    int roll_no;
    int physics, chem, maths;
};

void main()
{
    struct student st[100];
    int n, i, j;
    printf("Enter the number of students:");
    scanf("%d", &n);
    for (i = 0; i <= n - 1; i++)
    {
        printf("Enter the student's name, roll number and marks in three subjects:");
        scanf("%s %d %d %d %d", st[i].name, &st[i].roll_no, &st[i].physics, &st[i].chem,
              &st[i].maths);
    }
    printf("Name\tRoll No\tPhysics\tChem\tMaths\n");
    printf("----------------------------------------------\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\n", st[i].name, st[i].roll_no, st[i].physics, st[i].chem, st[i].maths);
    }
}

