/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placevalue.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 23:20:03 by jochang           #+#    #+#             */
/*   Updated: 2018/04/26 01:13:05 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_placevalue(int n)
{
	int count;

	count = n ? 0 : 1;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}
