#include "func.h"
int main(void)
{
    char slovo[256];
    int b;
    b=func("test.txt", slovo);
    if (b==1)
        {
            printf("%s\n", slovo);
        }
    else
        {
            printf("Net takovo slova...\n");
        }
    autotest();
}
