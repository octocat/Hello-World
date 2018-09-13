# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <memory.h>

# define MAX_SIZE 233

/*
  Add in 15:21:09 2018-9-13 by zwp
*/

int main(void){
  char str[MAX_SIZE];
  
  memset(str, 0x0, MAX_SIZE);
  strcpy(str, "Hello, world !");
  printf(" str : %s \n", str);
  
  system("pause");
  return 0;
}
