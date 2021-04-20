/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 22:55:58 by apple             #+#    #+#             */
/*   Updated: 2021/04/20 23:17:06 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char first[100];
	char last[100];
	char full[200];

	printf("Enter first name: ");
	fgets(first, sizeof(first), stdin);
	first[strlen(first) -1] = '\0';
	printf("Enter last name: ");
	fgets(last, sizeof(last), stdin);
	last[strlen(last) - 1] = '\0';
	strcpy(full, first);
	strcat(full, " ");
	strcat(full, last);
	printf("The full name is %s\n", full);
	return (0);
}
