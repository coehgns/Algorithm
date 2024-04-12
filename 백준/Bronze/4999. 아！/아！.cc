#include <stdio.h>
#include <string.h>

int main() {
    char sound[1001];
    char doctor[1001];
    scanf("%s", sound);
    scanf("%s", doctor);
    int len = strlen(sound);
    int len_doc = strlen(doctor);

    if(len >= len_doc) printf("go");
    else printf("no");

    return 0;
}