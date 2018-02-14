#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    int abc[26] = {};
                    
    char key1[] = "yz";
    char key2[] = "xyz";
    char key3[] = "wxyz";
    char key4[] = "vwxyz";
    char key5[] = "uvwxyz";
    
    char *key_ptr[5] = {key1,key2,key3,key4,key5};
    
    float average = 0;
    float popvar = 0;
    float temp;
    
    char plain[] = "ethicslawanduniversitypoliciestodefendasystemyouneedtobeabletothinklikeanattackerandthatincludesunderstandingtechniquesthatcanbeusedtocompromisesecurityhoweverusingthosetechniquesintherealworldmayviolatethelawortheuniversitysrulesanditmaybeunethicalundersomecircumstancesevenprobingforweaknessesmayresultinseverepenaltiesuptoandincludingexpulsioncivilfinesandjailtimeourpolicyineecsisthatyoumustrespecttheprivacyandpropertyrightsofothersatalltimesorelseyouwillfailthecourseactinglawfullyandethicallyisyourresponsibilitycarefullyreadthecomputerfraudandabuseactcfaaafederalstatutethatbroadlycriminalizescomputerintrusionthisisoneofseverallawsthatgovernhackingunderstandwhatthelawprohibitsyoudontwanttoenduplikethisguyifindoubtwecanreferyoutoanattorneypleasereviewitsspoliciesonresponsibleuseoftechnologyresourcesandcaenspolicydocumentsforguidelinesconcerningproperuseofinformationtechnologyatumaswellastheengineeringhonorcodeasmembersoftheuniversitycommunityyouarerequiredtoabidebyt";
    int plain_len = strlen(plain);
    char copy[plain_len];
    strcpy(copy,plain);
    for(int j = 0; j<5;j++){
        printf("Test: \n");
        for(i=0; i<plain_len;i++){
            temp = *((key_ptr[j])+(i%(j+2)))-'a';
            if(copy[i] + temp > 'z')
                plain[i] = copy[i] - 26 + temp;
            else
                plain[i] = copy[i] + temp;
            //printf("%c",*((key_ptr[j])+(i%(j+2))));
            //printf("%d",(int)plain[i]);
        }
        printf("\nThe encrypted string is: \n %s \n\n",plain);
    
    
    
    
    //Reset alphabet array 
    for( i = 0; i<26; i++){
        abc[i] = 0;
    }
    
    int count = 0;
    //Calculate the occurrences
    for( i =0; i<plain_len; i++){
        abc[(int)plain[i]-97]++;
        count++;
    }
    
    //calculate the frequency in 1000%
    printf("\n\n\n");
    for(i=0; i<26;i++){
        abc[i] = abc[i]*100*1000/count;
        printf("Frequency of %c is %d\n", (char)(i+97), abc[i]);
    }
    
    //Calculate the mean
    average = 0;
    for( i = 0; i<26 ; i++){
        average += abc[i];
    }
    average /= 26;
    
    printf("The mean is: %f \n",average/1000);
    
    popvar = 0;
    //Calculate the population variance
    for(i = 0; i<26 ; i++){
        temp = abc[i] - average;
        temp = temp*temp;
        popvar += temp;
    }
    popvar /= 26;
    
    printf("The population variance is: %f \n", popvar/1000000);
    
    }
    return 0;
}
