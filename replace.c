# include <stdio.h>

int main()
{
    char str[]="khushi saraswat";
    char ch;
    printf("\n enter the character: ");
    scanf("%c",&ch);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            str[i]=ch;
        }
        i++;
    }
    printf("%s",str);
    return 0;

}
