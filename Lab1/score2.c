#include <stdio.h>

void calculator(int total[],float avg[],char grade[],int score[][3],int i){
    for(int j=0; j<3; j++)
        total[i] += score[i][j];
    avg[i] = total[i]/3.0;
    if(avg[i] >=90) grade[i] = 'A';
    else if(avg[i] >= 80) grade[i] = 'B';
    else if(avg[i] >= 70) grade[i] = 'C';
    else if(avg[i] >= 60) grade[i] = 'D';
    else grade[i] = 'F';
    
}


int main(void){
    int score[5][3]={0};
    int total=0;
    float avg;
    char grade;
    
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &score[i][j]);
        }
         printf("%d번 : %d %d %d\n",i+1, score[i][0], score[i][1], score[i][2]);
    }
    printf("\n");

    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++)
            total += score[i][j];
        avg = total/3.0;
        if(avg >=90) grade = 'A';
        else if(avg >= 80) grade = 'B';
        else if(avg >= 70) grade = 'C';
        else if(avg >= 60) grade = 'D';
        else grade = 'F';
        printf("%d번 총점은 %d, 평균은 %.1f(등급 %c)\n",i+1,total,avg,grade);
        total=0;
    }

    return 0;
}
