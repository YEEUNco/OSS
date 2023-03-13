#include <stdio.h>

typedef struct _student{
    int score[3];
    int total;
    float avg;
    char grade;
}Student;

void calculator(Student* s){
    for(int i=0; i<5; i++){
        s->total = 0;
        for(int j=0; j<3; j++)
            s->total += s->score[j];

        s->avg = s->total/3.0;

        if(s->avg >=90) s->grade = 'A';
        else if(s->avg  >= 80) s->grade = 'B';
        else if(s->avg >= 70) s->grade = 'C';
        else if(s->avg >= 60) s->grade = 'D';
        else s->grade = 'F';

        s++;
    }
    
}


int main(void){
    Student s[5];
    
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &s[i].score[j]);
        }
         printf("%d번 : %d %d %d\n",i+1, s[i].score[0], s[i].score[1], s[i].score[2]);
    }
    printf("\n");
    calculator(s);

    for(int i=0; i<5; i++){
        printf("%d번 총점은 %d, 평균은 %.1f(등급 %c)\n",i+1,s[i].total,s[i].avg,s[i].grade);
    }

    return 0;
}