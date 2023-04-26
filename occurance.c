# include <stdio.h>

int main()
{
    char str[]="saraswat";
    char ch;
    int j=0;
    int count=0;
    printf("\n enter the character whose occurance u want to find: ");
    scanf("%c",&ch);

    while(str[j]!='\0')
    {
        if(str[j]==ch)
        {
            count++;


        }
        j++;
    }
    printf("\n number of occurance of a character is:%d",count);
    return 0;
}
