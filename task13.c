
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    char stopFlag = 0;
    int kbhit();
    
    while (!stopFlag || !kbhit){
        
        time_t currentTime;
        struct tm *localTime;

        time(&currentTime);
        localTime = localtime(&currentTime);

        
        printf("%02d:%02d:%02d\r", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
        fflush(stdout);
        usleep(1000000);
        if (kbhit()){
             char key = getchar();
            if (key == 's' || key == 'S') {
                stopFlag = 1;
                printf("\nclock is stop\n");
            }

            
        }  
    }

    return 0;
}
