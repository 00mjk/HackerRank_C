/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_loop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 13:50:15 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/05 14:07:19 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void    loop(int a, int b)
{
    int cmt;
    for(cmt=a; cmt <= b; cmt++)
    {
        switch(cmt)
        {
        case(1):printf("one\n");
        break;
        case(2):printf("two\n");
        break;
        case(3):printf("three\n");
        break;
        case(4):printf("four\n");
        break;
        case(5):printf("five\n");
        break;
        case(6):printf("six\n");
        break;
        case(7):printf("seven\n");
        break;
        case(8):printf("eight\n");
        break;
        case(9):printf("nine\n");
        break;
        default:if (cmt%2 == 0)
                    printf("even\n");
                    else
                        printf("odd\n");
        }
    }
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    loop(a, b);    
    return 0;
}
