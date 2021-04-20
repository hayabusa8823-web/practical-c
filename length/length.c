/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 23:02:43 by apple             #+#    #+#             */
/*   Updated: 2021/04/20 23:10:15 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char line[100];
	printf("Enter a line: ");
	fgets(line, sizeof(line), stdin);
	printf("The length of the line is : %lu\n", strlen(line));
	printf("sizeof(line): %lu\n", sizeof(line));
	return (0);
}
