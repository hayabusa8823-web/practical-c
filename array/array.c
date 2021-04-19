/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:06:50 by apple             #+#    #+#             */
/*   Updated: 2021/04/20 00:12:47 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	float data[5];
	float total;
	float average;
	int i;

	data[0] = 34.0;
	data[1] = 27.0;
	data[2] = 45.0;
	data[3] = 82.0;
	data[4] = 22.0;
	i = 0;
	total = 0;
	while (i < 5)
	{
		total += data[i];
		i++;
	}
	average = total / 5;
	printf("Total %f Average %f\n", total, average);
	return (0);
}
