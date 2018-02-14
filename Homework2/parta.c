#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    int abc[26] = {8167, 4192, 2782, 4253, 12702, 2228, 2015, 6094, 6996, 153, 772, 4025, 2406,\
                    6749, 7507, 1929, 95, 5987, 6327, 9056, 2758, 978, 2360, 150, 1974, 74};
                    
    float average = 0;
    for( i = 0; i<26 ; i++){
        average += abc[i];
    }
    average /= 26;
    
    printf("The mean is: %f \n",average/1000);
    
    float popvar = 0;
    float temp;
    for(i = 0; i<26 ; i++){
        temp = abc[i] - average;
        temp = temp*temp;
        popvar += temp;
    }
    popvar /= 26;
    
    printf("The population variance is: %f \n", popvar/1000000);
    
}