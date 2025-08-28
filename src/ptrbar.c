// ptrbar - the best i3status alternative
// written by Pyotr Ivanov (write-pyotr@proton.me)

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char** argv){
	time_t now = time(NULL);
	struct tm *t = NULL;

	while (1) {
		now = time(NULL);
		t = localtime(&now);

		printf("%d:%d:%d\t%d-%d-%d\n", t->tm_hour, t->tm_min, t->tm_sec - (t->tm_sec % 5), t->tm_mday, t->tm_mon,t->tm_year + 1900);
	sleep(5);
	}
	return -1;
}
