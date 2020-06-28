#include<stdio.h>

int main(int argc, char const *argv[])
{
    #if __STDC__
    printf("the compiler is aligned with the standard ISO\n");
    #else
    printf("the compiler is not aligned with the standard ISO\n");
    #endif
    printf("\nPROGRAM STATUS: at line %d\n", __LINE__);
    printf("FILENAME: %s\n",__FILE__);
    printf("LAST COMPILED\nDATE:%s\tTIME:%s\n",__DATE__, __TIME__);
    return 0;
}
