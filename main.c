
//Listing 18.6 Using strcmp() function to compare strings; p465


#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80], str2[80];
    int x;

    while(1)
    {
        //input 2 strings
        printf("\n\nInput the first string, enter a blank line to exit: ");
        gets(str1);

        if(strlen(str1) == 0)
            break;

        printf("\nInput the second string: ");
        gets(str2);

        //compare them and display the results

        x = strcmp(str1, str2);

        printf("\nstrcmp(%s %s) returns %d", str1, str2, x);

        if(x == 0) {
            printf("\n*** Both strings are exactly the same ***");
        } else {
            printf("\n*** The strings are NOT identical ***");
        }
    }
    return 0;

}
