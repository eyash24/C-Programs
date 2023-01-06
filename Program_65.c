# include <stdio.h>
#include<string.h>
int main()
{
    // char str1[] = "GeeksQuiz";
    // char str2[] = {'G', 'e', 'e', 'k', 's', 'Q', 'u', 'i', 'z'};
    // int n1 = sizeof(str1)/sizeof(str1[0]);
    // int n2 = sizeof(str2)/sizeof(str2[0]);
    // printf("n1 = %d, n2 = %d", n1, n2);
    // return 0;
    // output: n1 = 10, n2 = 9

    int tally;
    for(tally=0;tally<10;++tally)
    {
        printf("#");
        if(tally>6)
            continue;
        printf("%d",tally);
    }
    printf("\n");
    // output: #0#1#2#3#4#5#6###

    // for(tally=0;tally<10;tally++)
    // {
    //     printf("#");
    //     if(tally>6)
    //         continue;
    //     printf("%d",tally);
    // }

    // char str[80]="hello";
    // int l;
    // for(l = 0; str[l] != '\0'; l++);
    //     for(int i = l - 1; i >= 0; i--)
    //     {
    //         printf("%c",str[i]);
    //     }
    // output: olleh

    // int a[2][3] = {3,0,0};
    // int i = 0, j = 0;
    // for (i = 0; i < 2; i++)
    // for (j = 0; j < 3; j++)
    // printf("%d",a[i][j]);
    // output: 300000

    // char str[] = "C EXAMINATION", rev[17];
    // int i = strlen(str), j=0;
    // printf("%d\n",i);
    // for( ; i>=0; rev[j++] = str[i--]);
    // rev[j]='?';
    // puts(rev);


    return 0;
    
}