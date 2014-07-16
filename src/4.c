#include<stdio.h>
#include<math.h>

int main(){
    int n,N,i,k;
    int ans;
    k=2;
    scanf("%d", &n);
    while(n--){
        i = 1;
        ans = 0;
        scanf("%d", &N);
        while(k = N / pow(5,i)){
            ans += (int)k;
            i++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
