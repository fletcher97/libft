#include <stdio.h>
#include <ctype.h>

#include "ft_stack.h"

// char * hex = "0123456789abcdef";
// char * HEX = "0123456789ABCDEF";

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
	// char str[] = "bonjour";
	// printf("%p\n%p\n", str, ft_strchr(str, 'j'));
	// for (int i = 0; i < 128; i++)
	// {
	// 	int a = isxdigit(i);
	// 	int b = ft_isxdigit(i);
	// 	printf("%03d : %d : %d : %d\n", i, !!a, b, (!!a) == b);
	// }
	t_stack *stack = ft_stacknew();
	ft_stackpush(stack, (void*)5);
	ft_stackpush(stack, (void*)7);
	ft_stackpush(stack, (void*)1);
	ft_stackpush(stack, (void*)0);
	ft_stackpush(stack, (void*)5);
	while (ft_stacksize(stack))
	{
		printf("%ld\n", (long)ft_stackpeek(stack));
		ft_stackpop(stack);
	}
	ft_stackdestroy(stack, NULL);
	return 0;
}
