#include <stdio.h>

int main()
{
    char name[30], ch;
    int i = 0;
    printf("\nEnter the name: ");
    while(ch != '\n'){
        ch = getchar();
        name[i] = ch;
        i++;
    }
    name[i] = '\0';
    printf("\nYour name is: %s", name);
    return 0;
}
