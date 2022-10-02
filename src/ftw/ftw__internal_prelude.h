/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftw__internal_prelude.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 2022/10/02 10:49:37 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTW__INTERNAL_PRELUDE_H
# define FTW__INTERNAL_PRELUDE_H

# ifdef FTW_ALLOWED_ALL
#  define FTW_ALLOWED_FUNCTIONS_EXIT
#  define FTW_ALLOWED_FUNCTIONS_RAISE
#  define FTW_ALLOWED_FUNCTIONS_SIGNAL
# endif

#endif
