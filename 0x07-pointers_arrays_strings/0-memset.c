  1  #include "main.h"
  2
  3 /**
  4   * _memset - Fill memory with a constant byte
  5   * @s: memory area to fill
  6   * @b: constant byte to fill
  7   * @n: bytes of memory area to fill
  8   *
  9   * Return: the memory area filled
 10   */
 11 char *_memset(char *s, char b, unsigned int n)
 12 {
 13         unsigned int a;
 14
 15         for (a = 0; a < n; a++)
 16         {
 17                 s[a] = b;
 18         }
 19
 20         return (s);
 21 }

