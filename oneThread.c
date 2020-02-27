#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *function(void* var){
	sleep(1);
	printf("Thread \n");
}

int main(){
	pthread_t thread_id;
	printf("Before Thread\n");
	pthread_create(&thread_id, NULL, function, NULL);
	pthread_join(thread_id, NULL);
	printf("After Thread\n");
	exit(0);
}
