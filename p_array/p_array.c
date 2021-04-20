/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_array.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 23:19:48 by apple             #+#    #+#             */
/*   Updated: 2021/04/20 23:26:53 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int array[3][2];
	int x;
	int y;

	array[0][0] = 0 * 10 + 0;	
	array[0][1] = 0 * 10 + 1;
	array[1][0] = 1 * 10 + 0;
	array[1][1] = 1 * 10 + 1;
	array[2][0] = 2 * 10 + 0;
	array[2][1] = 2 * 10 + 1;
	printf("array[%d] ", 0);
	printf("%d ", array[0][0]);
	printf("%d ", array[0][1]);
	printf("\n");
	printf("array[%d] ", 1);
	printf("%d ", array[1][0]);
	printf("%d ", array[1][1]);
	printf("\n");
	printf("array[%d] ", 2);
	printf("%d ", array[2][0]);
	printf("%d ", array[2][1]);
	printf("\n");
	return (0);
}
