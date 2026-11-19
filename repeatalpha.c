/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwbelha <arwbelha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:44:38 by arwbelha          #+#    #+#             */
/*   Updated: 2026/11/19 17:45:01 by arwbelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
    }
	int i;
    int repeat;
    if(argc == 2)
    {
        i = 0;
        while(argv[1][i])
            {
                repeat = 1;
                if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                    repeat = argv[1][i] - 'a' + 1;
                else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                    repeat = argv[1][i] - 'A' + 1;
                while(repeat > 0)
                    {
                        write(1, &argv[1][i], 1);
                        repeat--;
                    }i++;
            }write(1, "\n", 1);
            return(0);
        
    }
}
