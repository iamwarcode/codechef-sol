#include<stdio.h>
 
int main(){
  float i;
  int w;
  scanf("%d %f", &w, &i);
  if(w + 0.5 > i || w %5 != 0){
    printf("%.2f", i);
  }else{
     printf("%.2f", i - w - 0.5);
  }
     return 0;
}
