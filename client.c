/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacocp <pacocp@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:33:15 by pacocp            #+#    #+#             */
/*   Updated: 2021/08/20 13:36:41 by pacocp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int		main(int args, char **argv)
{
	if (args != 3)
		printf("I need at least a PID and a message");
	else
	{
		int pid;
		pid = ft_atoi(argv[1]);
		if (kill(pid, SIGUSR1) == -1)
			printf("Error\n");
	}
	return(0);
}