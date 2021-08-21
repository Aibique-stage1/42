/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:45:00 by ajumbo            #+#    #+#             */
/*   Updated: 2021/08/21 12:37:04 by ajumbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

//ex00
int ft_strcmp(char *s1, char *s2);
//ex01
int ft_strncmp(char *s1, char *s2, unsigned int n);
//ex02
char *ft_strcat(char *dest, char *src);
//ex03
char *ft_strncat(char *dest, char *src, unsigned int nb);
//ex04
char *ft_strstr(char *str, char *to_find);
//ex05
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char *s1;
	char *s2;

	s1 ="Destine\0";
	s2 = "Source\0";
	printf("%s\n", ft_strcat(s1, s2));
	printf("%s", strcat(s1, s2));
	
	return (0);
}
