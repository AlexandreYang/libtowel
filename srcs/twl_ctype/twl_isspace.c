/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_isspace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 19:24:09 by yyang             #+#    #+#             */
/*   Updated: 2015/01/30 15:38:22 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		twl_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
	|| c == '\r' || c == ' ');
}
