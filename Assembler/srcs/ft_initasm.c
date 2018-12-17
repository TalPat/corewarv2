/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initasm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:42:28 by tpatter           #+#    #+#             */
/*   Updated: 2018/12/17 10:39:41 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	ft_initasm(t_asm *asmb)
{
	int	i;

	asmb->name = ft_strnew(99);
	asmb->comment = ft_strnew(1024);
	asmb->file = ft_strnew(1024);
	asmb->lines = (char**)malloc(sizeof(char*) * 1024);
	i = 0;
	while (i < 1024)
	{
		asmb->lines[i] = 0;
		i++;
	}
}
