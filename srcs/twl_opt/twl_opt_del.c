/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_opt_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 16:23:02 by yyang             #+#    #+#             */
/*   Updated: 2015/02/25 12:48:46 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <twl_opt.h>
#include <stdlib.h>
#include <twl_arr.h>
#include <twl_xstring.h>
#include <twl_opt_elem.h>

void	twl_opt_del(t_twl_opt *twl_opt)
{
	// free(twl_opt->cmd);
	// twl_lst_del(twl_opt->opts, twl_opt_elem_del);
	// twl_lst_del(twl_opt->non_opt_args, free);
	// free(twl_opt);
	(void)twl_opt;
}