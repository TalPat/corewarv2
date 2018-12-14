/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <tpatter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 13:49:31 by tpatter           #+#    #+#             */
/*   Updated: 2018/12/14 12:08:05 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include <stdlib.h>
#include <sys/stat.h> 
#include <fcntl.h>
#include "op.h"

#ifndef ASM_H
# define ASM_H

typedef struct	s_label
{
	int			index;
	char		*name;
}				t_label;

typedef struct	s_asm
{
	t_list		*lbllst;
	char		*name;
	char		*comment;
	char		*file;
	char		**lines;
}				t_asm;

void	ft_storelines(t_asm *asmb);
void	ft_initasm(t_asm *asmb);

#endif
