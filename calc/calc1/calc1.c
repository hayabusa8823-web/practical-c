/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 09:49:36 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 09:53:05 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char line[100];
	int result;
	char operator;
	int value;

	result = 0;
	while(1)
	{
		printf("Result: %d\n", result);
		printf("Enter operator and number: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%c %d", &operator, &value);
		if (operator == '+')
			result += value;
		else
			printf("Unknown operator %c\n", operator);
	}
}
