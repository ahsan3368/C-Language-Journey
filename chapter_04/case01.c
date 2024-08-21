#include<stdio.h>
int main(){
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i == 6){
            // break; reak the iteration when value is equal to 6.
          continue;  //skip the iteration when i = 6.
        }
        printf("%d\n",i);
        
    }
    return 0;
}