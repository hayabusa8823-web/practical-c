/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 22:03:47 by apple             #+#    #+#             */
/*   Updated: 2021/04/23 22:07:13 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int result;
	int hours;
	int minites;
	char line[100];

	printf("Enter the Hours & Minites: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &hours, &minites);
	result = hours * 60 + minites;
	printf("result:%d\n", result);
	return (0);
}
