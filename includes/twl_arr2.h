/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_arr2.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 14:31:03 by juschaef          #+#    #+#             */
/*   Updated: 2015/03/01 17:21:12 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWL_ARR2_H
# define TWL_ARR2_H

void	*twl_arr2_new(int rows, int cols,
		void *(*new_fn)(int y, int x, void *context), void *context);
void	twl_arr2_del(void *arr2, void (*del_fn)(void *elem));

void	twl_arr2_iter(void *map_, void (*iter_fn)(void *data, void *context),
																void *context);
void	twl_arr2_iter_coord(void *arr2_,
	void (*iter_fn)(void *arr2, int y, int x, void *context), void *context);
void	*twl_arr2_rotate(void *arr_, int times);

#endif