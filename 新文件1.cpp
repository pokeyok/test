#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i;
    char Name[30]="whatareyou?";
    printf("Hello world!\n");
    printf("%d\n",2+3);             //%d print an integer
    printf("%f\n",23.14+35.243);    //%f print a floot number
    printf("%f\n",cos(2.0*M_PI/3));
    printf("%.12f\n",cos(2.0*M_PI/3));
    printf("%c\n",Name[3]);
    printf("%s\n",Name);
    printf("%u\n",Name);
    printf("%u\n",Name[3]);
    printf("%u\n",Name+3);
    for(i=0;i<30;i++)
    {
                     printf("%d : %c -%u\n",i,Name[i],Name[i]);
    }
system("pause");
return 0;
}
