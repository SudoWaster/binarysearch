#include <stdio.h>

int l=0,r=1000,m;
main(){
  printf("\r<%d,%d>?(y/n)",l,(l+r)>>1);
  char a=getchar();a=='y'?r=(l+r)>>1:a=='n'?l=((l+r)>>1)+1:main();
  l<r?main():printf("\r%d",l);
}
