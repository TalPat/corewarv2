/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_storelines.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 09:49:50 by tpatter           #+#    #+#             */
/*   Updated: 2018/12/14 12:09:17 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	ft_storelines(t_asm *asmb)
{
	int fd;
	int	i;

	i = 0;
	fd = open(asmb->file, O_RDONLY);
	while (get_next_line(fd, &(asmb->lines[i])))
		i++;
}
