# include <stdio.h>
# include <string.h>

int main()
{
    char str[]="mom";
    char temp;
    printf("\n string is:%s",str);
    char rev[5];
    strcpy(rev,str);
    printf("\n reversed string is:%s",rev);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    int i;
     for(i=0;i<(len-1)/2;i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("\nstring is:%s",str);

    int count=0;
    int p=0;
    while(str[p]!='\0')
    {
        if(str[i]==rev[i])
        {
            count++;
        }
        p++;
    }
    if(count==len)
    {
        printf("\n string is palidrome");
    }
    else
    {
        printf("\n string is palidrome");
    }
    return 0;
}
