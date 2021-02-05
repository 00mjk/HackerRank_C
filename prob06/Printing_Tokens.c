/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printing_Tokens.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 13:22:47 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/05 13:23:57 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char *s;

	s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int len = strlen(s);
    int cmt = 0;
    
	while (cmt < len)
    {
        if (s[cmt] == ' ')
        {
            printf("\n");
        }
        else
            printf("%c", s[cmt]);
        cmt++;
    }
    return 0;
}
