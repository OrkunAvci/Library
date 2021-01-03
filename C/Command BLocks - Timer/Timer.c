#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* f= fopen("Timer Data.txt", "r");
	int hour= 0, min= 0, sec= 0, control= 1;
	fscanf(f, "%d %d %d", &sec, &min, &hour);	// Reverse order!
	fclose(f);
	while ( hour + min + sec )
	{
		printf("H= %d, M= %d, S= %d", hour, min, sec);
		sleep(sec);
		system("cls");
		sec= 0;
		if 		(min >0)	{	min--;		sec= 60;	}
		else if	(hour >0)	{	hour--;		min= 60;	}
	}
	// Triggers:
	f= fopen("Timer Data.txt", "r");
	fscanf(f, "%d%d%d", &sec, &sec, &sec);
	char* cmd= calloc(200, sizeof(char) );
	fread(cmd, 1, 200, f);
	system(cmd);
	free(cmd);
	fclose(f);
	return 0;
}
