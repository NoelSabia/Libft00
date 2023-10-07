/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel <noel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:30:04 by noel              #+#    #+#             */
/*   Updated: 2023/10/07 17:08:47 by noel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char *strdup(const char *s)
{
    char *dup;
    int i = 0;

    dup = malloc(sizeof(s));
    if (!dup)
        return 0;
    while (s[i] != 0)
    {
        dup[i] = s[i];
        i++; 
    }
    return dup;
}

ananas;