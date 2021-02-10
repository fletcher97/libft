#include <stdio.h>

#include "libft.h"

char * hex = "0123456789abcdef";
char * HEX = "0123456789ABCDEF";

int main() {
	// printf("%s\n", ft_itoa_base(0, HEX));
	// printf("%s\n", ft_itoa_base(15, HEX));
	// printf("%s\n", ft_itoa_base(-15, HEX));
	// printf("%s\n", ft_itoa_base(15 + 1, HEX));
	// printf("%s\n", ft_itoa_base(-(15 + 1), HEX));
	// printf("%s\n", ft_itoa_base(8124, HEX));
	// printf("%s\n", ft_itoa_base(-9874, HEX));
	// printf("%s\n", ft_itoa_base(543000, HEX));
	// printf("%s\n", ft_itoa_base(-2147483648LL, HEX));
	// printf("%s\n", ft_itoa_base(2147483647, HEX));
	char str[] = "bonjour";
	printf("%p\n%p\n", str, ft_strchr(str, 'j'));
	return 0;
}
