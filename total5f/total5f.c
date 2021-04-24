/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total5f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:16:05 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 16:27:38 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int total;
	int current;
	int counter;
	char line[100];
	
	total = 0;
	for (counter = 0; counter < 5; counter++)
	{
		printf("Number? ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &current);
		total += current;
	}
	printf("The grand total is %d\n", total);
	return (0);
}
