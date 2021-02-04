/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prob01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:29:06 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/04 20:29:08 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    char ch;
    char s[50];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    return 0;
}
