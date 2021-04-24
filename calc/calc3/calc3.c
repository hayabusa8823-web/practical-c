/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:11:13 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 16:51:32 by apple            ###   ########.fr       */
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
		switch (operator)
		{
			case '+':
				result += value;
				break;
			case '-':
				result -= value;
				break;
			case '*':
				result *= value;
				break;
			case  '/':
				if (value == 0)
				{
					printf("Error: Divide by zero\n");
					printf("  operation ignored\n");
				}
				else	
					result /= value;
				break;
			default:
				printf("Unknown operator %c\n", operator);
				break;
		}
		
	}
	return (0);
}
