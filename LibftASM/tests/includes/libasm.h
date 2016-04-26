/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 13:08:18 by tmerlier          #+#    #+#             */
/*   Updated: 2015/03/27 14:31:23 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

/*
** PART 1
*/
void		ft_bzero(void *s, size_t n);
char		*ft_strcat(char *restrict s1, const char *restrict s2);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_puts(const char *s);

/*
** PART 2
*/
size_t		ft_strlen(const char *s);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
char		*ft_strdup(const char *s1);

/*
** PART 3
*/
void		ft_cat(int fd);

/*
** BONUS
*/
void		ft_putstr(const char *s);
int			ft_putstr_fd(const char *s, int fd);
void		ft_putstr_cyan(const char *s);

#endif
