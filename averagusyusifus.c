#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
int main(){
float frm1,frm2,frm3;
float engm1,engm2,engm3;
float mm1,mm2,mm3;
float csm1,csm2,csm3;
float chm1,chm2,chm3;
float phm1,phm2,phm3;
float avfr,aveng,avm,avcs,avch,avph;
float avgm1,avgm2,avgm3;
float avs;
printf("********************************************************************************");
printf("******************                                         *******************");
printf("******************   Welcome to Final Avarage calculator   *******************");
printf("******************                                         *******************");
printf("********************************************************************************");
printf("*****************    Now enter your grades according to statements     *******");
printf("*****************                                                      *******");
printf("********************************************************************************");
printf("Enter your French grades : \n");

system("COLOR 70");
printf("Mid Term1: ");
scanf("%f",&frm1);
printf("Mid Term2: ");
scanf("%f",&frm2);
printf("Final: ");
scanf("%f",&frm3);
printf("Press enter to continue\a\n");
getch();
printf("********************************************************************************");
system("COLOR E0");
printf("Enter your English  grades : \n");
printf("Mid Term1: ");
scanf("%f",&engm1);
printf("Mid Term2: ");
scanf("%f",&engm2);
printf("Final: ");
scanf("%f",&engm3);
printf("Press enter to continue\n\a");
getch();
printf("********************************************************************************");
system("COLOR 17");
printf("Enter your Math  grades : \n");
printf("Mid Term1: ");
scanf("%f",&mm1);
printf("Mid Term2: ");
scanf("%f",&mm2);
printf("Final: ");
scanf("%f",&mm3);
printf("Press enter to continue\n\a");
getch();
printf("********************************************************************************");
system("COLOR 30");
printf("Enter your Computer Science  grades : \n");
printf("Mid Term1: ");
scanf("%f",&csm1);
printf("Mid Term2: ");
scanf("%f",&csm2);
printf("Final: ");
scanf("%f",&csm3);
printf("Press enter to continue\n\a");
getch();
printf("********************************************************************************");
system("COLOR 16");
printf("Enter your Physics  grades : \n");
printf("Mid Term1: ");
scanf("%f",&phm1);
printf("Mid Term2: ");
scanf("%f",&phm2);
printf("Final: ");
scanf("%f",&phm3);
printf("Press enter to continue\n\a");
getch();
printf("********************************************************************************");
printf("Enter your Chemistry  grades : \n");
system("COLOR 30");
printf("Mid Term1: ");
scanf("%f",&chm1);
printf("Mid Term2: ");
scanf("%f",&chm2);
printf("Final: ");
scanf("%f",&chm3);
printf("Press enter to continue\n\a");
getch();
//****************************************************************************************
system("COLOR 07");
avfr=(0.5*frm1+0.75*frm2+0.75*frm3)/2;
aveng=(engm1+1.5*engm2+1.5*engm3)/4;

avm=(0.75*mm1+0.75*mm2+1.5*mm3)/3;
avph=(0.75*phm1+0.75*phm2+1.5*phm3)/3;
avch=(0.75*chm1+0.75*chm2+1.5*chm3)/3;
avcs=(1.5*csm1+1.5*csm2+2*csm3)/5;
//*****************************************************************************************
avgm1=(0.5*frm1+1*engm1+1.5*csm1+0.75*chm1+0.75*phm1+0.75*mm1)/5.25;
avgm2=(0.75*frm2+1.5*engm2+1.5*csm2+0.75*chm2+0.75*mm2+0.75*phm2)/6;
avgm3=(0.75*frm3+1.5*engm3+2*csm3+1.5*mm3+1.5*phm3+1.5*chm3)/8.75;
//****************************************************************************************
avs=(0.5*frm1+0.75*frm2+0.75*frm3+engm1+1.5*engm2+1.5*engm3+0.75*mm1+0.75*mm2+1.5*mm3+0.75*phm1+0.75*phm2+1.5*phm3+0.75*chm1+0.75*chm2+1.5*chm3+1.5*csm1+1.5*csm2+2*csm3)/20;

printf("*******************************************************************************\\an");
printf("*********** Your French average is:             %.3f                        *\n",avfr);
printf("*********** Your English average is:            %.3f                        *\n",aveng);
printf("*********** Your Math average is:               %.3f                        *\n",avm);
printf("*********** Your Computer Science average is:   %.3f                        *\n",avcs);
printf("*********** Your Physics average is:            %.3f                        *\n",avph);
printf("*********** Your Chemistry average is:          %.3f                        *\n",avch);
printf("*******************************************************************************\n");
printf("*********** Your MidTerm1 average is:           %.3f                        *\n",avgm1);
printf("*********** Your MidTerm2 average is:           %.3f                        *\n",avgm2);
printf("*********** Your Final average is:              %.3f                        *\n",avgm3);
printf("*******************************************************************************\n");
printf("*******************************************************************************\n");
printf("*********** YOUR TOTAL AVERAGE FOR  1st Semester:     %.3f                   *\n",avs);
printf("************                                                                *\n");
printf("*******************************************************************************\n");
printf("Press enter to exit");
getch();
}
