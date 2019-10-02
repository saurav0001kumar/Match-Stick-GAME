#include <stdio.h>
#include <stdlib.h>
void main()
{
int m=21, user,com,option;
BEGIN:
m=21;
printf("\n MATCH STICK GAME\n>>>#Rules <<<:\n1. There are total 21 matchsticks at the starting of  the GAME.\n2. Either 1 or 2 or 3 or 4 matchstick(s) is picked by YOU & by COMPUTER alternatively from left matchsticks.\n3. If you will pick 1 matchstick at the last you will lose the game.\n");
while(1)
{
	START:
    printf("\n>>YOUR TURN:\nPick 1 or 2 or 3 or 4 matchsticks out of LEFT %d.:",m);
    fflush(stdin);
	scanf("%d",&user);
	if(!(user==1||user==2||user==3||user==4)&&(user<=m))
	{
	printf("\nINVALID Response! TRY again!\n");
	goto START;	
	}
	
    m=m-user;
    printf("\nNo. of matchsticks LEFT : %d \n",m);

	if(m==0)
    {
    printf("GAME OVER!\nYou lose the GAME as you picked 1 at last ! \n");
    break;
    }
	
    com=5-user;
    printf("\n>>COMPUTER's TURN :\nNo. of matchsticks picked by computer out of left: %d \n",com);
    m=m-com;
    printf("\nNo. of matchsticks LEFT after COMPUTER's TURN : %d\n",m);

    if(m==0)
    {
    printf("GAME OVER!\nYou lose the GAME ! \n");
    break;
    }

}
REPLAY:
printf("\n1. PLAY again.\n2. EXIT.\n");
scanf("%d",&option);
switch(option){
	case 1: goto BEGIN;break;
	case 2: printf("\nPress any key to EXIT!\n");break;
	default: printf("\nINVALID Response!"); goto REPLAY;
}


}
