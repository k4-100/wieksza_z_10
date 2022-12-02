#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct valueWithCount{
  int value;
  unsigned int count;
};



int main(){

  srand(time(0));
  int valueArr[10];
  struct valueWithCount valueWithCountArr[10];

  printf("\n################################\n wygenerowane losowe liczby: \n################################\n\n");
  for( int i=0; i<10; i++){
    valueArr[i] = rand() % 20 - 10;
    printf("rand: %d\n", valueArr[i]);
    struct valueWithCount vwc = {
      0,
      0
    };
    valueWithCountArr[i] = vwc;
  }

  for (int x=0; x<=9; x++){
    for( int y=0; y<=x; y++){

      if( valueArr[x] != valueWithCountArr[y].value ){
        if( valueWithCountArr[y].value == 0){
          valueWithCountArr[y].value = valueArr[x];
          valueWithCountArr[y].count = 1;
        }
      }else{

      }


    }
  }
  printf("\n################################\n wartości w structach \n################################\n\n");
  for( int i=0; i<10; i++)
    printf("[%d] value: %d, count %d\n",i, valueWithCountArr[i].value, valueWithCountArr[i].count );


  return 0;
}