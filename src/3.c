#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 65536

int main(){
char buffer[SIZE];
unsigned long n,k,in,co;
int c,i;

in = 0;
co = 0;

scanf("%lu %lu\n", &n, &k);

while((c=fread(buffer, 1, SIZE, stdin))>0){
for(i=0;i<c;i++){
if(buffer[i] == '\n'){
if(in%k==0){
co++;
}
in=0;
}else{
in = in*10 + (buffer[i] - '0');
}
}
}

printf("%lu\n",co);
return 0;
} 
