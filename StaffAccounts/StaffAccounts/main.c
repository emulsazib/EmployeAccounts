//
//  main.c
//  EmplyeAccounts
//
//  Created by Sajib mac mini on 29/12/22.
//

#include <stdio.h>
#include <stdlib.h>
struct Employe{
        int employenumber;
        char name[20];
        int attendence;
        double overTime;
        double salary;
        double totalSalary;
        double attendenceSalary;
        double overTimeSalary;
        double takenAmount;
        double due;
        double extra;
    };
int main(int argc, const char * argv[]) {
    struct Employe employe[2];
        int select,menuNum,secondmenuNam,givenPin;
        int count=1;
        int pin=1234;
        //Login System
        while(pin!=givenPin){
            printf("\nEnter Your PIN: ");
            scanf("%d",&givenPin);
            if(pin!=givenPin){
                printf("\nInvalid PIN please Try again...");
            }else{
                printf("Successfully login...\n");
            }
        }
        //Manu
       while(count!=0){
        printf("\n1. Add employe");
        printf("\n2. Display employe");
        printf("\n3. Account's employe");
        printf("\n4. Employe info");
        printf("\n5. Exit");
        //Choice the menu
        printf("\nEnter the menu number: ");
        scanf("%d",&menuNum);
        switch(menuNum){
    case 1:
        for (int i =0;i<2;i++){
                printf("\nEnter the Number of employe: ");
                scanf("%d",&employe[i].employenumber);
                    if(employe[i].employenumber!=0){
                printf("\nEnter the Name of employe: ");
                scanf("%s",&employe[i].name);
                printf("\nEnter the Salary of employe: ");
                scanf("%lf",&employe[i].salary);
                printf("\nEnter the Attendence of employe: ");
                scanf("%d",&employe[i].attendence);
                printf("\nEnter the Over time of employe: ");
                scanf("%lf",&employe[i].overTime);
                printf("\nEnter the Taken Amount of employe: ");
                scanf("%lf",&employe[i].takenAmount);
                printf("\n============================\n");

                    }else{
                        break;
                    }
        }
        for(int i=0;i<2;i++){
            printf("%d",employe[i].employenumber);
            printf(" %s\n",employe[i].name);
            printf("\n============================\n");
        }
        break;
    case 2:
        printf("\n============================\n");
        for(int i=0;i<2;i++){
            printf("%d",employe[i].employenumber);
            printf(" %s\n",employe[i].name);
        }
        printf("\n============================\n");
        break;
    case 3:
        printf("\n============================\n");
        for(int i=0;i<2;i++){
            printf("%d",employe[i].employenumber);
            printf(" %s\n",employe[i].name);
        }
        printf("\n============================\n");
        printf("\nSelect the Employe: ");
        scanf("%d",&select);
        //employe[select];
        //Acounts menu...
        printf("\n1. Attendence Salary");
        printf("\n2. Over Time Salary");
        printf("\n3. Total Salary");
        printf("\n4. Dew Salary");
        printf("\n5. Extra Salary");
        printf("\nEnter the Menu number: ");
        scanf("%d",&secondmenuNam);
        switch(secondmenuNam){
    case 1:
        printf("\n============================\n");
        employe[select-1].attendenceSalary=(employe[select-1].salary/30)*employe[select-1].attendence;
        printf("%s Attendence Salary: %.2lf",employe[select-1].name,employe[select-1].attendenceSalary);
        printf("\n============================\n");
        break;
    case 2:
        printf("\n============================\n");
        employe[select-1].overTimeSalary=((employe[select-1].salary/30)/8)*employe[select-1].overTime;
        printf("%s Over Time Salary: %.2lf",employe[select-1].name,employe[select-1].overTimeSalary);
        printf("\n============================\n");
        break;
    case 3:
        printf("\n============================\n");
        employe[select-1].totalSalary=employe[select-1].attendenceSalary+employe[select-1].overTimeSalary;
        printf("%s Total Salary: %.2lf",employe[select-1].name,employe[select-1].totalSalary);
        printf("\n============================\n");
        break;
    case 4:
        printf("\n============================\n");
        if(employe[select-1].totalSalary>employe[select-1].takenAmount)
        employe[select-1].due=employe[select-1].totalSalary-employe[select-1].takenAmount;
        printf("%s Due Salary: %.2lf",employe[select-1].name,employe[select-1].due);
        printf("\n============================\n");
        break;
    case 5:
        printf("\n============================\n");
        if(employe[select-1].totalSalary<employe[select-1].takenAmount)
        employe[select-1].extra=employe[select-1].takenAmount-employe[select-1].totalSalary;
        printf("%s Due Salary: %.2lf",employe[select-1].name,employe[select-1].extra);
        printf("\n============================\n");
        break;
        }
    case 4:
        //write code for show the info,,,
        break;
    case 5:
        exit(0);
    default:
        printf("If You want to go another Option then press [YES]1, [NO]0\n");
        scanf("%d",&count);

        }
       }
    return 0;
}
