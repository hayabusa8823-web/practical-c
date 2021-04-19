/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 23:53:24 by apple             #+#    #+#             */
/*   Updated: 2021/04/19 23:55:45 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char char1;
	char char2;
	char char3;

	char1 = 'A';
	char2 = 'B';
	char3 = 'C';
	printf("%c%c%c reversed is %c%c%c\n", char1, char2, char3, char3, char2, char1);
	return (0);
}
