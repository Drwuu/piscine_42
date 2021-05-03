#include <assert.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
int ft_strupcase(char *str);
int ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putstr_non_printable(char *str);
void *ft_print_memory(void *addr, unsigned int size);
int main(void)
{
	char *src1 = "Hello\0world!";
	char dest1a[20] = { [0 ... 19] = 'm' };
	char dest1b[20] = { [0 ... 19] = 'm' };

	assert(ft_strcpy(dest1a, src1) == dest1a);
	assert(strcpy(dest1b, src1) == dest1b);
	assert(memcmp(dest1a, dest1b, 20) == 0);

	char *src2 = "Hello\0world!";
	char dest2a[20] = { [0 ... 19] = 'm' };
	char dest2b[20] = { [0 ... 19] = 'm' };

	assert(ft_strncpy(dest2a, src2, 10) == dest2a);
	assert(strncpy(dest2b, src2, 10) == dest2b);
	assert(memcmp(dest2a, dest2b, 20) == 0);

	char *src3 = "Hello\0world!";
	char dest3a[20] = { [0 ... 19] = 'm' };
	char dest3b[20] = { [0 ... 19] = 'm' };

	assert(ft_strncpy(dest3a, src3, 3) == dest3a);
	assert(strncpy(dest3b, src3, 3) == dest3b);
	assert(memcmp(dest3a, dest3b, 20) == 0);

	char *src4 = "Hello\0world!";
	char dest4a[20] = { [0 ... 19] = 'm' };
	char dest4b[20] = { [0 ... 19] = 'm' };

	assert(ft_strncpy(dest4a, src4, 0) == dest4a);
	assert(strncpy(dest4b, src4, 0) == dest4b);
	assert(memcmp(dest4a, dest4b, 20) == 0);

	assert(ft_str_is_alpha(""));
	assert(ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	assert(ft_str_is_alpha("abcdefghijklmnopqrstuvwxyz"));
	assert(!ft_str_is_alpha("dfhs04560456dsffsdfs"));

	assert(ft_str_is_numeric(""));
	assert(ft_str_is_numeric("0123456789"));
	assert(ft_str_is_numeric("1020102050405698978989"));
	assert(!ft_str_is_numeric("dfhs04560456dsffsdfs"));

	assert(ft_str_is_lowercase(""));
	assert(!ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	assert(ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"));
	assert(!ft_str_is_lowercase("dfhs04560456dsffsdfs"));

	assert(ft_str_is_uppercase(""));
	assert(ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	assert(!ft_str_is_uppercase("abcdefghijklmnopqrstuvwxyz"));
	assert(!ft_str_is_uppercase("dfhs04560456dsffsdfs"));

	assert(ft_str_is_printable(""));
	assert(ft_str_is_printable(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"));
	assert(ft_str_is_printable("abcdefghijklmnopqrstuvwxyz"));
	assert(ft_str_is_printable("dfhs04560456dsffsdfs"));
	assert(!ft_str_is_printable("\xef\x05"));

	char case1[] = "abcdefghijklmnopqrstuvwxyz";
	ft_strupcase(case1);
	assert(strcmp(case1, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 0);
	ft_strlowcase(case1);
	assert(strcmp(case1, "abcdefghijklmnopqrstuvwxyz") == 0);

	char case2[] = "ABCDEfghijklmNOPQRStuvwxyZ012";
	ft_strupcase(case2);
	assert(strcmp(case2, "ABCDEFGHIJKLMNOPQRSTUVWXYZ012") == 0);
	ft_strlowcase(case2);
	assert(strcmp(case2, "abcdefghijklmnopqrstuvwxyz012") == 0);

	char case3[] = "";
	ft_strupcase(case3);
	assert(strcmp(case3, "") == 0);
	ft_strlowcase(case3);
	assert(strcmp(case3, "") == 0);

	char capitalize1[] = "salut, coMMEnt tu vas ? 42mots quarante-deux; cinquante+et+un";
	assert(ft_strcapitalize(capitalize1) == capitalize1);
	assert(strcmp(capitalize1, "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un") == 0);
	char *strl1src = "Hello\0world!";
	char strl1desta[20] = { [0 ... 19] = 'm' };
	char strl1destb[20] = { [0 ... 19] = 'm' };

	assert(ft_strlcpy(strl1desta, strl1src, 3) == 5);
	assert(strlcpy(strl1destb, strl1src, 3) == 5);
	assert(memcmp(strl1desta, strl1destb, 20) == 0);

	char *strl2src = "Hello\0world!";
	char strl2desta[20] = { [0 ... 19] = 'm' };
	char strl2destb[20] = { [0 ... 19] = 'm' };

	assert(ft_strlcpy(strl2desta, strl2src, 15) == 5);
	assert(strlcpy(strl2destb, strl2src, 15) == 5);
	assert(memcmp(strl2desta, strl2destb, 20) == 0);

	char *strl3src = "Hello\0world!";
	char strl3desta[20] = { [0 ... 19] = 'm' };
	char strl3destb[20] = { [0 ... 19] = 'm' };

	assert(ft_strlcpy(strl3desta, strl3src, 0) == 5);
	assert(strlcpy(strl3destb, strl3src, 0) == 5);
	assert(memcmp(strl3desta, strl3destb, 20) == 0);

	char *strl4src = "Hello\0world!";
	char strl4desta[20] = { [0 ... 19] = 'm' };
	char strl4destb[20] = { [0 ... 19] = 'm' };

	assert(ft_strlcpy(strl4desta, strl4src, 1) == 5);
	assert(strlcpy(strl4destb, strl4src, 1) == 5);
	assert(memcmp(strl4desta, strl4destb, 20) == 0);
	ft_putstr_non_printable("Coucou\ntu vas bie\xef ?");
	write(1, "\n", 1);

	/*char memory[] = {
		0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
		0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
		0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
		0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
		0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
		0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
		0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
		0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
		0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
		0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f,
		0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57,
		0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f,
	};
	
	printf("Starting adresses must be: %p and %p.\n", memory, memory + 5);

	assert(memory == ft_print_memory((void*)memory, 0x10 * 4));
	assert(memory == ft_print_memory((void*)memory, 0x10 * 4 + 3));
	assert(memory + 5 == ft_print_memory((void*)memory + 5, 0x10 * 4 + 12));
	assert(memory + 5 == ft_print_memory((void*)memory + 5, 0x10 * 4 + 8));
	assert(memory + 5 == ft_print_memory((void*)memory + 5, 0));

	return (0);*/
}
