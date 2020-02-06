#include <stdio.h>
#include <string.h>
#define TAILLE 20


struct Chapitre {
    char name[20];
    char description[40];
    int gold;
    int pv;
    int id[20];
 };

 typedef struct Chapitre chapitre;

 chapitre destination[TAILLE] = {{"Chapitre 0","Le chateau imperial",+30,-20,{1,2}},{"Chapitre 1","La taverne des orcs",+10,-20,{0,2}},{"Chapitre 2","Village envahi",-20,-5,{0,1}}};

int deplacement(int* userInput, int *jPV, int* jGold){
int temp;
int x;
temp=*userInput;

  for (x = 0; x < 2; x++){
    printf("%d- Chapitre %d\n",x, destination[*userInput].id[x]);
  }
  printf("Entrez le numero du chapitre que vous souhaitez rejoindre\n");
  scanf("%d",userInput);

    while (-0.1> *userInput || *userInput>1){
      printf("Ce choix n'est pas valide\n" );
      scanf("%d",userInput );
    }

  *userInput=destination[temp].id[*userInput];

  *jPV+=destination[*userInput].pv;
  *jGold+=destination[*userInput].gold;

  if(*jPV>=100){
    *jPV=100;
  }

  if(*jGold<=0){
    *jGold=0;
  }

  printf("\nLa destination %s est atteinte.\n%s \n %d gold %d PV\n",destination[*userInput].name,destination[*userInput].description,destination[*userInput].gold,destination[*userInput].pv );
  printf("%dPV / %d Gold\n___________\n",*jPV, *jGold );
  }


int main(){

  int i;
  int userInput;

  int jPV;
  jPV=100;

  int jGold;
  jGold=10;

printf("%dPV / %d Gold\n___________\n",jPV, jGold );
printf("Chapitres disponibles :\n");
for (i = 0; i < 3; i++){
    printf("%d- %s\n", i,destination[i].name);
}
printf("Entrez le numero du chapitre que vous souhaitez rejoindre\n");
scanf("%d",&userInput );

while( -0.1> userInput || userInput>2 ){
  printf("Ce choix n'est pas valide\n" );
  scanf("%d",&userInput );
}

jPV+=destination[userInput].pv;
jGold+=destination[userInput].gold;

if(jPV>=100){
  jPV=100;
}

if(jGold<=0){
  jGold=0;
}

printf("\n%s atteint.\n%s \n %d gold %d PV\n\n",destination[userInput].name,destination[userInput].description,destination[userInput].gold,destination[userInput].pv );
printf("%dPV / %d Gold\n___________\n",jPV, jGold );
deplacement(&userInput, &jPV, &jGold);

}
