#include <stdio.h>
#include "clg.h"
#include <string.h>
#include <windows.h>
#include <stdlib.h>

void Registration(char student_name[][NAME_LENGTH],char father_name[][FATHER_NAME],
        char surname[][SURNAME],char student_adress[][ADRESS],
        char student_email[][EMAIL],char student_mno[][MOBILE],
        char student_abc[][ABC_ID],char student_adh[][AADHHAR],int temp_roll[MAX_STUDENTS],int *count,int branch[]) {

    int choice;
    int index = *count;

    printf("\n\nOpening Registration Page...\nPlease Wait..\n");

    Sleep(2000);

    printf("\n==============================\n");
    printf("\tSelect Branch");
    printf("\n==============================\n");
    printf("\t1. Computer Science And Engieering\n\t2. Mechanical Engieering\n\t3. Electrical Engineering\n\t4. Civil Engieering\n\t5. Chemical Engieering\n");
    printf("\n==============================\n");

    Sleep(1000);

    do {

        printf("\nSelect Branch (Via Branch Code) :- ");
        scanf("%d",&choice);
        getchar();

        if(choice < 1 || choice > 5) {
            printf("\nInvalid Choice\n");
        }

    }while(choice < 1 || choice > 5);

    branch[index] = choice;

    // student's name 

    while(1) {

        printf("\nEnter Student Name :- ");
        scanf("%s",student_name[index]);

        if(strlen(student_name[index]) < NAME_LENGTH) {
            break;
        }

        else if(strlen(student_name[index]) == 0) {
            printf("\nPlease Enter Name First\n\n");
            continue;
        }
        break;

    }

    // student's father's name

    while(1) {
        printf("Enter Father's Name :- ");
        scanf("%s",father_name[index]);

        if(strlen(father_name[index]) < FATHER_NAME) {
            break;
        }

        else if(strlen(father_name[index]) == 0) {
            printf("\nPlease Enter Father's Name\n\n");
            continue;
        }
        break;
    }

    // student's surname

    while(1) {
        printf("Enter Student's Surname :- ");
        scanf("%s",surname[index]);

        if(strlen(surname[index]) < SURNAME) {
            break;
        }

        else if(strlen(surname[index]) == 0) {
            printf("Please Enter Student's Surname\n");
            continue;
        }

        break;
    }

    //Student's Address

    while(1) {
        printf("Enter Student's Adress :- ");
        scanf("%s",student_adress[index]);

        if(strlen(student_adress[index]) < NAME_LENGTH) {
            break;
        }

        else if(strlen(student_adress[index]) == 0) {
            printf("\nPlease Enter Adress First\n\n");
            continue;
        }
        break;
    }

    // students's Email

    while(1) {
        printf("Enter Student's Email :- ");
        scanf("%s",student_email[index]);

        if(strlen(student_email[index]) < EMAIL) {
            break;
        }

        else if(strlen(student_email[index]) == 0) {
            printf("Email Cannot Be Blank\nPlease Enter Email First\n\n");
            continue;
        }
        break;
    }

    // Student's Mobile Number

    while(1) {

        printf("Enter Student's Mobile No :- ");
        scanf("%10s",student_mno[index]);

        if(strlen(student_mno[index]) == 0) {
            printf("\nPlease Enter Mobile Number\n");
            continue;
        }

        else if(strlen(student_mno[index]) != 10) {
            printf("\nMobile Number Contain 10 Digits\nPlease Enter Mobile Number Again\n\n");
            continue;
        }

        int valid = 0;

        for(int i = 0 ; student_mno[index][i] != '\0' ; i++) {
            if(student_mno[index][i] >= '0' && student_mno[index][i] <= '9') {
                valid++;  
            }
        }

        if(valid == (MOBILE-1)) {
            break;
        }
        else {
            printf("\nMobile Should Be In Digits\nPlease Enter Mobile Number Again\n");
            continue;
        }
        break;
    }

    //Student's ABC ID

    while(1) {

        printf("Enter Student's ABC ID :- ");
        scanf("%12s",student_abc[index]);

        if(strlen(student_abc[index]) == 0) {
            printf("\nPlease Enter ABC ID\n\n");
            continue;
        }

        else if(strlen(student_abc[index]) != 12) {
            printf("\nABC ID Contain 12 Digits\nPlease Enter ABC ID Again\n\n");
            continue;
        }

        int mark = 0;

        for(int i = 0 ; student_abc[index][i] != '\0' ; i++) {
            if(student_abc[index][i] >= '0' && student_abc[index][i] <= '9') {
                mark++;
            }
        }

        if(mark == (ABC_ID-1))  {
           break;
        }
        else {
            printf("\nABC ID Should Be In Digits\nPlease Enter ABC ID Again\n\n");
            continue;
        }

        break;
    }

    //Student's ADDHAAR Number

    while(1) {

        printf("Enter Student's Addhar Number :- ");
        scanf("%12s",student_adh[index]);

        if(strlen(student_adh[index]) == 0) {
            printf("\nPlease Enter Adhhar Number\n\n");
            continue;
        }

        else if(strlen(student_adh[index]) != 12) {
            printf("\nAdhhar Number Contain 12 Digits\nPlease Enter Aadhhar Number Again\n\n");
            continue;
        }

        int mark = 0;

        for(int i = 0 ; student_adh[index][i] != '\0'; i++) {
            if(student_adh[index][i] >= '0' && student_adh[index][i] <= '9') {
                mark++;
            }
        }

        if(mark == (AADHHAR-1)) {
          break;
        }
        else {
           printf("\nAdhhar Number Should Be In Digits\nPlease Enter Adhhar Number Again\n\n");
           continue;
        }

        break;
    }

    while(1) {
        printf("\nEnter Student Roll No. :- ");
        scanf("%d",&temp_roll[index]);

        if(temp_roll[index] >= 100 && temp_roll[index] < 1000) {
            break;
        }

        else if(temp_roll[index] >= 1000 || temp_roll[index] < 100) {
            printf("\nTemporary Roll Number Must Be Contain 3 Digits\n");
            continue;
        }
        break; 
    }

    (*count)++;

    Sleep(1000);

    printf("\nVerifying Student's Detailes...");

    Sleep(2000);

    printf("\n\nStudent Registered Successfully\n");
    
}

