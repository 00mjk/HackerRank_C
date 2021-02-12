/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hello_World_in_C.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:27:10 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/12 16:43:21 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  //Preprocessor Drectives.
#include <stdlib.h>

int main(void) //Entry point of a C program.
{
	char s[100];

	//Input from stdin a string to my program, using fgets.
	fgets(s, sizeof(s), stdin);
	//Print Hello world using printstring fuction "it adds new line automatically".
	puts("Hello, World!");
	//Print the string passed by the user to the program
	printf("%s", s);
	//Return 0 value to tell the compiler that everything is okay.
	return 0;
}

