# include<stdio.h>
int main()
{
  char ch;
  printf(" Enetr the character: ");
  scanf("%c",&ch);
  switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
   printf("%c is a vowel",ch);
      break;
      default:
      printf("%c is a consonant",ch);
      break; 
    }
}
