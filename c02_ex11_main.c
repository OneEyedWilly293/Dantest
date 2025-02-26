#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int main()
{
	char str1[] = "Hello\nWorld\t!";	//ASCII =10 -> HEX = 0a && ASCII = 9 -> HEX = 09
	char str2[] = "A\2BC";		//ASCII 2 -> /02
	char str3[] = "CouCou\ntu vas bien";

	ft_putstr_non_printable(str1);		//Expected: Hello\0aWorld\09!
	write(1, "\n", 1);

	ft_putstr_non_printable(str2);		//Expected: A\02BC
	write(1, "\n", 1);

	ft_putstr_non_printable(str3);		//CouCou\0atu vas bien
	write(1, "\n", 1);
	return (0);
}
