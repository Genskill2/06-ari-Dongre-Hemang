#include<string.h>
#include<math.h>
#include<ctype.h>
#include<cs50.h>

string ari(string str){
    float value=0;
    int length=strlen(str);
    int characters=0,words=1,sentences=1,score=0;
    
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
   
   if(score==1){
        return "Kindergarten";
    }
    if(score==2){
        return "First/Second Grade";
    }
    if(score==3){
        return "Third Grade";
    }
    if(score==4){
        return "Fourth Grade";
    }
    if(score==5){
        return "Fifth Grade";
    }
    if(score==6){
        return "Sixth Grade";
    }
    if(score==7){
        return "Seventh Grade";
    }
    if(score==8){
        return "Eighth Grade";
    }
    if(score==9){
        return "Ninth Grade";
    }
    if(score==10){
        return "Tenth Grade";
    }
    if(score==11){
        return "Eleventh Grade";
    }
    if(score==12){
        return "Twelfth grade";
    }
    if(score==13){
        return "College student";
    }
    if(score==14){
        return "Professor";
    }
}
