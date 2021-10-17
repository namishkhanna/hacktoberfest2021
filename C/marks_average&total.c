#include <stdio.h>
int total(a,b,c,d,e);
float average(tot);

int main()
{
    int i,j,k;
    int subject1[10], subject2[10], subject3[10], subject4[10], subject5[10];

    for(i=0;i<3;i++)
    {
        printf("............Enter Marks of Student %d............\n",i+1);

        printf("Structured Programming Techniques: ");
        scanf("%d",&subject1[i]);
        printf("Fundamentals of Information Systems: ");
        scanf("%d",&subject2[i]);
        printf("Fundamentals of Mathematics: ");
        scanf("%d",&subject3[i]);
        printf("Statistics and Probability Theory: ");
        scanf("%d",&subject4[i]);
        printf("General English: ");
        scanf("%d",&subject5[i]);
        }

    for(k=0;k<3;k++)
    {

        printf("............Total & Average Marks of Student %d............\n",k);
        int tot=total(subject1[k], subject2[k], subject3[k], subject4[k], subject5[k]);
        printf("Total marks of the Subjects: %d\n", tot);
        average(tot);
    }

    return 0;
}

int total(a,b,c,d,e)
{
    int tot=a+b+c+d+e;
    return tot;
}

float average(tot)
{
    float avg=tot/5;
    printf("Average marks of the Subjects: %f\n", avg);
}
