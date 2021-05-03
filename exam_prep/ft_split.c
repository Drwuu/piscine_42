/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:45:07 by lwourms           #+#    #+#             */
/*   Updated: 2020/10/01 19:22:25 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int 	is_charset(char *charset, char c)
{
	int i;


	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int i;
	int words;
	int new_word;

	i = 0;
	new_word = 1;
	words = 0;
	while (str[i])
	{
		if (!is_charset(charset, str[i]))
		{
			if (new_word)
			{
				words++;
				new_word = 0;
			}
		}
		else
			new_word = 1;
		i++;
	}
	return (words);
}

int		count_char(char *str, char *charset, int i)
{
	int char_nbr;

	char_nbr = 0;
	while (str[i])
	{
		if (!is_charset(charset, str[i]))
			char_nbr++;
		else
			break ;
		i++;
	}
	//printf("char count = %d\n", char_nbr);
	return (char_nbr);
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	char **f_str;
	char *b_str;
	int words_nbr;
	int new_word;

	words_nbr = count_words(str, charset);
	new_word = 1;
	if (!(f_str = malloc((sizeof(char *) * words_nbr) + 1)))
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!is_charset(charset, str[i]))
		{
			if (new_word)
			{
				printf("b str = %s\n", b_str);
				f_str[j++] = b_str;
				if (!(b_str = malloc(sizeof(char) * count_char(str, charset, i) + 1)))
					return (0);
				new_word = 0;
				j = 0;
			}
			b_str[j++] = str[i];
		}
		else
			new_word = 1;
		i++;
	}
	//printf("i = %d\n", i);
	f_str[j] = 0;
	return (f_str);
}

int main()
{
	char **str;
	int i;

	str = ft_split("    Coucou je suis un super saiyen", " ");
	i = 0;
	while (str[i])
		printf("%s\n", str[i++]);
}
