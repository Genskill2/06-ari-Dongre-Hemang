#include<string.h>
#include<math.h>
#include<ctype.h>

char ari(char str[]){
    float score=0;
    int length=strlen(str);
    int characters=0,words=1,sentences=1,value=0;
    
    for(int i=0;i<=length;i++){
        if(isalnum(str[i])!='0'){
            characters++;
        }
        if(str[i]==' '){
            words++;
        }
        if(str[i] == '.' || str[i] == '?' || str[i]=='!'){
            sentences++;
        }
    }
    value=4.71*(characters/words)+0.5*(words/sentences)-21.43;
    score=ceil(value);
   
    
    int scoreValue[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    char gradeLevel[14][50]={"Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"};
    
    for(int i=0;i<14;i++){
        if(scoreValue[i]==score){
            return gradeLevel[i][50];
        }
    }
   
}
