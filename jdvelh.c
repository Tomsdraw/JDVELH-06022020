#include <stdio.h>
#include <string.h>
#define TAILLE 20


struct Lieu {
    char name[20];
 };

 typedef struct Lieu lieu;

int main(){
  int i;
  int userInput;

lieu destination[TAILLE] = {{"Plaine"},{"Chateau"}};

printf("Destinations disponibles :\n");
for (i = 0; i < 2; i++){
    printf("%d - %s\n", i, destination[i].name);
}

scanf("%d",&userInput );

while((-1 > userInput || userInput > 1)){
  printf("Ce choix n'est pas valide\n" );
  scanf("%d",&userInput );
}

printf("La destination %s est atteinte.\n",destination[userInput].name );

}
