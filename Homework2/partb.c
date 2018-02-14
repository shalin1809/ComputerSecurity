#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    int abc[26] = {};
    float average = 0;
    float popvar = 0;
    float temp;
    
    char plain[] = "ethicslawanduniversitypoliciestodefendasystemyouneedtobeabletothinklikeanattackerandthatincludesunderstandingtechniquesthatcanbeusedtocompromisesecurityhoweverusingthosetechniquesintherealworldmayviolatethelawortheuniversitysrulesanditmaybeunethicalundersomecircumstancesevenprobingforweaknessesmayresultinseverepenaltiesuptoandincludingexpulsioncivilfinesandjailtimeourpolicyineecsisthatyoumustrespecttheprivacyandpropertyrightsofothersatalltimesorelseyouwillfailthecourseactinglawfullyandethicallyisyourresponsibilitycarefullyreadthecomputerfraudandabuseactcfaaafederalstatutethatbroadlycriminalizescomputerintrusionthisisoneofseverallawsthatgovernhackingunderstandwhatthelawprohibitsyoudontwanttoenduplikethisguyifindoubtwecanreferyoutoanattorneypleasereviewitsspoliciesonresponsibleuseoftechnologyresourcesandcaenspolicydocumentsforguidelinesconcerningproperuseofinformationtechnologyatumaswellastheengineeringhonorcodeasmembersoftheuniversitycommunityyouarerequiredtoabidebyt";
    int plain_len = strlen(plain);
    //Calculate the occurrences
    for( i =0; i<plain_len; i+=1){
        abc[(int)plain[i]-97]++;
    }
    
    //calculate the frequency in 1000%
    printf("\n\n\n");
    for(i=0; i<26;i++){
        abc[i] = abc[i]*100*1000/plain_len;
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