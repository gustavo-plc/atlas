#include <stdio.h>
#include <string.h>

int main(void) {
  printf("\nExercício 1\n\n");
  char s[] = "Maria", *ptr = s;
  //usando S
  printf("%c\n",s[2]);
  printf("%d\n",&s[0]);
  printf("%d\n",&s[1]);
  printf("%d\n\n",&s[4000]);
  //usando ptr
  printf("%c\n",*(ptr+2));
  printf("%d\n",ptr);
  printf("%d\n",ptr+1);
  printf("%d\n\n",ptr+4000);

  printf("\nExercício 2\n\n");

  while (*ptr != '\0') 
    ptr++;
  printf("O número de caracteres na string é: %d\n", (int)(ptr-&s[0]));

  printf("\nExercício 3\n\n");

  char r[] = "Maysa";
  char v[] = "";
  char *ptr2 = r;
  char *temp = v;
  
    
    switch (*ptr2) {
      
      case 'a': case 'A':
        temp=ptr2;
        ptr2++;
        break;

      case 'e': case 'E': 
        temp=ptr2;
        ptr2++;
        break;

      case 'i': case 'I': 
        temp=ptr2;
        ptr2++;
        break;

      case 'o': case 'O': 
        temp=ptr2;
        ptr2++;
        break;

      case 'u': case 'U': 
        temp=ptr2;
        ptr2++;
        break;

      default:
        ptr2++;
        break;
   }
    if (temp == v)
      printf("O endereço de memória da última vogal é: null!\n");
    else
      printf("O endereço de memória da última vogal é: %p\n", temp);
  
  printf("\nExercício 4\n\n");


  char string[] = "Hello world";
  char temp2[] = "";
  char *p1 = string;
  char *p2 = string;
  char *p3 = temp2;    
  p2 = p1 + strlen(string) - 1;
  while (p1 != p2)
    {
      *p3 = *p1;
      *p1 = *p2;
      *p2 = *p3;
      p1++;
      p2--;
    }  
  printf("O texto invertido é: %s\n", string);

  printf("\nExercício 5\n\n");

  char s
  
}