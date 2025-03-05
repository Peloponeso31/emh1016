#include <stdio.h>

int constante = 98;

int main(int argc, char * argv[])
// Esto es un espacio de nombres:
{
    {
        int variable = 4;
        printf("%d\n", variable);
    }

    if (1)
    {
        if (1)
        {
            if (1)
            {
                if (1)
                {
                    if (1)
                    {

                    }
                }
            }
        }
    }

    return 0;
}