void ViewAllStudents(char student_name[][NAME_LENGTH],char father_name[][FATHER_NAME],
        char surname[][SURNAME],int *count,
        int branch[],char student_mno[][MOBILE]) {

            
    if(*count == 0) {
        printf("\nPlease Do Registration First\n(Hint:- Select '1' For Student Registration)\n\n");
        return;
    }

    printf("\nLoading All Students Details...\nPlease Wait..\n\n");

    Sleep(2000);

    printf("\n\n===================================================================================\n");
    printf("\t\tStudents Of M.S. University\n");
    printf("===================================================================================\n\n");


    printf("\n---------------------------------------------------------------------------------\n");
    printf("%-30s %-35s %-20s","Name","Branch","Mobile No");
    printf("\n---------------------------------------------------------------------------------\n");

    for(int i = 0 ; i < (*count) ; i++) {

        char full_name[100];

        sprintf(full_name,"%s %s %s",student_name[i],father_name[i],surname[i]);

        printf(" %-30s",full_name);

        if(branch[i] == 1) {
            printf(" %-35s","Computer Science And Engineering");
        }
        else if(branch[i] == 2) {
            printf(" %-35s","Mechanical Engineering");
        }
        else if(branch[i] == 3) {
            printf(" %-35s","Electrical Engineering");
        }
        else if(branch[i] == 4) {
            printf(" %-35s","Civil Engineering");
        }
        else if(branch[i] == 5) {
            printf(" %-35s","Chemical Engineering");
        }

        printf(" %-20s\n",student_mno[i]);

    }

    
}

