/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sums.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:09:37 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/05 14:53:46 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum;
    int mod;

    sum = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        mod = n % 10;
        sum = sum + mod;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}

