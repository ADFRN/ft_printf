/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:43:15 by afournie          #+#    #+#             */
/*   Updated: 2025/11/17 13:35:57 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define FORMAT_CHAR "c"
# define FORMAT_STR "s"
# define FORMAT_POINT "p"
# define FORMAT_DECIMAL "d"
# define FORMAT_INT "i"
# define FORMAT_UDESC "u"
# define FORMAT_HEXALOW "x"
# define FORMAT_HEXAUPP "X"
# define FORMAT_PERCENT "%"

int	ft_printf(const char *s, ...);

#endif
