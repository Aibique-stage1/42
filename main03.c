/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajumbo <ajumbo@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:45:00 by ajumbo            #+#    #+#             */
/*   Updated: 2021/08/23 17:30:38 by ajumbo           ###   ########.fr       */
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
	/*
	//ex00
	char *s1;
	char *s2;

	s1 = "Çhola";
	s2 = "çhola";
	printf("S1 ---->%s\n", s1);
	printf("S2 ----> %s\n", s2);
	printf("Resultado:%i\n", ft_strcmp(s1, s2));
	printf("Resultado:%i\n", strcmp(s1, s2));
	*/
	//ex01
	char *s1;
	char *s2;

	s1 = "H";
	s2 = "";
	printf("S1 ---->%s\n", s1);
	printf("S2 ----> %s\n", s2);
	printf("ft_strncmp:%i\n", ft_strncmp(s1, s2, 1));
	printf("STRNCMP:%i\n", strncmp(s1, s2, 1));
	/*
	//ex02
	char s1[50] ;
	char s2[50] ;

	strcpy(s1,"Hola mundo");
	strcpy(s2, "");
	printf("Destined string ---> |%s|\n", s1);
	printf("ft_strcat string ---> |%s|\n", ft_strcat(s1, s2));
	strcpy(s1,"Hola mundo");
	strcat(s1, s2);
	printf("STRCAT string ---> |%s|\n", s1);
	//ex03
	char s1[50];
	char s2[50];

	strcpy(s1, "Hola mundo");
	strcpy(s2, "Adio");
	printf("Destined string ---> %s\n", s1);
	printf("ft_strcat string --->%s\n", ft_strncat(s1, s2, 0));
	strcpy(s1, "Hola mundo");
	strncat(s1, s2, 0);
	printf("STRNCAT string ---> %s\n", s1);
	//ex04
	char s1[50];
	char s2[50];
	char *result;

	strcpy(s1, "hola");
	strcpy(s2, "o");
	result = ft_strstr(s1, s2);
	printf("%s\n", result);
	result = strstr(s1, s2);
	printf("%s\n", result);
	//ex05
	char s1[50];
	char s2[50];

	strcpy(s1, "Mundo ,");
	strcpy(s2, "hola");
	printf("ft_strlcat ---> %u\n", ft_strlcat(s1, s2, 7));
	printf("%s\n", s1);
	strcpy(s1, "Mundo ,");
	printf("STRLCAT ---> %lu\n", strlcat(s1, s2, 7));
	printf("%s\n", s1);
	*/

	return (0);
}
