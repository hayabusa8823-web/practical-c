/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-6.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 22:07:35 by apple             #+#    #+#             */
/*   Updated: 2021/04/23 22:11:05 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int input;
	int hours;
	int min;
	char line[100];

	printf("Enter the MIN:");
	fgets(line, sizeof(line), stdin);
	sscanf(line,"%d", &input);
	hours = input / 60;
	min = input % 60;
	printf("%dH:%dm\n", hours, min);
	return (0);
}
