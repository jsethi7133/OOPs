//to convert a string in lower case
#include<stdio.h>
#include<iostream.h>
#include<ctype.h>
#include<string.h>
void main()
{
char s[20];
gets(s);
for(int i=0;i<strlen(s);i++)
  {
  char a=tolower(s[i]);
  cout<<a;
}
  }
