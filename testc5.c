#include <stdio.h>

struct Student{
    char name[100];
    char ID[100];
    int gpa;
};

typedef struct Student Student;

Student enter(){
    Student x;
    printf("Enter your name: ");
    gets(x.name);
    printf("Enter ID: ");
    scanf("%s", x.ID);
    printf("Enter your gpa: ");
    scanf("%d", &x.gpa);
    return x;
}

void output(Student x){
    printf("Name: %s\n", x.name);
    printf("ID: %s\n", x.ID);
    printf("GPA: %d\n", x.gpa);
}

int main(){
    int n; scanf("%d", &n);
    getchar();
    Student listOfStudents[n];
    for(int i = 0; i < n; i++){
        printf("The information of student %d:\n", i + 1);
        listOfStudents[i] = enter();
        getchar();
        printf("\n");
    }
    for(int i = 0; i < n; i++){
        output(listOfStudents[i]);
    }
}