/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:34:33 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 15:29:33 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int n;
	int i;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 && str >= 0) || str[i] == 127)
		{
			n = 0;
			break ;
		}
		i++;
	}
	return (n);
}
