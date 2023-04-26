# include <stdio.h>

int main()
{
    char str[30]="khushi";
    printf("%s",str);
    int idx;
    printf("\n enter idx at which u want to delete character: ");
    scanf("%d",&idx);
    int i;
    for(i=0;str[i]!='\0';i++);

    int k=idx;
    while(k<=i)
    {
        str[k]=str[k+1];
        k++;

    }
    puts(str);
    return 0;
}
