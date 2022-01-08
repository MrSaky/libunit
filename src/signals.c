/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:24:23 by athierry          #+#    #+#             */
/*   Updated: 2022/01/08 23:07:20 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

char	*show_result(int signal)
{
	int			exit_status;

	if (!WIFEXITED(signal))
		return ("Unknown error");
	exit_status = WEXITSTATUS(signal);
	if (exit_status == EXIT_SUCCESS)
		return ("OK");
	if (exit_status == EXIT_FAILURE)
		return ("KO");
	if (exit_status == 10)
		return ("Bus error");
	if (exit_status == 11)
		return ("Segmentation fault");
	return ("Error unknown");
}
