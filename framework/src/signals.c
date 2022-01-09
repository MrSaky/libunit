/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:24:23 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 22:58:54 by shocquen         ###   ########.fr       */
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

static void	ft_lstdelone(t_unit_test *lst, void (*del)(void *))
{
	if (lst)
	{
		if (del)
		{
			(del)(lst->f);
			(del)(lst->f_name);
			(del)(lst->test_name);
		}
		free(lst);
	}
}

void	ft_lstclear(t_unit_test **lst, void (*del)(void *))
{
	t_unit_test	*tmp;

	tmp = NULL;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
