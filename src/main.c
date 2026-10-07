#include <stdio.h>
#include <string.h>


int main(void) {
    char name[100];
    puts("please enter snake name");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        name[strcspn(name, "\n")] = '\0';
        printf("your name is %s\n", name);
    }

    return 0;
}