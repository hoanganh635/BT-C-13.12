#include <stdio.h>

int main(){
  int a;
  printf("moi ban nhap 1 so nguyen duong\n");
  scanf("%d",&a);
  for(int i=1;i<=a;i++){
    if(a%i==0) {
      printf("%d ",i);
    }

  }
  return 0;


}



