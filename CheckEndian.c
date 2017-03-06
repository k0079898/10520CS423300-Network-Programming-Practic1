#include <stdio.h>
typedef union
{
  int number;
  char ch[sizeof(int)];
}obj;

int main()
{
  obj a;
  a.number = 112;
  if(a.ch[0] != 0) printf("Little Endian\n");
  else if(a.ch[0] == 0) printf("Big Endian\n");
}
