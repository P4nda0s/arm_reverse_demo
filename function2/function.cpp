#include <stdio.h>
#include <string.h>
struct  stStudents
{
    char name[16];
    int age;
};

// 结构体作为返回值
stStudents create_student(const char * name,int age){
    stStudents s;
    strncpy(s.name,name,16);
    s.age = age;
    return s;
}

// 结构体作为参数
void print_student(stStudents s){
	printf("%s  age:%d\n",s.name,s.age);
}

// 结构体指针作为参数
void print_student1(stStudents * s){
	printf("%s  age:%d\n",s->name,s->age);
}


int main()
{
	stStudents s = {0};
	create_student("Bob",25);
	print_student(s);
	print_student1(&s);
    return 0;
}