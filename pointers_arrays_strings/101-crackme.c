#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // The expected password
    const char *correct_password = "H3ll0W0rld!"; // Set this to whatever password you want to check against

    // Check if the user provided a password
    if (argc != 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return 1;
    }

    // Compare the provided password with the correct one
    if (strcmp(argv[1], correct_password) == 0) {
        printf("Tada! Congrats\n");
    } else {
        printf("Wrong password\n");
    }

    return 0;
}
