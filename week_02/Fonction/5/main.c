#include <stddef.h>
#include <string.h>
#define VOWELS "aeiou"
size_t get_count(const char *s)
{
  int j=0,i;
  for(i=0;i<strlen(s);i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
      j++;
    }
  }
    return j;
}
char *disemvowel(const char *str)
{
    char s[30];
    int i=0,j=0;
    for(i=0;i<strlen(str);i++){
            printf("yassine\n");
      if(strchr(VOWELS,str[i])!=NULL)
            continue;
    printf("sahyane\n");
    printf("%c\n",str[i]);
       s[j]=str[i];
       printf("%c\n",s[j]);
       j++;
    }
    s[j]='\0';
  return s;
}

int main()
{
    char s[20]={'Y','e','s','\0'};
    char s1[10];
    *s1=disemvowel(&s);
    printf("%s", s1);
}
