/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwbelha <arwbelha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:41:48 by arwbelha          #+#    #+#             */
/*   Updated: 2026/11/19 17:41:58 by arwbelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = -1;

    while(str[i] == ' ' || (str[i] >= 9 & str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = - sign;
        i++;
    }
    if (str[i] >= 0 && str[i] <= 9)
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(result * sign);
}

