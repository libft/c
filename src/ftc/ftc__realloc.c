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

#include <stddef.h>
#include <stdint.h>

#include "ftc__internal_memory.h"
#include "ftw__stdlib.h"
#include "ftc__string.h"

void	*ftc__realloc(void *ptr, size_t size)
{
	t_memory_block	*old;
	void			*result;

	if (!ptr)
		return (ftc__malloc(size));
	old = (t_memory_block *)((intptr_t)(ptr)
			- (intptr_t)(&((t_memory_block *) 0)->actual));
	if (old->capacity < size)
	{
		result = ftc__malloc(size);
		if (result)
			ftc__memcpy(result, ptr, size);
		ftw__free(old);
		return (result);
	}
	else
	{
		old->size = size;
		return (ptr);
	}
}
