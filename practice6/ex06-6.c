/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06-6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 09:10:56 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 09:20:28 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int hours;
	int wage;
	int total;
	char line[100];

	printf("Enter the hours & wage:");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &hours, &wage);
	if (hours > 40)
		hours = hours + (hours - 40) * 1.5;
	total = hours * wage;
	printf("weekly total: %d\n", total);
	return (0);
}
