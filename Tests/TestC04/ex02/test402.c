/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test402.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 08:48:33 by mroux             #+#    #+#             */
/*   Updated: 2019/08/05 08:51:10 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		main(void)
{
	 ft_putnbr(-0);
//	 ft_putnbr(0);
	 ft_putnbr(-2147483648);
	ft_putnbr(68723);
	ft_putnbr(-1);

	return (0);
}
