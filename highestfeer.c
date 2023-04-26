# include <stdio.h>
# include <string.h>

int main()
{
    char str[]="kkhuuushi",result;
    int fre[256]={0};
    int max=0;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        fre[str[i]]++;
    }
    i=0;
    while(str[i]!='\0')
    {
        if(max<=fre[str[i]])
        {
            max=fre[str[i]];
            result=str[i];
        }
        i++;
    }
    printf("%d of %c",max,result);
    return 0;

}
