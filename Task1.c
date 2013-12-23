#include <stdio.h>

int main () {

  
  int result = 0;
  int i;

  for(i = 0;i < 1000;i++) {

    if(i % 3 == 0 || i % 5 == 0) {

      result = result + i;
    }
    
 }
  

  printf("%d\n", result);

}
