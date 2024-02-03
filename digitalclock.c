#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int hour=0;
  int minute=0;
  int second=0;
   
  while(1)
  {
      //clean the output on the screen
	system("clear");
      //print the time in HH:MM:SS
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t**************************\n");
        printf("\t\t\t\t*********%02d:%02d:%02d*********\n",hour,minute,second);
	printf("\t\t\t\t**************************\n");

	fflush(stdout);
	//increment seconds
	second++;
	//update hour,mints,seconds
	if(second==60)
	{
	   minute+=1;
	   second=0;
	}
	if(minute==60)
	{
	  hour+=1;
	  minute=0;
	}
	if(hour==24)
	{
	  hour=0;
	  minute=0;
	  second=0;
	}
        //wait for 1 second
	sleep(1);
    }
    return 0;
}
	
