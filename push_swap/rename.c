/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rename.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello < frudello@student.42roma.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:14:32 by frudello          #+#    #+#             */
/*   Updated: 2022/03/07 19:00:49 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t'
		|| str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - '0');
		c++;
	}
	return (res * s);
}

int s_nbr(char **contr)
{
    int i;
    int j;
    
    j = 1;
    while(contr[j])
    {
        i = 0;
        while(contr[j][i] == '-' || contr[j][i] == '+' || contr[j][i] == ' ' || (contr[j][i] > 39 && contr[j][i] < 58))
        {
            if(contr[j][i] == '-' || contr[j][i] == '+')
            {
                i++;
                if(contr[j][i] == '-' || contr[j][i] == '+')
                    ft_printf("errore gay")
            }
        }
    }
}

int prova(char **test)
{
    int counter;
    int *a;
    
    counter = 0;
    while(test[counter])
    {
        counter++;
    }
    a = malloc(counter - 1);
    counter = 1;
    while(test[counter])
    {
        a[counter - 1] = ft_atoi(test[counter]);
        counter++;
    }
    counter = 0;
}

int main(int argc, char **argv)
{
    int i;
    
    i = prova(argv);
    return(0);
}