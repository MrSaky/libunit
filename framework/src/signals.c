/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:24:23 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 22:48:52 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "colors.h"

char	*show_result(int signal)
{
	int			exit_status;

	if (WIFEXITED(signal))
	{
		exit_status = WEXITSTATUS(signal);
		if (exit_status == EXIT_SUCCESS)
			return (CGRN"OK"CNO);
		if (exit_status == EXIT_FAILURE)
			return (CRED"KO"CNO);
	}
	if (WIFSIGNALED(signal))
	{
		exit_status = WTERMSIG(signal);
		if (exit_status == 10)
			return (CRED"Bus Error"CNO);
		if (exit_status == 11)
			return (CRED"Segmentation Fault"CNO);
	}
	return (CRED"Error unknown"CNO);
}

int	check_sum(int *count)
{
	if (count[0] == count[1])
		return (TEST_SUCCESS);
	return (TEST_FAILLURE);
}