int FindStudentIndex(int *count, int temp_roll[MAX_STUDENTS],int roll) {
    
    while(1) {

        printf("\nEnter Student Roll No. :- ");
        scanf("%d",&roll);

        printf("\nFinding Student Roll Number..\nPlease Wait..\n\n");

        Sleep(2000);

        if(roll >= 1000 || roll < 100) {
            printf("\nTemporary Roll Number Must Be Contain 3 Digits\n");
            continue;
        }

        int debug = 0;
        int i ;
        for(i = 0 ; i < *count ; i++) {
            if(temp_roll[i] == roll) {
                printf("\n\nRoll No %d Access Successfully\n(Index = %d)\n\n",roll,i);
                return i;
            }

        }
        printf("\nRoll Number Not Found\n\n"); 
        
    }
    
    
    
}

void UpdateStudentDetails(char student_name[][NAME_LENGTH],char father_name[][FATHER_NAME],
        char surname[][SURNAME],char student_adress[][ADRESS],
        char student_email[][EMAIL],char student_mno[][MOBILE],char student_abc[][ABC_ID],
        char student_adh[][AADHHAR],int temp_roll[MAX_STUDENTS],int roll,int *count,int branch[]) {

    if(*count == 0) {
        printf("\nPlease Do Registration First\n(Hint:- Select '1' For Student Registration)\n\n");
        return;
    }

    printf("\n\nOpening Edit Details Page..\nPlease Wait..\n\n");

    Sleep(2000);

    printf("\n======================================\n");
    printf("\tRegistered Roll Numbers\n");
    printf("======================================\n");

    for(int i = 0 ; i < *count ; i++) {
        printf("(%d.) %d\n",i+1,temp_roll[i]);
    }

    printf("======================================\n");

    int select;

    int index = FindStudentIndex(count,temp_roll,roll);

    printf("\n=================================================\n");
    printf("\tSelect Detail");
    printf("\n=================================================\n");

    printf("1. Surname\n");
    printf("2. Student's Name\n");
    printf("3. Father's Name\n");
    printf("4. Adress\n");
    printf("5. Email\n");
    printf("6. Mobile Number\n");
    printf("7. ABC ID\n");
    printf("8. Addhaar Number\n");
    printf("0. Exit");

    printf("\n=================================================\n");


    do {
        printf("\nSelect Detail :- ");
        scanf("%d",&select);  
        
        switch(select) {
            case 1:

                while(1) {

                    printf("\nUpdate/Correct Student's Surname :- ");
                    scanf("%s",surname[index]);

                    if(strlen(surname[index]) < SURNAME) {
                        break;
                    }

                    else if(strlen(surname[index]) == 0) {
                        printf("Please Enter Student's Surname\n");
                        continue;
                    }
                    break;  
                }

            break;

            case 2 :

                while(1) {

                    printf("\nUpdate/Correct Student Name :- ");
                    scanf("%s",student_name[index]);

                    if(strlen(student_name[index]) < NAME_LENGTH) {
                        break;
                    }

                    else if(strlen(student_name[index]) == 0) {
                        printf("\nPlease Enter Name First\n\n");
                    continue;
                    }
                    break;

                }
            break;

            case 3:
                
                while(1) {
                    printf("\nUpdate/Correct Father's Name :- ");
                    scanf("%s",father_name[index]);

                    if(strlen(father_name[index]) < FATHER_NAME) {
                        break;
                    }

                    else if(strlen(father_name[index]) == 0) {
                        printf("\nPlease Enter Father's Name\n\n");
                    continue;
                    }
                    break;
                }  
            break;

            case 4:
                
                while(1) {
                    printf("\nUpdate/Correct Student's Adress :- ");
                    scanf("%s",student_adress[index]);

                    if(strlen(student_adress[index]) < NAME_LENGTH) {
                        break;
                    }

                    else if(strlen(student_adress[index]) == 0) {
                        printf("\nPlease Enter Adress First\n\n");
                        continue;
                    }
                    break;
                }
            break;

                case 5:

                    while(1) {
                        printf("\nUpdate/Correct Student's Email :- ");
                        scanf("%s",student_email[index]);

                        if(strlen(student_email[index]) < EMAIL) {
                            break;
                        }

                        else if(strlen(student_email[index]) == 0) {
                            printf("Email Cannot Be Blank\nPlease Enter Email First\n\n");
                            continue;
                        }
                        break;
                    }
                break;

                case 6:

                    while(1) {

                        printf("\nUpdate/Correct Student's Mobile No :- ");
                        scanf("%10s",student_mno[index]);

                        if(strlen(student_mno[index]) == 0) {
                            printf("\nPlease Enter Mobile Number\n");
                            continue;
                        }

                        else if(strlen(student_mno[index]) != 10) {
                            printf("\nMobile Number Contain 10 Digits\nPlease Enter Mobile Number Again\n\n");
                            continue;
                        }

                        int valid = 0;

                        for(int i = 0 ; student_mno[index][i] != '\0' ; i++) {
                            if(student_mno[index][i] >= '0' && student_mno[index][i] <= '9') {
                                valid++;  
                            }
                        }

                        if(valid == (MOBILE-1)) {
                            break;
                        }
                        else {
                            printf("\nMobile Should Be In Digits\nPlease Enter Mobile Number Again\n");
                            continue;
                        }
                        break;
                    }
                break;

                case 7:

                    while(1) {

                        printf("\nUpdate/Correct Student's ABC ID :- ");
                        scanf("%12s",student_abc[index]);

                        if(strlen(student_abc[index]) == 0) {
                            printf("\nPlease Enter ABC ID\n\n");
                            continue;
                        }

                        else if(strlen(student_abc[index]) != 12) {
                            printf("\nABC ID Contain 12 Digits\nPlease Enter ABC ID Again\n\n");
                            continue;
                        }

                        int mark = 0;

                        for(int i = 0 ; student_abc[index][i] != '\0' ; i++) {
                            if(student_abc[index][i] >= '0' && student_abc[index][i] <= '9') {
                                mark++;
                            }
                        }

                        if(mark == (ABC_ID-1))  {
                            break;
                        }
                        else {
                            printf("\nABC ID Should Be In Digits\nPlease Enter ABC ID Again\n\n");
                            continue;
                        }

                        break;
                    }
                break;

                case 8:

                    while(1) {

                        printf("Update/Correct Student's Addhar Number :- ");
                            scanf("%12s",student_adh[index]);

                        if(strlen(student_adh[index]) == 0) {
                            printf("\nPlease Enter Adhhar Number\n\n");
                            continue;
                        }

                        else if(strlen(student_adh[index]) != 12) {
                            printf("\nAdhhar Number Contain 12 Digits\nPlease Enter Aadhhar Number Again\n\n");
                            continue;
                        }

                        int mark = 0;

                        for(int i = 0 ; student_adh[index][i] != '\0'; i++) {
                            if(student_adh[index][i] >= '0' && student_adh[index][i] <= '9') {
                                mark++;
                            }
                        }

                        if(mark == (AADHHAR-1)) {
                            break;
                        }
                        else {
                            printf("\nAdhhar Number Should Be In Digits\nPlease Enter Adhhar Number Again\n\n");
                            continue;
                        }

                        break;
                    }
                break;
                
                char x;
                case 0 :
                    printf("\nAre You Sure Want To Exit Edit Page ?(y/n)");
                    scanf(" %c",&x);

                    if(x == 'Y' || x == 'y') {
                        printf("\nExiting Edit Page..\n");
                        Sleep(2000);
                        select = -1;
                    }
                    else {
                        printf("\nReturning Edit Page..\n");
                        
                    }
                    break;
            default : printf("\nINVALID INPUT\n");
                    
        }

    }while(select != -1);

}

