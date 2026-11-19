/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */

/*                                                    +:+ +:+         +:+     */
/*   By: arwbelha <arwbelha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:01:55 by arwbelha          #+#    #+#             */
/*   Updated: 2026/11/19 17:01:55 by arwbelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str)
{
	char **tab = malloc(1000000);
    
    int i = 0;
    int x = -1;
    int y;

    while(str[i])
    {
        while(str[i] == ' ')
            i++;
        if(!str[i])
            break;
        tab[++x] = malloc(1000000);
        y = 0;
        while(str[i] && str[i] != ' ')
        {
            tab[x][y++] = str[i++];
        }
        tab[x][y] = '\0';
    }
    tab[++x] = NULL;
    return(tab);
}

