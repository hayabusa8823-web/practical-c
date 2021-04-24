/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:11:13 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 14:22:02 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int result;
	char operator;
	int value;
	char line[100];

	result = 0;
	while (1)
	{
		printf("Result: %d\n", result);
		printf("Enter operator and number: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%c %d", &operator, &value);
		if ((operator == 'q') || (operator == 'Q'))
			break;
		if (operator == '+')
			result += value;
		else if (operator == '-')
			result -= value;
		else if (operator == '*')
			result *= value;
		else if (operator == '/')
		{
			if (value == 0)
			{
				printf("Error: Divide by zero\n");
				printf("  operation ignored\n");
			}
			else	
			result /= value;
		}
		
	}
	return (0);
}
