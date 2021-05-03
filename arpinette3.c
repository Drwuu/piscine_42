#include <assert.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

void test_strcmp(void)
{
	char *s, *s1, *s2;

	s = "Hello, world!";
	assert(ft_strcmp(s, s) == strcmp(s, s));

	s1 = "Helio";
	s2 = "Hello";
	assert(ft_strcmp(s1, s2) == strcmp(s1, s2));
	assert(ft_strcmp(s2, s1) == strcmp(s2, s1));

	s1 = "\0Helio";
	s2 = "\0Hello";
	assert(ft_strcmp(s1, s2) == strcmp(s1, s2));
	assert(ft_strcmp(s2, s1) == strcmp(s2, s1));

	s1 = "Hel\xefo";
	s2 = "Hello";
	assert(ft_strcmp(s1, s2) == strcmp(s1, s2));
	assert(ft_strcmp(s2, s1) == strcmp(s2, s1));

	s1 = "Hel\xefo";
	s2 = "Hel\xedo";
	assert(ft_strcmp(s1, s2) == strcmp(s1, s2));
	assert(ft_strcmp(s2, s1) == strcmp(s2, s1));

	s1 = "Hel\x0ao";
	s2 = "Hel\x0ao";
	assert(ft_strcmp(s1, s2) == strcmp(s1, s2));
	assert(ft_strcmp(s2, s1) == strcmp(s2, s1));
}

void test_strncmp(void)
{
	char *s, *s1, *s2;

	s = "Hello, world!";
	assert(ft_strncmp(s, s, 13) == strncmp(s, s, 13));
	assert(ft_strncmp(s, s, 50) == strncmp(s, s, 50));
	assert(ft_strncmp(s, s, 5) == strncmp(s, s, 5));
	assert(ft_strncmp(s, s, 1) == strncmp(s, s, 1));
	assert(ft_strncmp(s, s, 0) == strncmp(s, s, 0));

	s1 = "Helio";
	s2 = "Hello";
	assert(ft_strncmp(s1, s2, 3) == strncmp(s1, s2, 3));
	assert(ft_strncmp(s2, s1, 3) == strncmp(s2, s1, 3));
	assert(ft_strncmp(s1, s2, 5) == strncmp(s1, s2, 5));
	assert(ft_strncmp(s2, s1, 5) == strncmp(s2, s1, 5));

	s1 = "\0Helio";
	s2 = "\0Hello";
	assert(ft_strncmp(s1, s2, 6) == strncmp(s1, s2, 6));
	assert(ft_strncmp(s2, s1, 6) == strncmp(s2, s1, 6));
	assert(ft_strncmp(s1, s2, 1) == strncmp(s1, s2, 1));
	assert(ft_strncmp(s2, s1, 1) == strncmp(s2, s1, 1));
	assert(ft_strncmp(s1, s2, 0) == strncmp(s1, s2, 0));
	assert(ft_strncmp(s2, s1, 0) == strncmp(s2, s1, 0));

	s1 = "Hel\xefo";
	s2 = "Hello";
	assert(ft_strncmp(s1, s2, 5) == strncmp(s1, s2, 5));
	assert(ft_strncmp(s2, s1, 5) == strncmp(s2, s1, 5));

	s1 = "Hel\xefo";
	s2 = "Hel\xedo";
	assert(ft_strncmp(s1, s2, 5) == strncmp(s1, s2, 5));
	assert(ft_strncmp(s2, s1, 5) == strncmp(s2, s1, 5));

	s1 = "Hel\x0ao";
	s2 = "Hel\x0ao";
	assert(ft_strncmp(s1, s2, 5) == strncmp(s1, s2, 5));
	assert(ft_strncmp(s2, s1, 5) == strncmp(s2, s1, 5));
}

