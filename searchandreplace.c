/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchandreplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwbelha <arwbelha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:30:41 by arwbelha          #+#    #+#             */
/*   Updated: 2026/11/19 17:35:03 by arwbelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main (int argc, char **argv)
{
    int i;

    if(argc == 4 && !argv[2][1] && !argv[3][1])
    {
        i = 0;
        while(argv[1][i])
        {
            if(argv[1][i] == argv[2][0])
                write(1, &argv[3][0], 1);
            else
                write(1, &argv[1][i], 1);
            i++;
            }
    }write(1, "\n", 1);
    return(0);
}
