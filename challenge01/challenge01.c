/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   challenge01.c                                      :+:      :+:    :+:   */
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
    char ch; //declare a character
    char s[200]; //declare a string of 200 char
    char sen[200]; //Another string of 200 char
    
    scanf("%ch", &ch);//Read the char from input and store it in the location named ch
    scanf("%s\n", s); //Read a string from input and store it in the array named s untill read an enter nextline
    fgets(sen, 200, stdin); //Read string sen untill new line
        
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    return (0);
}

