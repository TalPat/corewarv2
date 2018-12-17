/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getmeta.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 10:37:14 by tpatter           #+#    #+#             */
/*   Updated: 2018/12/17 11:02:59 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	ft_getname(t_asm *asmb)
{
	int		i;
	char	*str;

	i = 0;
	while (asmb->lines[i])
	{
		if ((str = ft_strstr(asmb->lines, ".name")))
		{
			if ((str = ft_strchr(str, '"')))
			{

			}
		}
	}
}