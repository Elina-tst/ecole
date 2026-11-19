/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastparam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwbelha <arwbelha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:43:01 by arwbelha          #+#    #+#             */
/*   Updated: 2026/11/19 17:43:14 by arwbelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
    int i;
    i = 0;
    while(argc > 1)
        {
            while(argv[argc - 1][i])
                {
                    write(1, &argv[argc - 1][i], 1);
                    i++;
                } 
    
        }write(1, "\n", 1);
        return (0);
}
