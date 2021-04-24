/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06-1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 08:07:26 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 08:13:40 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a;
	int b;
	int distance;
	char line[100];

	printf("Enter the a & b:");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &a, &b);
	distance = sqrt((a - b) * (a - b));
	printf("distance = %d\n", distance);
	return (0);
}
