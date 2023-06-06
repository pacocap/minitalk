/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacocp <pacocp@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:33:32 by pacocp            #+#    #+#             */
/*   Updated: 2021/08/20 13:06:44 by pacocp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_handler()
{
	printf("Signal received\n");
	// exit(1);
}

int		main()
{
	ft_putstr("Server PID: ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, sig_handler);

	while(1)
		pause();
	return(0);
}