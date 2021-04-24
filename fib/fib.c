/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 07:40:28 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 07:44:16 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int old_number;
	int current_number;
	int next_number;
	
	old_number = 1;
	current_number = 1;
	printf("1\n");
	while (current_number < 100)
	{
		printf("%d\n", current_number);
		next_number = current_number + old_number;
		old_number = current_number;
		current_number = next_number;
	}
	return (0);
}
