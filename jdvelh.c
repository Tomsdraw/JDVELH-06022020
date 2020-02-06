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

 int i;
 int userInput;
 chapitre destination[TAILLE] = {{"Chapitre 1","Le chateau imperial",20,70,{2,3}},{"Chapitre 2","La taverne des orcs",70,20,{1,3}},{"Chapitre 3","Village envahi",45,40,{1,2}}};

int deplacement(){

  for (i = 0; i < 2; i++){
    printf("Chapitre %d\n", destination[userInput].id[i]);
  }
  printf("Entrez le numero du chapitre que vous souhaitez rejoindre\n");
    scanf("%d",&userInput);
  userInput=userInput-1;
  printf("\nLa destination %s est atteinte.\n%s \n +%d gold +%d PV\n",destination[userInput].name,destination[userInput].description,destination[userInput].gold,destination[userInput].pv );
  }


int main(){
printf("Chapitres disponibles :\n");
for (i = 0; i < 3; i++){
    printf("%s\n",destination[i].name);
}
printf("Entrez le numero du chapitre que vous souhaitez rejoindre\n");
scanf("%d",&userInput );

while((0> userInput || userInput > 3)){
  printf("Ce choix n'est pas valide\n" );
  scanf("%d",&userInput );
}

userInput=userInput-1;

printf("\n%s atteint.\n%s \n +%d gold +%d PV\n\n",destination[userInput].name,destination[userInput].description,destination[userInput].gold,destination[userInput].pv );

deplacement();

}
