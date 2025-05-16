/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:25:25 by abenzaho          #+#    #+#             */
/*   Updated: 2025/05/15 16:29:20 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	env(t_cmds *cmds, t_list *env, t_mp *pg)
{
	int	e;

	if (cmds->cmds[1])
	{
		write(2, "minishell : env : does not take any arguments\n", 46);
		pg->exit_status = 1;
		return (1);
	}
	while (env)
	{
		e = write(1, (char *)(env->ptr), ft_strlen((char *)(env->ptr)));
		e = write(1, "\n", 1);
		env = env->next;
	}
	if (e == -1)
		write_error("env", pg, 125);
	else
		pg->exit_status = 0;
	return (0);
}
