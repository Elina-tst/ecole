/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwbelha <arwbelha@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:40:05 by arwbelha          #+#    #+#             */
/*   Updated: 2026/11/19 17:40:22 by arwbelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main(int argc, char **argv)
{
        int i;
        int deja_vu[256] = {0};

        if(argc != 3)
        {
                write(1, "\n", 1);
                return(0);
        }
        i = 0;
        while(argv[1][i] != '\0')
        {
                if(deja_vu[(unsigned char)argv[1][i]] == 0)
                {
                        write(1, &argv[1][i], 1);
                        deja_vu[(unsigned char)argv[1][i]] = 1;
                }
                i++;
        }
        i = 0;
        while(argv[2][i] != '\0')
        {
                if(deja_vu[(unsigned char) argv[2][i]] == 0)
                {
                        write(1, &argv[2][i], 1);
                        deja_vu[(unsigned char)argv[2][i]] = 1;
                }
                i++;
        }
        write(1, "\n", 1);
        return(0);
}
