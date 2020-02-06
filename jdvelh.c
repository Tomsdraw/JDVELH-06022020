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
 chapitre destination[TAILLE] = {{"Chapitre 0","Le chateau imperial",20,70,{1,2}},{"Chapitre 1","La taverne des orcs",70,20,{0,2}},{"Chapitre 2","Village envahi",45,40,{1,0}}};

int deplacement(){
int temp;
temp=userInput;

  for (i = 0; i < 2; i++){
    printf("%d- Chapitre %d\n",i, destination[userInput].id[i]);
  }
  printf("Entrez le numero du chapitre que vous souhaitez rejoindre\n");
  scanf("%d",&userInput);

    while (-0.1> userInput || userInput>1){
      printf("Ce choix n'est pas valide\n" );
      scanf("%d",&userInput );
    }

  userInput=destination[temp].id[userInput];

  printf("\nLa destination %s est atteinte.\n%s \n +%d gold +%d PV\n",destination[userInput].name,destination[userInput].description,destination[userInput].gold,destination[userInput].pv );
  }


int main(){
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


printf("\n%s atteint.\n%s \n +%d gold +%d PV\n\n",destination[userInput].name,destination[userInput].description,destination[userInput].gold,destination[userInput].pv );

deplacement();

}
