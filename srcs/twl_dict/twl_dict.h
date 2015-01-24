/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twl_dict.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 13:20:27 by yyang             #+#    #+#             */
/*   Updated: 2015/01/24 19:34:37 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LDICT_H
# define LDICT_H
# include <twl_lst.h>

t_twl_lst_elem	*twl_dict_set(t_lst *lst, char *key, void *data, void (*delfn)());
void			twl_dict_add(t_lst *lst, char *key, void *data);
void			*twl_dict_get(t_lst *lst, char *key);
void			twl_dict_del_by_key(t_lst *lst, char *key, void (*delfn)());

#endif