a#include <stdio.h>
#include <string.h>

struct student
{
  char Name[100];
  int age;
  int salary;
}stud;

int main(){
    struct student;
    stud.age = 19;
    strcpy(stud.Name, "Aditya");
    stud.salary= 20000;
    
    printf("%s\n%d\n%d",stud.Name,stud.age,stud.salary);
    return 0;
}