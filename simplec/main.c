//programmer: HYSTON KAYANGE
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  system("COLOR 1A");
    int n;
    int num1,num2;
    int result;

time_t h;
    time(&h);
printf("JCL COMPUSOFT\n");
printf("******************************\n");
printf("%s\n",ctime(&h));


    printf("SIMPLE MATHEMATICAL CALCULATOR\n");
    while(1){
    printf("MENU\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Powering#'s\n");
    printf("6.Modulus\n");
    printf("******************************\n");
    scanf("%d",&n);
    printf("Enter num1\n");
    printf("--------------\n");
    scanf("%d",&num1);
    printf("Enter num2\n");
    printf("--------------\n");
    scanf("%d",&num2);


    switch(n){

    case 1: result=num1+num2;
            printf("Addition=%d\n",result);
            printf("-------------------------\n");
            break;
    case 2: result=num1-num2;
            printf("Subtraction=%d\n",result);
            printf("------------------------\n");
            break;
    case 3: result=num1*num2;
            printf("Multiplication=%d\n",result);
            printf("-------------------------\n");
            break;
    case 4: result=num1/num2;
            printf("Division=%d\n",result);
            printf("-----------------------\n");
            break;
    case 5: result=pow(num1,num2);
            printf("Answer=%d\n",result);
            printf("------------------------\n");
            break;
    case 6: result=num1%num2;
            printf("Answer=%d\n",result);
            printf("-------------------------\n");
            break;
    default:printf("WRONG ENTRY\a");

}
       printf("press any key to return to menu\n");
        getch();

     system("cls");
    }
       system("PAUSE");

return 0;
    }

