/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 13:49:40 by tpatter           #+#    #+#             */
/*   Updated: 2018/12/14 09:59:07 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int	main(int ac, char **av)
{
	t_asm	*asmb;

	asmb = (t_asm*)malloc(sizeof(t_asm));
	ft_initasm(asmb);
	asmb->file = ft_strcpy(asmb->file, av[1]);
	ft_storelines(asmb);
	int i = 0;
	/**/
		while (asmb->lines[i]) {
			ft_putstr(asmb->lines[i]);
			i++;
		}
	/**/
	return (0);
}