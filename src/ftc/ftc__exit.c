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

#include "ftw__stdlib.h"
#include "ftc__internal_global.h"

void	ftc__exit(int status)
{
	while (g()->ftc.exit.bonus_handler_count)
		g()->ftc.exit.bonus_handler[
		--g()->ftc.exit.bonus_handler_count]();
	while (g()->ftc.exit.mandatory_handler_count)
		g()->ftc.exit.mandatory_handler[
		--g()->ftc.exit.mandatory_handler_count]();
	ftw__exit(status);
}
