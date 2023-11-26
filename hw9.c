#include <stdio.h>

void changeAlphabet(char * ptr){
  while(*ptr != '\0'){
  const int diff = 'a'-'A';
  if (*ptr >= 'A' && *ptr <= 'Z'){
       *ptr = *ptr + diff;
  }
  else if (*ptr >= 'a' && *ptr <= 'z'){
       *ptr = *ptr - diff;

  }
  ptr++;
  }
}

int main(void){
  char * ch1 = "Input>";
  char * ch2 = "Output>";
  char str1[100];


  fputs(ch1, stdout);
  fgets(str1, sizeof(str1), stdin);
  changeAlphabet(str1);
  fputs(ch2, stdout);
  fputs(str1, stdout);



  return 0;
}