void ViewStudentDetails(char student_name[][NAME_LENGTH],char father_name[][FATHER_NAME],
        char surname[][SURNAME],char student_adress[][ADRESS],
        char student_email[][EMAIL],char student_mno[][MOBILE],char student_abc[][ABC_ID],
        char student_adh[][AADHHAR],int roll,int temp_roll[MAX_STUDENTS],
        int *count,int branch[]) {

    if(*count == 0) {
        printf("\nPlease Do Registration First\n(Hint:- Select '1' For Student Registration)\n\n");
        return;
    }

    printf("\n\nOpening View Student Page..\nPlease Wait..\n\n");

    Sleep(2000);

    printf("\n======================================\n");
    printf("\tRegistered Roll Numbers\n");
    printf("======================================\n");

    for(int i = 0 ; i < *count ; i++) {
        printf("(%d.) %d\n",i+1,temp_roll[i]);
    }

    printf("======================================\n");

    char x;

    do {
        int index = FindStudentIndex(count,temp_roll,roll);

        Sleep(1000);

        printf("Veryfying Student's Details...\n\n\n");

        Sleep(2000);

        printf("\n==========================================================================================\n");
        char full_name[100];
        sprintf(full_name,"%s %s %s",student_name[index],father_name[index],surname[index]);

        printf("-> Name :- %s\t\t-> Mobile No:- %s\n\n",full_name,student_mno[index]);
        printf("-> Address :- %s\n\n",student_adress[index]);
        printf("-> Email :- %s\n\n",student_email[index]);
        printf("-> ABC ID :- %s\t\t-> Addhaar No. :- %s\n\n",student_abc[index],student_adh[index]);

        switch(branch[index]) {

            case 1:
                printf("-> Branch :- Computer Science And Engineering\n\n");
                break;
            case 2:
                printf("-> Branch :- Mechnaical Engineering\n\n");
                break;
            case 3:
                printf("-> Branch :- Electrical Engineering\n\n");
                break;
            case 4:
                printf("-> Branch :- Civil Engineering\n\n");
                break;
            case 5:
                printf("-> Branch :- Chemical Engineering\n\n");
                break;
        }
        printf("\n==========================================================================================\n");

        Sleep(2000);

        printf("Do You Want To Examine Another Student's Details ?(y/n)");
        scanf(" %c",&x);


    } while(x != 'n' && x != 'N');
    
}

