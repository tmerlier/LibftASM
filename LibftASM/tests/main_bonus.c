/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 15:00:22 by tmerlier          #+#    #+#             */
/*   Updated: 2015/03/27 15:03:48 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <libasm.h>

int main(void)
{
	printf("\033[0m/////////////// FT_PUTS_FD ///////////////\n");
	int fd = open("test.txt", O_WRONLY | O_CREAT);
	ft_putstr_fd("test de la mort", fd);
	printf("\033[0mLe text a bien été écrit.\nSi si, je te jure regarde dans le fichier.\n\n\n");
	close(fd);

	printf("\033[0m/////////////// FT_PUTSTR ///////////////\n");
	ft_putstr("Test ft_putstr() !\n\n\n");

	printf("\033[0m/////////////// FT_PUTS_CYAN ///////////////\n");
	ft_putstr_cyan("Je suis écrit en cyan!\n");
	ft_puts("Pas moi :'(");
	return 0;
}
