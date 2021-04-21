/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 23:03:56 by apple             #+#    #+#             */
/*   Updated: 2021/04/21 23:05:58 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main (void)
{
	char line[100];
	int value;

	printf("Enter a value: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &value);
	printf("Twice %d is %d\n", value, value * 2);
	return (0);
}
