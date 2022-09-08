#include <unistd.h>
#include <string.h>
/**
* main - print text using the write function
*
* Return: 1 as the terminator
*/
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, s, strlen(s));
return (1);
}
