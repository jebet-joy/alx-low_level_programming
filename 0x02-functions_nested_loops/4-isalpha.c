#include "main.h"

/**
 * _isaplha - check for lower case letter
 * @c : character to check 
 * return; always return 0;
 */

int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
