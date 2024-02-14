
#include <stdio.h>
#include <time.h>

int main() {
    while (1) {
        
        time_t currentTime;
        struct tm *localTime;

        time(&currentTime);
        localTime = localtime(&currentTime);

        
        printf("%02d:%02d:%02d\r", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);


        sleep(1);
    }
//stop button lagana hai
    return 0;
}