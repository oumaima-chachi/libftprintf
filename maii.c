#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main()
{
	printf("\n===============================================================================\n\n");
	int ptf_count = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%% 99", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n");
	int ftptf_count = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%% 99", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n\n===============================================================================");
	printf("\n\n");
	for (int i = 0; i < 20; i++)
	{
		ft_printf("ft_printf: ");
		ftptf_count += ft_printf("%p\n", LONG_MAX + i);
		printf("printf: ");
		ptf_count += printf("%p\n", LONG_MAX + i);
		printf("\n");
	}
	printf("===============================================================================\n\n");
	for (int i = 0; i < 20; i++)
	{
		ft_printf("ft_printf: 	%d\t%i\t%x\t%p\n", i, i, i, i);
		printf("printf: 	%d\t%i\t%x\t%p\n\n", i, i, i, i);
	}
	ft_printf("ft_printf:	%d\t%d\t%d\n", 01337, 0x1337, 0b00001);
	printf("printf:		%d\t%d\t%d\n\n", 01337, 0x1337, 0b00001);
	ft_printf("ft_printf:	%i\t%i\t%i\n", 01337, 0x1337, 0b00001);
	printf("printf:		%i\t%i\t%i\n\n", 01337, 0x1337, 0b00001);	
	printf("===============================================================================\n\n");
	ptf_count += printf("1, %u \n", 0);
	ptf_count += printf("2, %u \n", -1);
	ptf_count += printf("3, %u \n", 1);
	ptf_count += printf("4, %u \n", 9);
	ptf_count += printf("5, %u \n", 10);
	ptf_count += printf("6, %u \n", 11);
	ptf_count += printf("7, %u \n", 15);
	ptf_count += printf("8, %u \n", 16);
	ptf_count += printf("9, %u \n", 17);
	ptf_count += printf("10, %u \n", 99);
	ptf_count += printf("11, %u \n", 100);
	ptf_count += printf("12, %u \n", 101);
	ptf_count += printf("13, %u \n", -9);
	ptf_count += printf("14, %u \n", -10);
	ptf_count += printf("15, %u \n", -11);
	ptf_count += printf("16, %u \n", -14);
	ptf_count += printf("17, %u \n", -15);
	ptf_count += printf("18, %u \n", -16);
	ptf_count += printf("19, %u \n", -99);
	ptf_count += printf("20, %u \n", -100);
	ptf_count += printf("21, %u \n", -101);
	ptf_count += printf("22, %u \n", INT_MAX);
	ptf_count += printf("23, %u \n", INT_MIN);
	ptf_count += printf("24, %u \n", LONG_MAX);
	ptf_count += printf("25, %u \n", LONG_MIN);
	ptf_count += printf("26, %u \n", UINT_MAX);
	ptf_count += printf("27, %d \n", ULONG_MAX);
	ptf_count += printf("28, %p \n", 9223372036854775807LL);
	ptf_count += printf("29, %u %u %u %u %u %u %u\n\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ptf_count += printf("30, %d \n", INT_MAX);
	ptf_count += printf("31, %d \n", INT_MIN);
	ptf_count += printf("32, %x \n", INT_MAX);
	ptf_count += printf("33, %x \n", INT_MIN);	
	ptf_count += printf("34, %X \n", INT_MAX);
	ptf_count += printf("35, %X \n", INT_MIN);			
	ptf_count += printf("36, %X \n", UINT_MAX);		
	ptf_count += printf("37, %X \n", ULONG_MAX);		
	ptf_count += printf("38, %X \n", 9223372036854775807LL);	
	ptf_count += printf("39, %% \n", 9223372036854775807LL);		
	ptf_count += printf("40, %% \n", 9223372036854775807LL);

	printf("\n===============================================================================\n\n");

	ftptf_count += ft_printf("1, %u \n", 0);
	ftptf_count += ft_printf("2, %u \n", -1);
	ftptf_count += ft_printf("3, %u \n", 1);
	ftptf_count += ft_printf("4, %u \n", 9);
	ftptf_count += ft_printf("5, %u \n", 10);
	ftptf_count += ft_printf("6, %u \n", 11);
	ftptf_count += ft_printf("7, %u \n", 15);
	ftptf_count += ft_printf("8, %u \n", 16);
	ftptf_count += ft_printf("9, %u \n", 17);
	ftptf_count += ft_printf("10, %u \n", 99);
	ftptf_count += ft_printf("11, %u \n", 100);
	ftptf_count += ft_printf("12, %u \n", 101);
	ftptf_count += ft_printf("13, %u \n", -9);
	ftptf_count += ft_printf("14, %u \n", -10);
	ftptf_count += ft_printf("15, %u \n", -11);
	ftptf_count += ft_printf("16, %u \n", -14);
	ftptf_count += ft_printf("17, %u \n", -15);
	ftptf_count += ft_printf("18, %u \n", -16);
	ftptf_count += ft_printf("19, %u \n", -99);
	ftptf_count += ft_printf("20, %u \n", -100);
	ftptf_count += ft_printf("21, %u \n", -101);
	ftptf_count += ft_printf("22, %u \n", INT_MAX);
	ftptf_count += ft_printf("23, %u \n", INT_MIN);
	ftptf_count += ft_printf("24, %u \n", LONG_MAX);
	ftptf_count += ft_printf("25, %u \n", LONG_MIN);
	ftptf_count += ft_printf("26, %u \n", UINT_MAX);
	ftptf_count += ft_printf("27, %d \n", ULONG_MAX);
	ftptf_count += ft_printf("28, %p \n", 9223372036854775807LL);
	ftptf_count += ft_printf("29, %u %u %u %u %u %u %u\n\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);	
	ftptf_count += ft_printf("30, %d \n", INT_MAX);
	ftptf_count += ft_printf("31, %d \n", INT_MIN);
	ftptf_count += ft_printf("32, %x \n", INT_MAX);
	ftptf_count += ft_printf("33, %x \n", INT_MIN);	
	ftptf_count += ft_printf("34, %X \n", INT_MAX);
	ftptf_count += ft_printf("35, %X \n", INT_MIN);		
	ftptf_count += ft_printf("36, %X \n", UINT_MAX);		
	ftptf_count += ft_printf("37, %X \n", ULONG_MAX);		
	ftptf_count += ft_printf("38, %X \n", 9223372036854775807LL);		
	ftptf_count += ft_printf("39, %% \n", 9223372036854775807LL);		
	ftptf_count += ft_printf("40, %% \n", 9223372036854775807LL);		
	ftptf_count += ft_printf("\n\n\n\n\n\n\t\n");
	ptf_count += printf("\n\n\n\n\n\n\t\n");
	ft_printf("========= FT_PRINTF ==========\n\nprintf total score: %d\nft_printf total score: %d\n\n", ptf_count, ftptf_count);
	printf("=========== PRINTF ===========\n\nprintf total score: %d\nft_printf total score: %d\n\n==============================\n\n", ptf_count, ftptf_count);
	return(0);
}
int main ()
{
	
		int k =ft_printf (NULL);
	ft_printf ("%d",k);
	
}