void PRN(char student_name[][NAME_LENGTH],char father_name[][FATHER_NAME],
        char surname[][SURNAME],char student_mno[][MOBILE],long long int PRN[MAX_STUDENTS],int *count,
        int roll,int temp_roll[MAX_STUDENTS]) {
    
    if(*count == 0) {
        printf("\nPlease Do Registration First\n(Hint:- Select '1' For Student Registration)\n\n");
        return;
    }

    printf("\n\nOpening PRN Number Generator Page..\nPlease Wait..\n\n");

    Sleep(2000);

    printf("\n======================================\n");
    printf("\tRegistered Roll Numbers\n");
    printf("======================================\n");

    for(int i = 0 ; i < *count ; i++) {
        printf("(%d.) %d\n",i+1,temp_roll[i]);
    }

    printf("======================================\n");

    char y;

    do {

        int index = FindStudentIndex(count,temp_roll,roll);
        
        printf("\nVeryfying Student's Details..\n");

        Sleep(1000);

        char full_name[100];
        sprintf(full_name,"%s %s %s",student_name[index],father_name[index],surname[index]);

        printf("\nStudent's Name :- %s\n\n",full_name);

        PRN[index] = rand() % 9 + 1;

        for(int i = 0 ; i < 10 ; i++) {
            PRN[index] = (PRN[index] * 10) + (rand() % 10);
        }

        Sleep(1000);

        printf("\nGenerating PRN Number..\nPlease Wait..\n");

        Sleep(3000);

        printf("\n======================================\n");
        printf("\nPRN Number :- %lld\n\n",PRN[index]);
        printf("\n======================================\n");

        printf("Do You Want To Generate PRN Number For Another Student ?(y/n)");
        scanf(" %c",&y);

    } while(y != 'n' && y != 'N');
}

