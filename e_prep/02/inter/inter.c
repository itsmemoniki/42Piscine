#include <unistd.h>

void    inter(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2 [j])
            {
                write (1, &s1[i], 1);
                
            }
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        return (0);
    }
    write (1, "\n", 1);
}