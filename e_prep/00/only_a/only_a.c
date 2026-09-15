
#include <unistd.h>

void    only_a(void)
{
    char c;

    c = 'a';
    write(1, &c, 1);
}

int main(void)
{
    only_a();
}