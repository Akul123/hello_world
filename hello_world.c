#include <stdio.h>
#include <syslog.h>

int main(){
	openlog("hello_world_log_started", LOG_PID, LOG_USER);
	
	char* text = "HELLO WORLD!!!!\n";
	printf("%s", text);
	
	syslog(LOG_INFO, "HELLO WORLD!!!!");
	closelog();
	return 1;
};
