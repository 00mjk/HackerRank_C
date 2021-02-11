/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hello_World_in_C.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:27:10 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/11 14:06:02 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char s[100];

	//Input from stdin a string to my program, using fgets.
	fgets(s, sizeof(s), stdin);
	//Print Hello world using printstring fuction "it adds new line automatically"
	puts("Hello, World!");
	//Print the string passed by the user to the program
	printf("%s", s);
	return 0;
}

