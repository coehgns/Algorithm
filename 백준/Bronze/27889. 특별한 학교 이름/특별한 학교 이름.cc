#include <stdio.h>
#include <string.h>

int main() {
    char school[5];
    scanf("%s", school);

    if(!strcmp(school,"NLCS")) printf("North London Collegiate School");
    if(!strcmp(school,"BHA")) printf("Branksome Hall Asia");
    if(!strcmp(school,"KIS")) printf("Korea International School");
    if(!strcmp(school,"SJA")) printf("St. Johnsbury Academy");
    
    return 0;
}