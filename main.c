#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
}    char name[255];

<<<<<<< HEAD
<<<<<<< HEAD
    askname(first, last);

    printf("Hello, %s %s!\n", first, last);
    return 0;
}
=======
    printf("Enter your name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */

    printf("Hello %s!\n", name);
    return 0;
}
>>>>>>> parent of f2be8df (lastname.)
=======
    printf("Enter your name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */

    printf("Hello %s!\n", name);
    return 0;
}
>>>>>>> parent of f2be8df (lastname.)
