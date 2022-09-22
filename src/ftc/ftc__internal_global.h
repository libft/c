/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTC__INTERNAL_GLOBAL_H
# define FTC__INTERNAL_GLOBAL_H

typedef struct s_ftc__internal_global
{
	unsigned int	rand_seed;
}	t_ftc__internal_global;

# ifndef FT_G_DEFINED

typedef struct s_ft_g
{
	t_ftc__internal_global	ftc;
}	t_ft_g;

# endif

extern t_ft_g	*g(void);

#endif
