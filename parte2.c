#include <stdio.h>
int main()
{   
int PIBbr = 187274412;
int PIBeua = 229902694;
int ano = 2008;
//crescimento anual eua 2%
//crescimento anual brasil 4%
//ano 2008
while(PIBbr<PIBeua){
    PIBbr=PIBbr*104/100;
    PIBeua=PIBeua*102/100;
    ano += 1;
}
printf("%d",ano);
return 0;
}