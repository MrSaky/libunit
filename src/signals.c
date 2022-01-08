/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:24:23 by athierry          #+#    #+#             */
/*   Updated: 2022/01/08 23:55:19 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

char	*show_result(int signal)
{
	int			exit_status;

	if (WIFEXITED(signal))
	{
		exit_status = WEXITSTATUS(signal);
		if (exit_status == EXIT_SUCCESS)
			return ("OK");
		if (exit_status == EXIT_FAILURE)
			return ("KO");
	}
	if (WIFSIGNALED(signal))
	{
		exit_status = WTERMSIG(signal);
		if (exit_status == 10)
			return ("Bus Error");
		if (exit_status == 11)
			return ("Segmentation Fault");
	}
	return ("Error unknown");
}
