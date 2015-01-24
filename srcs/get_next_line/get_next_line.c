/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 13:37:49 by yyang             #+#    #+#             */
/*   Updated: 2015/01/14 13:47:38 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

static char		*ft_strchr_nl(const char *s)
{
	return (ft_strchr(s, '\n'));
}

static int		ft_read_buffer(int fd, char **s_str, char **line)
{
	int		ret;
	char	*temp;
	char	buf[BUFF_SIZE + 1];

	ret = 0;
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (ret < 0)
			return (-1);
		buf[ret] = '\0';
		temp = ft_strnew(ft_strlen(*line) + ft_strlen(buf));
		if (!temp)
			return (-1);
		ft_strcpy(temp, *line);
		*line = temp;
		if (ft_strchr_nl(buf))
		{
			ft_strcpy(*s_str, ft_strchr_nl(buf));
			ft_strncat(*line, buf, ft_strchr_nl(buf) - buf);
			ft_strcpy(*s_str, *s_str + 1);
			return (1);
		}
		ft_strcat(*line, buf);
	}
	return (ret < 0 ? -1 : 0);
}

int				do_get_next_line(int const fd, char **line)
{
	static char		*s_str[MAX_PARALLEL_FILES];
	int				ret;

	*line = ft_strnew(BUFF_SIZE + 1);
	s_str[fd] = (!s_str[fd]) ? ft_strnew(BUFF_SIZE + 1) : s_str[fd];
	if (!*line || !s_str[fd])
		return (-1);
	if (ft_strchr_nl(s_str[fd]))
	{
		ft_strncpy(*line, s_str[fd], ft_strchr_nl(s_str[fd]) - s_str[fd]);
		ft_strcpy(s_str[fd], ft_strchr_nl(s_str[fd]));
		ft_strcpy(s_str[fd], s_str[fd] + 1);
		return (1);
	}
	ft_strcat(*line, s_str[fd]);
	ret = ft_read_buffer(fd, &s_str[fd], line);
	if (ret == 1)
		return (1);
	if (ret == -1)
		return (-1);
	if (ret == 0 && ft_strlen(*line) == 0 && ft_strlen(s_str[fd]) == 0)
		**line = '\0';
	if (ft_strlen(*line) > 0 || ft_strlen(s_str[fd]) > 0)
		return (1);
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	if (BUFF_SIZE > MAX_BUFF_SIZE
		|| fd < 0
		|| BUFF_SIZE <= 0
		|| !line)
		return (-1);
	return (do_get_next_line(fd, line));
}
