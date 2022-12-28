//
//  main.c
//  StaffAccounts
//
//  Created by Sajib mac mini on 29/12/22.
//

#include <stdio.h>
#include <stdlib.h>
struct Staff{
        int staffnumber;
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
    struct Staff staff[2];
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
        printf("\n1. Add Staff");
        printf("\n2. Display Staffs");
        printf("\n3. Account's Staffs");
        printf("\n4. Staffs info");
        printf("\n5. Exit");
        //Choice the menu
        printf("\nEnter the menu number: ");
        scanf("%d",&menuNum);
        switch(menuNum){
    case 1:
        for (int i =0;i<2;i++){
                printf("\nEnter the Number of Staff: ");
                scanf("%d",&staff[i].staffnumber);
                    if(staff[i].staffnumber!=0){
                printf("\nEnter the Name of Staff: ");
                scanf("%s",&staff[i].name);
                printf("\nEnter the Salary of Staff: ");
                scanf("%lf",&staff[i].salary);
                printf("\nEnter the Attendence of Staff: ");
                scanf("%d",&staff[i].attendence);
                printf("\nEnter the Over time of Staff: ");
                scanf("%lf",&staff[i].overTime);
                printf("\nEnter the Taken Amount of Staff: ");
                scanf("%lf",&staff[i].takenAmount);
                printf("\n============================\n");

                    }else{
                        break;
                    }
        }
        for(int i=0;i<2;i++){
            printf("%d",staff[i].staffnumber);
            printf(" %s\n",staff[i].name);
            printf("\n============================\n");
        }
        break;
    case 2:
        printf("\n============================\n");
        for(int i=0;i<2;i++){
            printf("%d",staff[i].staffnumber);
            printf(" %s\n",staff[i].name);
        }
        printf("\n============================\n");
        break;
    case 3:
        printf("\n============================\n");
        for(int i=0;i<2;i++){
            printf("%d",staff[i].staffnumber);
            printf(" %s\n",staff[i].name);
        }
        printf("\n============================\n");
        printf("\nSelect the Staff: ");
        scanf("%d",&select);
        //staff[select];
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
        staff[select-1].attendenceSalary=(staff[select-1].salary/30)*staff[select-1].attendence;
        printf("%s Attendence Salary: %.2lf",staff[select-1].name,staff[select-1].attendenceSalary);
        printf("\n============================\n");
        break;
    case 2:
        printf("\n============================\n");
        staff[select-1].overTimeSalary=((staff[select-1].salary/30)/8)*staff[select-1].overTime;
        printf("%s Over Time Salary: %.2lf",staff[select-1].name,staff[select-1].overTimeSalary);
        printf("\n============================\n");
        break;
    case 3:
        printf("\n============================\n");
        staff[select-1].totalSalary=staff[select-1].attendenceSalary+staff[select-1].overTimeSalary;
        printf("%s Total Salary: %.2lf",staff[select-1].name,staff[select-1].totalSalary);
        printf("\n============================\n");
        break;
    case 4:
        printf("\n============================\n");
        if(staff[select-1].totalSalary>staff[select-1].takenAmount)
        staff[select-1].due=staff[select-1].totalSalary-staff[select-1].takenAmount;
        printf("%s Due Salary: %.2lf",staff[select-1].name,staff[select-1].due);
        printf("\n============================\n");
        break;
    case 5:
        printf("\n============================\n");
        if(staff[select-1].totalSalary<staff[select-1].takenAmount)
        staff[select-1].extra=staff[select-1].takenAmount-staff[select-1].totalSalary;
        printf("%s Due Salary: %.2lf",staff[select-1].name,staff[select-1].extra);
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
