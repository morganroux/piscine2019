/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test212.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 12:58:24 by mroux             #+#    #+#             */
/*   Updated: 2019/08/04 21:23:39 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	char	str[100] = "Hello !000000000000000000000000000000000000000000000000000000! toiscine 34300";
	str[10] = 0xeb;
	str[3] = 0x0a;
	str[20] = 0xEE;
	void 	*addr;

	addr = str;
	ft_print_memory(addr, 100);
}
