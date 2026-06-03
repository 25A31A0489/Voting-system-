#include <stdio.h>

int main() { int choice; int votes1 = 0, votes2 = 0, votes3 = 0, votes4 = 0; int totalVotes;

printf("ONLINE VOTING SYSTEM\n");
printf("---------------------\n");

printf("Enter total number of voters: ");
scanf("%d", &totalVotes);

for(int i = 1; i <= totalVotes; i++)
{
    printf("\nVote %d\n", i);
    printf("1. Candidate A\n");
    printf("2. Candidate B\n");
    printf("3. Candidate C\n");
    printf("4. Candidate D\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            votes1++;
            break;
        case 2:
            votes2++;
            break;
        case 3:
            votes3++;
            break;
        case 4:
            votes4++;
            break;
        default:
            printf("Invalid Vote!\n");
            i--; // retry vote
    }
}

printf("\n----- VOTING RESULTS -----\n");
printf("Candidate A: %d votes\n", votes1);
printf("Candidate B: %d votes\n", votes2);
printf("Candidate C: %d votes\n", votes3);
printf("Candidate D: %d votes\n", votes4);

if(votes1 > votes2 && votes1 > votes3 && votes1 > votes4)
    printf("\nWinner: Candidate A\n");
else if(votes2 > votes1 && votes2 > votes3 && votes2 > votes4)
    printf("\nWinner: Candidate B\n");
else if(votes3 > votes1 && votes3 > votes2 && votes3 > votes4)
    printf("\nWinner: Candidate C\n");
else if(votes4 > votes1 && votes4 > votes2 && votes4 > votes3)
    printf("\nWinner: Candidate D\n");
else
    printf("\nResult is a Tie!\n");

return 0;
}
