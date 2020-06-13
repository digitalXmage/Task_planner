#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
	if(strcmp(argv[1],"h")==0)
	{
		printf("./task_planner <hours> <minutes> <no_taskss>\n");
		return 0;
	}

	int hour = atoi(argv[1]); int minute = atoi(argv[2]); int no_hobbies = atoi(argv[3]);
	/*convert hour to minutes*/
	hour = hour * 60;

	/*add hour and minute*/
	minute = minute + hour;

	/*work out average time to spend for each hobby*/
	float avg_time = minute / no_hobbies;

	printf("You can spend an average time of: %f minutes on each task\n",avg_time);

	return 0;	

}
