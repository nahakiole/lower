#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) 
{
  char* addition = "";
  if (argc > 1) { addition = argv[1]; }
  char str[80];
  int len;
  while(fgets(str, 10, stdin)){
	len = strlen(str);
	if( str[len-1] == '\n' ){
   		str[len-1] = 0;
	}
  	printf("%s%s\n", str, addition);
  }


  return 0;
}
