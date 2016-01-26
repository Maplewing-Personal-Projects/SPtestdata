#ifndef _STUDENT_
#define _STUDENT_

typedef struct{
	int id;
	int english;
	int chinese;
	int math;
} Student;

int maxScore(int n, Student *students);

#endif
