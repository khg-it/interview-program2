# include <stdio.h>

int main()
{
    char ch;
    printf("\n enter character: ");
    scanf("%c",&ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='0')||(ch=='U'))
    {
        printf("%c is an vowel",ch);
    }
    else
    {
        printf("%c is a consonant",ch);
    }
    return 0;
}
