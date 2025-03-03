/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <srapaila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:41:05 by srapaila          #+#    #+#             */
/*   Updated: 2025/01/21 15:53:05 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
	{
		count++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static char	*pre_conv(int len)
{
	char	*tmp;

	tmp = ft_calloc((len + 1), sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	int		len;
	int		i;

	nbr = n;
	len = int_len(nbr);
	result = pre_conv(len);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	else if (n == 0)
		result[0] = '0';
	i = len - 1;
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	return (result);
}
/*
int main(void)
{
    int test_cases[] = {0};
    size_t num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    size_t i = 0;
    
    printf("Testing ft_itoa:\n");
    while (i < num_cases)
    {
        int n = test_cases[i];
        char *result = ft_itoa(n);
        if (result)
        {
            printf("Input: %d -> Output: \"%s\"\n", n, result);
            free(result); // Libera la memoria allocata
        }
        else
        {
            printf("Input: %d -> Output: [Memory allocation failed]\n", n);
        }
        i++;
    }

    return 0;
}
*/
