/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwbelha <arwbelha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:43:50 by arwbelha          #+#    #+#             */
/*   Updated: 2026/11/19 17:44:13 by arwbelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int i; 
    i = 0;
    if (argc == 2)
    {
        while(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
            i++;
        while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
    }write(1, "\n", 1);
    return(0);
}
