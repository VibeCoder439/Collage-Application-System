#ifndef CLG_H
#define CLG_H

#define MAX_STUDENTS 100
#define MAX_DAYS 7
#define NAME_LENGTH 15
#define FATHER_NAME 15
#define SURNAME 10
#define BRANCH 5
#define ADRESS 100
#define EMAIL 100
#define MOBILE 11
#define ABC_ID 13
#define AADHHAR 13


void Registration(char student_name[][NAME_LENGTH],char father_name[][FATHER_NAME],
        char surname[][SURNAME],char student_adress[][ADRESS],
        char student_email[][EMAIL],char student_mno[][MOBILE],char student_abc[][ABC_ID],
        char student_adh[][AADHHAR],int roll[MAX_STUDENTS],int *count,int branch[]);

void ViewAllStudents(char student_name[][NAME_LENGTH],char father_name[][FATHER_NAME],
        char surname[][SURNAME],int *count,int branch[],char student_mno[][MOBILE]);

void UpdateStudentDetails(char student_name[][NAME_LENGTH],char father_name[][FATHER_NAME],
        char surname[][SURNAME],char student_adress[][ADRESS],
        char student_email[][EMAIL],char student_mno[][MOBILE],char student_abc[][ABC_ID],
        char student_adh[][AADHHAR],int temp_roll[MAX_STUDENTS],int roll,int *count,int branch[]);

int FindStudentIndex(int *count,int temp_roll[MAX_STUDENTS],int roll);

void ViewStudentDetails(char student_name[][NAME_LENGTH],char father_name[][FATHER_NAME],
        char surname[][SURNAME],char student_adress[][ADRESS],
        char student_email[][EMAIL],char student_mno[][MOBILE],char student_abc[][ABC_ID],
        char student_adh[][AADHHAR],int roll,int temp_roll[MAX_STUDENTS],
        int *count,int branch[]);

void PRN(char student_name[][NAME_LENGTH],char father_name[][FATHER_NAME],
        char surname[][SURNAME],char student_mno[][MOBILE],long long int PRN[MAX_STUDENTS],int *count,
        int roll,int temp_roll[MAX_STUDENTS]);


#endif