/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 20:08:52 by yyang             #+#    #+#             */
/*   Updated: 2014/11/12 22:24:09 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*twl_strupcase(char *str)
{
	int i;

	if (!str)
		return (void *)0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}