void test_strcat(void)
{
	{
		char *src = "Hello!";
		char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strcat(dest1, src) == dest1);
		assert(strcat(dest2, src) == dest2);
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "";
		char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strcat(dest1, src) == dest1);
		assert(strcat(dest2, src) == dest2);
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "lol";
		char dest1[50] = { [ 1 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 1 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strcat(dest1, src) == dest1);
		assert(strcat(dest2, src) == dest2);
		assert(memcmp(dest1, dest2, 50) == 0);
	}
}

void test_strncat(void)
{
	{
		char *src = "Hello!";
		char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strncat(dest1, src, 3) == dest1);
		assert(strncat(dest2, src, 3) == dest2);
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "Hello!";
		char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strncat(dest1, src, 20) == dest1);
		assert(strncat(dest2, src, 20) == dest2);
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "Hello!";
		char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strncat(dest1, src, 0) == dest1);
		assert(strncat(dest2, src, 0) == dest2);
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "Hello!";
		char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strncat(dest1, src, 1) == dest1);
		assert(strncat(dest2, src, 1) == dest2);
		assert(memcmp(dest1, dest2, 50) == 0);
	}
}

void test_strstr(void)
{
	{
		char *str = "Hello, world!";
		char *to_find = str;
		assert(ft_strstr(str, to_find) == strstr(str, to_find));
	}
	{
		char *str = "";
		char *to_find = "Hello, world!";
		assert(ft_strstr(str, to_find) == strstr(str, to_find));
	}
	{
		char *str = "Hello, world!";
		char *to_find = "wo";
		assert(ft_strstr(str, to_find) == strstr(str, to_find));
	}
	{
		char *str = "Hello, world!";
		char *to_find = "";
		assert(ft_strstr(str, to_find) == strstr(str, to_find));
	}
	{
		char *str = "";
		char *to_find = "";
		assert(ft_strstr(str, to_find) == strstr(str, to_find));
	}
	{
		char *str = "lololololololololo";
		char *to_find = "ololo";
		assert(ft_strstr(str, to_find) == strstr(str, to_find));
	}
	{
		char *str = "blazatcar";
		char *to_find = "blacar";
		assert(ft_strstr(str, to_find) == strstr(str, to_find));
	}
	{
		char *str = "blablacar";
		char *to_find = "blacar";
		assert(ft_strstr(str, to_find) == strstr(str, to_find));
	}
}

void test_strlcat(void)
{
	{
		char *src = "Hello!";
		char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strlcat(dest1, src, 3) == strlcat(dest2, src, 3));
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "Hello!";
		char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strlcat(dest1, src, 20) == strlcat(dest2, src, 20));
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "Hello!";
		char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strlcat(dest1, src, 0) == strlcat(dest2, src, 0));
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "Hello!";
		char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
		char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };

		assert(ft_strlcat(dest1, src, 1) == strlcat(dest2, src, 1));
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "dfghsklks";
		char dest1[50] = { [ 1 ... 11 ] = '4', [ 12 ... 48 ] = '2' };
		char dest2[50] = { [ 1 ... 11 ] = '4', [ 12 ... 48 ] = '2' };

		assert(ft_strlcat(dest1, src, 5) == strlcat(dest2, src, 5));
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "dfghsklks";
		char dest1[50] = { [ 1 ... 11 ] = '4', [ 12 ... 48 ] = '2' };
		char dest2[50] = { [ 1 ... 11 ] = '4', [ 12 ... 48 ] = '2' };

		assert(ft_strlcat(dest1, src, 20) == strlcat(dest2, src, 20));
		assert(memcmp(dest1, dest2, 50) == 0);
	}
	{
		char *src = "dfghsklks";
		char dest1[50] = { [ 1 ... 11 ] = '4', [ 12 ... 48 ] = '2' };
		char dest2[50] = { [ 1 ... 11 ] = '4', [ 12 ... 48 ] = '2' };

		assert(ft_strlcat(dest1, src, 0) == strlcat(dest2, src, 0));
		assert(memcmp(dest1, dest2, 50) == 0);
	}
}

int main(void)
{
	test_strcmp();	
	test_strncmp();	
	test_strcat();
	test_strncat();
	test_strstr();
	test_strlcat();
}
