/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06-5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 08:59:55 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 09:10:24 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int year;
	char line[100];

	printf("Enter the year: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &year);
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 != 0)
				printf("%d is not uruu\n", year);
			else
				printf("%d is uruu\n", year);
		}
		else
			printf("%d is uruu\n", year);
	}
	else
		printf("%d is not uruu\n", year);
}
