/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:49:25 by apple             #+#    #+#             */
/*   Updated: 2021/04/23 21:53:33 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int result;
	int r;
	const float PI = 3.14;
	char line[100];

	printf("Enter the r: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &r);
	result = r * r * r * 4 / 3 * PI;
	printf("result= %d\n", result);
	return (0);
}
