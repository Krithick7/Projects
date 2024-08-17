#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    int id[5];
    char name1[50];
    char name2[50];
    char name3[50];
    char name4[50];
    char name5[50];
    char course1[50];
    char course2[50];
    char course3[50];
    char course4[50];
    char course5[50];
    int fees[5];
    int paid[5];
}std;

int main()
{
    int i,j,k,n,p,P,q,Q,r,s,t,m;
    printf("\t\t ----WELCOME TO STUDENT RECORD MANAGEMENT SYSTEM---- \n\n");
    do{
    printf("-----ID NUMBER-----\n");
    std.id[0]=12301;
    std.id[1]=12302;
    std.id[2]=12303;
    std.id[3]=12304;
    std.id[4]=12305;
    //Name
    strcpy(std.name1,"Me");
    strcpy(std.name2,"you");
    strcpy(std.name3,"Him");
    strcpy(std.name4,"her");
    strcpy(std.name5,"He \n");
    //Course
    strcpy(std.course1,"C");
    strcpy(std.course2,"C++");
    strcpy(std.course3,"Java");
    strcpy(std.course4,"Python");
    strcpy(std.course5,"FullStack\n");
    std.fees[0]=7000;
    std.fees[1]=7000;
    std.fees[2]=10000;
    std.fees[3]=10000;
    std.fees[4]=15000;
    
    //FOR ID NUMBER 
    for (i=0; i<5; i++)
    {
        printf("%d\n",std.id[i]);
    }
    printf("-------NAME-------");
    printf("\n%s\n",std.name1);
    printf("%s\n",std.name2);
    printf("%s\n",std.name3);
    printf("%s\n",std.name4);
    printf("%s",std.name5);

    printf("-------COURSE-------");
    printf("\n%s\n",std.course1);
    printf("%s\n",std.course2);
    printf("%s\n",std.course3);
    printf("%s\n",std.course4);
    printf("%s\n",std.course5);

    printf("-------FEE DETAILS-------");
    printf("\nFees for C is : %d",std.fees[0]);
    printf("\nFees for C++ is : %d",std.fees[1]);
    printf("\nFees for Java is : %d",std.fees[2]);
    printf("\nFees for Python is : %d",std.fees[3]);
    printf("\nFees for FullStack developing is : %d",std.fees[4]);
    printf("\n-------------------------------------------------");
    printf("\nTo Know the Fee Details for C Enter 1. \n");
    printf("To Know the Fee Details for C++ Enter 2. \n");
    printf("To Know the Fee Details for Java Enter 3. \n");
    printf("To Know the Fee Details for Python Enter 4. \n");
    printf("To Know the Fee Details for FullStack Enter 5. \n");
    printf("To Exit Enter 6. \n");
    printf("--------------------------------------------------\n");
    printf("Enter Your Choice : ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("\n Enter the fees you have paid in C : ");
        scanf("%d",&P);
        if (P==std.fees[0])
        {
            printf("You Have Already Paid the Full Fees..!");
        }
        else
        {
            printf("Remaining Fees to be paid is %d",std.fees[0]-P);
            printf("\nKindly pay it as soon as possible..!");
        }
        break;
    case 2:
        printf("Enter the Fees you have paid in C++ : ");
        scanf("%d",&Q);
        if (Q==std.fees[1])
        {
            printf("You have already paid the full fees..!");
        }
        else
        {
            printf("Remaining Fees to be paid is %d",std.fees[1]-Q);
            printf("\nKindly pay it as soon as possible..!");
        }
        break;
    case 3:
         printf("Enter the Fees you have paid in Java : ");
        scanf("%d",&r);
        if (r==std.fees[2])
        {
            printf("You have already paid the full fees..!");
        }
        else
        {
            printf("Remaining Fees to be paid is %d",std.fees[2]-r);
            printf("\nKindly pay it as soon as possible..!");
        }
        break;
    case 4:
         printf("Enter the Fees you have paid in Python : ");
        scanf("%d",&s);
        if (s==std.fees[3])
        {
            printf("You have already paid the full fees..!");
        }
        else
        {
            printf("Remaining Fees to be paid is %d",std.fees[3]-s);
            printf("\nKindly pay it as soon as possible..!");
        }
        break;
    case 5:
     printf("Enter the Fees you have paid in FullStack : ");
        scanf("%d",&t);
        if (t==std.fees[4])
        {
            printf("You have already paid the full fees..!");
        }
        else
        {
            printf("Remaining Fees to be paid is %d",std.fees[4]-t);
            printf("\nKindly pay it as soon as possible..!");
        }
        break;  
    default:
        printf("Enter a valid Choice...!");
        break;
    }
printf("\n\n\t\t-------THANK YOU-------");
    if(n==6)
    {exit(0);}
}while(n);
}
