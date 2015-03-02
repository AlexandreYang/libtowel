/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/28 12:12:23 by yyang             #+#    #+#             */
/*   Updated: 2015/01/25 16:16:05 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "twl_printf.h"

void	pf_print_fd(t_pf *pf, int fd)
{
	write(fd, pf->output, pf->output_len);
}
