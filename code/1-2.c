#include <stdio.h>
int main()
{
    printf("% 5s ","name");
    printf("%11s","id");
    printf("% 10s","value\n");

    printf("% 5s ","kim");
    printf("%011d",12);
    printf("% 10.2f\n",4.120000);

    printf("% 5s ","lee");
    printf("%011d",1922);
    printf("% 10.2f\n",3.210000);

    printf("% 5s ","park");
    printf("%011d",432);
    printf("% 10.2f\n",1.000000);

    

    return 0;
}