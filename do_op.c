/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwbelha <arwbelha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:35:50 by arwbelha          #+#    #+#             */
/*   Updated: 2026/11/03 12:41:48 by arwbelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
    int num1;
    int num2;
    
	if(ac != 4)
    {
        printf("\n");
        return(0);
    }
    num1 = atoi(av[1]);
    num2 = atoi(av[3]);

    if(av[2][0] == '+')
        printf("%d\n", num1 + num2);
    else if(av[2][0] == '-')
        printf("%d\n", num1 - num2);
    else if(av[2][0] == '*') //passe pas avec le fois idk//
        printf("%d\n", num1 * num2);
    else if(av[2][0] == '/')
        printf("%d\n", num1 / num2);
    else if(av[2][0] == '%')
        printf("%d\n", num1 % num2);
    return(0);
}

