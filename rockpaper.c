#include<unistd.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int game(char);
void main()
{
char c;
int output=0,counth=0,countp=0;
while(1)
{
printf("Enter the rock(r or R) paper(P or p) or sissors(s or S)\n");
fseek(stdin,0,SEEK_END);
while((c=getchar())=='\n');//because the compiler will take \n from the buffer
printf("%d\n",c);
output=game(c);
if(output==1)
{
counth++;
printf("You win \nWin count you =%d \nWin count computer = %d\n",counth,countp);

}
else if(output==0)
{
countp++;
printf("You Lose \nWin count you =%d \nWin count computer = %d\n",counth,countp);

}
else
{


printf("Tie \nWin count you =%d \nWin count computer = %d\n",counth,countp);

}

}
}
int game(char c)
{
int ran;
char sys;
srand(time(NULL));
ran=rand()%100;
if(ran<33)
{
sys='s';
}
else if(ran<66)
{
sys='p';
}
else 
{
sys='r';
}
if((c=='S' || c=='s')&&(sys=='p'))
{
printf("Your entry is sissor and System is paper\n");
return 1;
}
else if((c=='S' || c=='s')&&(sys=='r'))
{
printf("Your entry is sissor and System is rock\n");
return 0;
}
else if((c=='P' || c=='p')&&(sys=='s'))
{
printf("Your entry is paper and System is sissor\n");
return 0;
}
else if((c=='P' || c=='p')&&(sys=='r'))
{
printf("Your entry is paper and System is rock\n");
return 1;
}
else if((c=='R' || c=='r')&&(sys=='p'))
{
printf("Your entry is rock and System is paper\n");
return 0;
}
else if((c=='R' || c=='r')&&(sys=='s'))
{
printf("Your entry is rock and System is sissor\n");
return 1;
}
else if((c==sys||c==(sys-32)))
{
printf("both are same\n");
return -1;
}

}
