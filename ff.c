#include <stdio.h>
void  donnee()
{
    int i;
    int b;
    struct Personne {
    char status[20];
    char discription[500];
    char titre[100];
    int id;
    int deadline;
};
struct Personne tache[600];

for(i = 0;;i++)
{
    tache[i].id = i;
    printf("entre status");
    scanf("%s",&tache[i].status);
    printf("entre deadline");
    scanf("%d",&tache[i].deadline);
    printf("entre titre");
    scanf("%s",&tache[i].titre);
    printf("entre discription");
    scanf("%s",&tache[i].discription);
    printf("tu peux contunue ou nom si oui print 1 ou no print 0");
    scanf("%d",&b);
    if(b == 0 )
        break;
}
for(int j=0; j <= i;j++)
{
    printf("             utilisateur %d\n",j+1);
    printf("id : %d | titre : %s  | status : %s  |discription : %s | deadline : %d \n",tache[j].id,tache[j].titre,tache[j].status,tache[j].discription,tache[j].deadline);
   printf("--------------------------------------------------------\n");
}
}
int main() {
   donnee();
}
