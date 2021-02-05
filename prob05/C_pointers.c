/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C_pointers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 12:54:10 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/05 12:56:20 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void update(int *a,int *b) 
{
	int sum;
	int abs;

	sum = *a + *b;
	abs = *a - *b;
	if (abs < 0)
	{
		abs = -abs;
	}
	*a = sum;
	*b = abs;
}

int main()
{
	int a, b;
	int *pa = &a, *pb = &b; 

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return 0;
}
