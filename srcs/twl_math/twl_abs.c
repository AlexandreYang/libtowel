/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_abs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 19:19:58 by yyang             #+#    #+#             */
/*   Updated: 2015/01/30 16:02:14 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		twl_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
