#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Student{
    char ID[100];
    double midTerm, finalTerm;
    char name[100];
};

typedef struct Student Student;

Student input(){
    Student x;
    printf("Enter the name of student: ");
    gets(x.name);
    printf("Enter ID of student: ");
    scanf("%s", x.ID);
    printf("Enter midterm and finalterm score: ");
    scanf("%lf %lf", &x.midTerm, &x.finalTerm);
    return x;
}

void print_out(Student x){
    printf("Name: %s\n", x.name);
    printf("ID: %s\n", x.ID);
    printf("Midterm score: %.2lf\n", x.midTerm);
    printf("Final score: %.2lf\n", x.finalTerm);
}

int main(){
    Student listOfStudents[11];
    for(int i = 1; i <= 3; i++){
        printf("Enter information of student %d: \n", i);
        listOfStudents[i] = input();
        getchar();
        printf("\n");
    }
    for(int i = 1; i <= 3; i++){
        print_out(listOfStudents[i]);
    }
}