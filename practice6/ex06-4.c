/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06-4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 08:44:49 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 08:59:25 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int twenty_fivecent;
	int tencent;
	int fivecent;
	int onecent;
	float input;
	char line[100];

	printf("Enter the amount: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &input);
	input = input * 100;
	if ((twenty_fivecent = input / 25) >= 1)
	{
		printf("25cent: %d\n", twenty_fivecent);
		input = (int)input % 25;
	}
	if ((tencent = input / 10) >= 1)
	{
		printf("10cent: %d\n", tencent);
		input = (int)input % 10;
	}
	if ((fivecent = input / 5) >= 1)
	{
		printf("5cent: %d\n", fivecent);
		input = (int)input % 5;
	}
	if ((onecent = input / 1) >= 1)
	{
		printf("1cent: %d\n", onecent);
		input = (int)input % 1;
	}
	return (0);
}
