/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 18:20:56 by tmerlier          #+#    #+#             */
/*   Updated: 2015/06/05 13:05:25 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libasm.h>
#include <string.h>
#include <fcntl.h>

int main(void)
{
	int		digit = '5';
	int		alpha = 'H';

	printf("/////////////// FT_ISDIGIT ///////////////\n");
	printf("ft_isdigit(%c) = %d\n", digit, ft_isdigit(digit));
	printf("ft_isdigit(%c) = %d\n\n\n", alpha, ft_isdigit(alpha));

	printf("/////////////// FT_ISALPHA ///////////////\n");
	printf("ft_isalpha(%c) = %d\n", digit, ft_isalpha(digit));
	printf("ft_isalpha(%c) = %d\n\n\n", alpha, ft_isalpha(alpha));

	printf("/////////////// FT_ISASCII ///////////////\n");
	printf("ft_isascii(-1) = %d\n", ft_isascii(-1));
	printf("ft_isascii(42) = %d\n", ft_isascii(42));
	printf("ft_isascii(128) = %d\n\n\n", ft_isascii(128));

	int		ascii_del = 127; /* 127 = del*/
	int		ascii_dc4 = 20; /* 20 = dc4 */
	int		spc = ' ';

	printf("/////////////// FT_ISPRINT ///////////////\n");
	printf("ft_isprint(%c) = %d\n", digit, ft_isprint(digit));
	printf("ft_isprint(%c) = %d\n", alpha, ft_isprint(alpha));
	printf("ft_isprint(%c) = %d\n", spc, ft_isprint(spc));
	printf("ft_isprint('dc4') = %d\n", ft_isprint(ascii_dc4));
	printf("ft_isprint('del') = %d\n\n\n", ft_isprint(ascii_del));

	printf("/////////////// FT_ISALNUM ///////////////\n");
	printf("ft_isalnum(%c) = %d\n", digit, ft_isalnum(digit));
	printf("ft_isalnum(%c) = %d\n", alpha, ft_isalnum(alpha));
	printf("ft_isalnum(%c) = %d\n\n\n", spc, ft_isalnum(spc));

	int		maj = 'Z';
	int		min = 'z';

	printf("/////////////// FT_TOUPPER ///////////////\n");
	printf("ft_toupper(%c) = %c\n", maj, ft_toupper(maj));
	printf("ft_toupper(%c) = %c\n\n\n", min, ft_toupper(min));

	printf("/////////////// FT_TOLOWER ///////////////\n");
	printf("ft_tolower(%c) = %c\n", maj, ft_tolower(maj));
	printf("ft_tolower(%c) = %c\n\n\n", min, ft_tolower(min));

	char	*len = "01234";

	printf("/////////////// FT_STRLEN ///////////////\n");
	printf("ft_strlen(%s) = %zu\n\n\n", len, ft_strlen(len));

	char	str[] = "Born2Code";

	printf("/////////////// FT_BZERO ///////////////\n");
	printf("str = %s\n", str);
	ft_bzero(str + 4, 5);
	printf("ft_bzero(\"Born2Code\" + 4, 5) = %s\n\n\n", str);

	char	str1[] = "École ";
	char	str2[] = "42";
	char	*str3;

	printf("/////////////// FT_STRCAT ///////////////\n");
	printf("str1 = '%s'\nstr2 = '%s'\n", str1,str2);
	str3 = (char *)malloc(sizeof(char) * 15);
	str3 = ft_strcat(str1, str2);
	printf("ft_strcat() = '%s'\n\n\n", str3);

	printf("/////////////// FT_PUTS ///////////////\n");
	ft_puts("aaa");
	ft_puts("Bien le bonjour");
	ft_puts(NULL);
	ft_puts("\n");

	char	*strset = strdup("Born2Code");

	printf("/////////////// FT_MEMSET ///////////////\n");
	printf("strset = '%s'\n", strset);
	ft_memset(strset, 'C', 3);
	printf("ft_memset(strset, 'C', 3) = '%s'\n\n\n", strset);
	free(strset);

	char	*src_cpy = strdup("Coucou");
	char	*dest_cpy = strdup("Bingo");

	printf("/////////////// FT_MEMCPY ///////////////\n");
	printf("src_cpy = '%s'\ndest_cpy = '%s'\n", src_cpy, dest_cpy);
	ft_memcpy(dest_cpy, src_cpy, 3);
	printf("ft_memcpy(src_cpy, dest_cpy, 3) = '%s'\n\n\n", dest_cpy);

	char	*dup;
	char	*dup_empty;

	dup = ft_strdup("Hello world");
	dup_empty = ft_strdup("");

	printf("/////////////// FT_STRDUP ///////////////\n");
	printf("dup = '%s'\n", dup);
	printf("dup_empty = '%s'\n", dup_empty);
	free(dup);
	printf("dup has been freed\n");
	free(dup_empty);
	printf("dup_empty has been freed\n\n\n");

	printf("/////////////// FT_CAT ///////////////\n");
	int fd = open("Makefile", O_RDONLY);
	ft_cat(fd);
	close(fd);
	return (0);
}

























