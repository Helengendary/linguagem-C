#include <stdio.h>
#include <time.h>

int main() {
    struct tm *p;
    time_t seconds;

    time(&seconds);
    p = localtime(&seconds);

    printf("Hora: %d:%d:%d\n", p->tm_hour, p->tm_min, p->tm_sec);
    
}
