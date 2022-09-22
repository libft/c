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

#ifndef FTC__STDLIB_H
# define FTC__STDLIB_H

# include <stddef.h>

void	*ftc__malloc(size_t size);
void	*ftc__calloc(size_t count, size_t size);
void	*ftc__realloc(void *ptr, size_t size);
void	ftc__free(void *ptr);

void	ftc__exit(int status);
int		ftc__atexit(int status);

#endif
