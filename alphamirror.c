/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwbelha <arwbelha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:41:14 by arwbelha          #+#    #+#             */
/*   Updated: 2026/11/19 17:41:29 by arwbelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    char c;

    i = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            c = av[1][i];
                if (c >= 'a' && c <= 'z')
                c = 'a' + 'z' - c;
                else if(c >= 'A' && c <= 'Z')
                c = 'A' + 'Z' - c;
            write(1, &c, 1);
            i++;
        }
    }   write(1, "\n", 1);
    return(0);
}
