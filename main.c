#include <stdio.h>
#include "clg.h"
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {

    char student_name[MAX_STUDENTS][NAME_LENGTH];
    char father_name[MAX_STUDENTS][FATHER_NAME];
    char surname[MAX_STUDENTS][SURNAME];
    char student_adress[MAX_STUDENTS][ADRESS];
    char student_email[MAX_STUDENTS][EMAIL];
    char student_mno[MAX_STUDENTS][MOBILE];
    char student_abc[MAX_STUDENTS][ABC_ID];
    char student_adh[MAX_STUDENTS][AADHHAR];
    int branch[MAX_STUDENTS];
    int temp_roll[MAX_STUDENTS];
    long long int prn[MAX_STUDENTS];

    int count = 0;

    srand(time(NULL));
    int choice;
    char choose;
    int roll;

    printf("\n\tMaharaja Sayajirao University , Baroda\n\n");

    printf("=================================================\n");
    printf("\t\tMain Menu\n");
    printf("=================================================\n");

    printf("\n\t1. Student Registration\n");
    printf("\t2. View All Students\n");
    printf("\t3. Find Student Index\n");
    printf("\t4. Update Students Deatiles\n");
    printf("\t5. View Student's Details\n");
    printf("\t6. Generate PRN Number For Student\n\n");

    Sleep(2000);
    printf("Impotant :- \nDon't Use Space For Seprating Words\nUse '_' Instead Of Space\nWe Are Working For This Issue\nPlease Give Your Support\n\n");
    Sleep(2000);
    printf("\nRoll Number Is Temporary.\nIt Is Only To Access Particular Student Details\n\n");

    do {
        printf("\nEnter Choice :- ");
        scanf("%d",&choice);

        

        switch(choice) {
            case 1 :
                    Registration(student_name,father_name,surname,student_adress,student_email,
                        student_mno,student_abc,student_adh,temp_roll,&count,branch);
                        
            break;

            case 2:
                ViewAllStudents(student_name,father_name,surname,&count,branch,student_mno);
            break;

            case 3:
                FindStudentIndex(&count,temp_roll,roll);
                break;

            case 4:
                UpdateStudentDetails(student_name,father_name,surname,student_adress,student_email,
                        student_mno,student_abc,student_adh,temp_roll,roll,&count,branch);
                        break;

            case 5:
                ViewStudentDetails(student_name,father_name,surname,student_adress,
                        student_email,student_mno,student_abc,student_adh,
                        roll,temp_roll,&count,branch);
                        break;

            case 6:
                 PRN(student_name,father_name,surname,student_mno,prn,&count,
                 roll,temp_roll);
                 break;

            case 0:
                printf("\nAre You Sure Want To Exit? (y/n)");
                scanf(" %c",&choose);

                if(choose == 'y' || choose == 'Y') {
                    printf("Exiting...\n\n");
                    Sleep(2000);
                    choice = -1;
                }
                else {
                    printf("\nReturning Menu...\n");
                    Sleep(2000);
                }
                break;
            default : printf("\nInvalid Choice\nTry Again With Instructed Choice..\n\n");
        }

    } while(choice != -1);

    


    

}