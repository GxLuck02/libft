/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttreichl <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:03:40 by ttreichl          #+#    #+#             */
/*   Updated: 2023/10/18 15:18:12 by ttreichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define  LIBFT_H
# include <string.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	*ft_memset(void *ptr, int value, size_t len);

void	ft_bzero(void *ptr, size_t nbroct);

size_t	ft_strlen(const	char *word);
#endif
