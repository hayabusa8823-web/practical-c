/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5-3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:54:22 by apple             #+#    #+#             */
/*   Updated: 2021/04/23 21:57:51 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int result;
	int width;
	int height;
	char line[100];

	printf("Enter the width & height: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &width, &height);
	result = 2 * (width + height);
	printf("result:%d\n", result);
}
