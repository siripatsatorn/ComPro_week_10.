
#include <stdio.h>
#include <string.h>

int main(void) {

    char name[3][20];
    float score[3][3];
    float avg[3] = {0, 0, 0};

    int i, j;

    for (i = 0; i < 3; i++) {

        printf("Enter name: ");
        scanf("%s", name[i]);

        printf("Enter Math score: ");
        scanf("%f", &score[i][0]);

        printf("Enter Phy score: ");
        scanf("%f", &score[i][1]);

        printf("Enter Chem score: ");
        scanf("%f", &score[i][2]);

        printf("\n");
    }

    
    for (i = 0; i < 3; i++) {
        avg[0] = avg[0] + score[i][0];
        avg[1] = avg[1] + score[i][1];
        avg[2] = avg[2] + score[i][2];
    }

    avg[0] = avg[0] / 3;
    avg[1] = avg[1] / 3;
    avg[2] = avg[2] / 3;
  printf("====================================================\n");

    printf("Student (length)      Math      Phy       Chem\n");

    printf("====================================================\n");


    for (i = 0; i < 3; i++) {
        printf("%s (%zu)            %.2f     %.2f     %.2f\n",
               name[i],
               strlen(name[i]),
               score[i][0],
               score[i][1],
               score[i][2]);
    }
printf("----------------------------------------------------\n");
    printf("Subject average     %.2f     %.2f     %.2f\n",
           avg[0], avg[1], avg[2]);
printf("====================================================\n");
    return 0;
}
    