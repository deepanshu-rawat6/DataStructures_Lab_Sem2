#include <stdio.h>
int main()
{
    char str[1000];
    printf("\n Enter the string in UPPER case: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("\n Lower case string: %s", str);
    return 0;
}