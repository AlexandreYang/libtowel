/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:29:23 by yyang             #+#    #+#             */
/*   Updated: 2014/11/12 22:06:29 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		twl_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}