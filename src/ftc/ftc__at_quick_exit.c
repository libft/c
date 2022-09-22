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

#include "ftc__stdlib.h"

#include <stdbool.h>

#include "ftc__internal_global.h"
#include "ftc__string.h"

typedef void	(*t_function)(void);

static bool	increase_handler_array(void)
{
	t_function *const	new_handler_array
		= ftc__malloc(
			sizeof(void (*)(void))
			* g()->ftc.quick_exit.bonus_handler_capacity * 2);

	if (!new_handler_array)
		return (true);
	ftc__memcpy(
		new_handler_array,
		g()->ftc.quick_exit.bonus_handler,
		g()->ftc.quick_exit.bonus_handler_capacity);
	g()->ftc.quick_exit.bonus_handler_capacity *= 2;
	ftc__free(g()->ftc.quick_exit.bonus_handler);
	g()->ftc.quick_exit.bonus_handler = new_handler_array;
	return (false);
}

int	ftc__atexit(void (*function)(void))
{
	if (g()->ftc.quick_exit.mandatory_handler_count != 32)
	{
		g()->ftc.quick_exit.mandatory_handler[
		g()->ftc.quick_exit.mandatory_handler_count++] = function;
		return (0);
	}
	if (g()->ftc.quick_exit.bonus_handler_capacity
		== g()->ftc.quick_exit.mandatory_handler_count
		&& increase_handler_array())
		return (1);
	g()->ftc.quick_exit.bonus_handler[
	g()->ftc.quick_exit.bonus_handler_count++] = function;
	return (0);
}
