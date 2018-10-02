#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Mage {int hp; char name[8];};

struct Mage generateStruct(){
  srand(time(NULL));
  struct Mage s;
  s.hp = rand();
  int i;
  for(i = 0; i < 7; i++){
    char temp = rand() % 26 + 97;
    s.name[i] = temp;
  }
  s.name[7] = 0;
  return s;
}


int printStruct(struct Mage struc){
  printf("name of struct: s\n");
  printf("{\n");
  printf("   hp: %d\n", struc.hp);
  printf(" name: %s\n}\n", struc.name);
  return 0;
}

int modifyStruct(struct Mage *struc, int hp, char name[8]){
  struc->hp = hp;
  int i;
  for(i = 0; i < 7; i++){
    struc->name[i] = name[i];
  }
  return 0;
}


int main(){
  printf("\nstruct Mage {int hp; char name[8];};\n\n");
  struct Mage s = generateStruct();
  printf("~~~Before Modification~~~\n");
  printStruct(s);
  modifyStruct(&s, 100, "William");
  printf("\n\n~~~After Modification~~~\n");
  printStruct(s);
  return 0;
}
