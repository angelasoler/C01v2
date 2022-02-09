/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:04:35 by asoler            #+#    #+#             */
/*   Updated: 2022/02/09 14:08:28 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	d;
	int	m;

	d = a / b;
	m = a % b;
	*div = d;
	*mod = m;
}
// adress of d and m just exits inside the funtion
