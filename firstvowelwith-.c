# include <stdio.h>

int main()
{
    char str[]="apple";
    printf("\n string is:%s",str);
    int flag=0;
    int i=0;
    while(str[i]!='\0'){

    if(((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='0')||(str[i]=='U')))
    {
           str[i]='-';
           break;


    }
    i++;
    }
    puts(str);
    return 0;
}
