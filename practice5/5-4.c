/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:58:52 by apple             #+#    #+#             */
/*   Updated: 2021/04/23 22:03:10 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int mile;
	int km;
	const float cv = 0.6213712;
	char line[100];

	printf("Enter the km: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &km);
	mile = km * cv;
	printf("mile = %d\n", mile);
	return (0);
}
