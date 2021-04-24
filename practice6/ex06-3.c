/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06-3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 08:20:03 by apple             #+#    #+#             */
/*   Updated: 2021/04/24 08:44:12 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int score;
	int rank;
	char line[100];
	
	printf("Enter the score: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &score);
	if (score >= 0 && score <= 60 )
		printf("grade is F");
	if (score >= 61 && score <= 70 )
		printf("grade is D");
	if (score >= 71 && score <= 80 )
		printf("grade is C");
	if (score >= 81 && score <= 90 )
		printf("grade is B");
	if (score >= 91 && score <= 100 )
		printf("grade is A");
	rank = score % 10;
	if (rank >= 1 && rank <= 3)
		printf("-\n");
	else if (rank >= 8 || rank == 0)
		printf("+\n");
	else
		printf("\n");

	return (0);
}
