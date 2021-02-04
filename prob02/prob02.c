/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prob03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:30:13 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/04 20:30:15 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int nbr0;
    int nbr1;
    float float0;
    float float1;
    
    scanf("%d %d", &nbr0, &nbr1);
    scanf("%f %f", &float0, &float1);
    
    printf("%d %d\n", nbr0 + nbr1, nbr0 - nbr1);
    printf("%.1f %.1f", float0 + float1, float0 - float1);
    return EXIT_SUCCESS;
}

