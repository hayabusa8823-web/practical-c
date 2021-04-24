/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 08:20:03 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 08:40:00 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int score;
	char line[100];
	
	printf("Enter the score: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &score);
	if (score >= 0 && score <= 60 )
		printf("grade is F\n");
	if (score >= 61 && score <= 70 )
		printf("grade is D\n");
	if (score >= 71 && score <= 80 )
		printf("grade is C\n");
	if (score >= 81 && score <= 90 )
		printf("grade is B\n");
	if (score >= 91 && score <= 100 )
		printf("grade is A\n");
	return (0);
}
