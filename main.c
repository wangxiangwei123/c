#include <stdio.h>
int main(){
    int i=29;
    for(;i>0;i--){
        i*=i--;
    }
    printf("%D",i);
}
