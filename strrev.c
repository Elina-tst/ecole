/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwbelha <arwbelha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:39:02 by arwbelha          #+#    #+#             */
/*   Updated: 2026/11/19 17:39:41 by arwbelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;
    i = 0;
    len = 0;
    while(str[len])
        len++;
    len--;
    while(i < len)
        {
            tmp = str[i];
            str[i] = str[len];
            str[len] = tmp;
            i++;
            len--;
        }
    return(str);
}
