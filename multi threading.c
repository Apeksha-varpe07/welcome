#include <stdio.h>
#include <pthread.h>

void* message(void* arg) {
    printf("Thread is running\n");
    return NULL;
}

int main() {
    pthread_t t1;

    pthread_create(&t1, NULL, message, NULL);

    pthread_join(t1, NULL);

    printf("Thread finished\n");

    return 0;
}
