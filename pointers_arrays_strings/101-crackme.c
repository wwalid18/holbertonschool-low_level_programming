#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    const char *correct_password = "H3ll0W0rld!"; // Set the expected password

    if (argc != 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], correct_password) == 0) {
        printf("Tada! Congrats\n");
    } else {
        printf("Wrong password\n");
    }

    return 0;
}
