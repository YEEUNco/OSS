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
    int total[5]={0};
    float avg[5]={0};
    char grade[5];
    
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &score[i][j]);
        }
         printf("%d번 : %d %d %d\n",i+1, score[i][0], score[i][1], score[i][2]);
    }
    printf("\n");

    for(int i=0; i<5; i++){
        calculator(total,avg,grade,score,i);
        printf("%d번 총점은 %d, 평균은 %.1f(등급 %c)\n",i+1,total[i],avg[i],grade[i]);
    }

    return 0;
}