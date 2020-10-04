#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
void displayMsg(){
	printf("\n MATCH STICK GAME\n>>> #Rules <<<:\n1. There are total 21 matchsticks at the starting of  the GAME.\n2. Either 1 or 2 or 3 or 4 matchstick(s) is picked by YOU & by COMPUTER alternatively from remaining matchsticks.\n3. If you will pick 1 matchstick at the last you will lose the game.\n");
}

void main()
{
int m=21, user,com,option;
int loading=0;
char name[100];
printf(" Welcome to the Match Stick Game by Saurav Kumar.");
sleep(1);
printf("\n\n #Pick any username of your choice to Play : ");
gets(name);
system("cls");
printf("\n Welcome %s, now you are Good to Go!\n\n Loading Game",name);
while(loading<5)
{
sleep(1);
printf(".");
loading++;
}
BEGIN:
m=21;
while(1)
{
	START:
	system("cls");
	displayMsg();
    printf("\n >>YOUR TURN:\n Pick 1 or 2 or 3 or 4 matchsticks out of REMAINING %d : ",m);
    fflush(stdin);
	scanf("%d",&user);
	if((user==1||user==2||user==3||user==4)&&(user<=m));
	else
	{
	system("cls");
	displayMsg();
	printf("\n INVALID Response! TRY again!\n");
	sleep(2);
	goto START;	
	}
	
    m=m-user;
    printf("\n No. of matchsticks REMAINING : %d \n",m);

	if(m==0)
    {
    printf(" GAME OVER!\n You lose the GAME as you picked 1 match-stick at last ! \n");
    break;
    }
	
    com=5-user;
    printf("\n >>COMPUTER's TURN :\n No. of matchsticks picked by computer out of left: %d \n",com);
    sleep(1);
    m=m-com;
    printf("\n No. of matchsticks REMAINING after COMPUTER's TURN : %d\n",m);
	
    if(m==0)
    {
    printf(" GAME OVER!\n You lose the GAME ! \n");
    break;
    }
    sleep(5);

}
REPLAY:
printf("\n #1. PLAY again.\n #2. EXIT Game.\n");
printf("\n Enter your option: ");
scanf("%d",&option);
switch(option){
	case 1: goto BEGIN;break;
	case 2: printf("\n Thank you %s for playing Match Stick Game!\n\n Press any key to EXIT GAME!\n",name);break;
	default: printf("\n INVALID Response!"); sleep(2); system("cls"); displayMsg(); goto REPLAY;
}


}
