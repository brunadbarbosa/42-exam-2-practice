/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmaria- <brmaria-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:36:58 by brmaria-          #+#    #+#             */
/*   Updated: 2025/05/26 12:06:47 by brmaria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i;

		i = 0;
		while (argv[1][i])
			i++;
		while(i--)
			write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}