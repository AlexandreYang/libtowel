/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_set_conv_str_fns_wchar.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 18:00:34 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/13 11:48:18 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "twl_printf.h"

#define VOID_PTR_TO(type, value) *((type *)(value))

char	*pf_conv_str_wstr(void *val)
{
	if (!val)
		return (twl_strdup(STRING_OF_NULL));
	return (twl_wstr_to_str((wchar_t *)(val)));
}

char	*pf_conv_str_wchar(void *val)
{
	return (freevl(twl_wstr_to_str((wchar_t *)(val)), val));
}

char	*pf_conv_str_hex_up(void *val)
{
	return (twl_strupcase(pf_conv_str_hex(val)));
}

char	*pf_conv_str_hex_ul_up(void *val)
{
	return (twl_strupcase(pf_conv_str_hex_long(val)));
}

char	*pf_conv_str_unsign(void *val)
{
	return (freevl(twl_lltoa(VOID_PTR_TO(unsigned int, val)), val));
}
