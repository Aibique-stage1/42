#include <string.h>
#include <stdio.h>

//ex00
char *ft_strcpy(char *dest, char *src);
//ex01
char *ft_strncpy(char *dest, char *src, unsigned int n);
//ex02
int ft_str_is_alpha(char *str);
//ex03
int ft_str_is_numeric(char *str);
//ex04
int ft_str_is_lowercase(char *str);
//ex05
int ft_str_is_uppercase(char *str);
//ex06
int ft_str_is_printable(char *str);
//ex07
char *ft_strupcase(char *str);
//ex08
char *ft_strlowcase(char *str);
//ex09
char *ft_strcapitalize(char *str);
//ex10
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
//ex11
void ft_putstr_non_printable(char *str);
//ex12
void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	/*
	//ex00
	char *dest;
	char *src;
	char c[10];
	dest = c;
	src = "holaaa\0";
	printf("%s\n",  ft_strcpy(dest, src));
	
	//ex01
    unsigned int    n;
    char            dest[6] = "12345\0";
    char            src[4] = "321\0";
    n = 4;
    printf(" src: '%s'\n", src);
    printf("dest: '%s'\n", dest);
	printf("-----\n");
    ft_strncpy(dest, src, n);
    printf(" src: '%s'\n", src);
    printf("dest: '%s'\n", dest);
	//printf("-----");
	//printf("%s\n", strncpy(dest, src, n));
	
	//ex02
	char s[4] = "w6a\0";
    printf("%d\n", ft_str_is_alpha(s));
	//ex03
	 char s[4] = "897\0";
    printf("%d\n", ft_str_is_numeric(s));
	//ex04
	 char s[6] = "holae\0";
    printf("%d\n", ft_str_is_lowercase(s));
	//ex05
	char s[4] = "\0";
    printf("%d\n", ft_str_is_uppercase(s));
	//ex06
	 char s[4] = "A\nC\0";
    printf("%d\n", ft_str_is_printable(s));
	//ex07
	char s[4] = "d-h\0";
    printf("%s\n", ft_strupcase(s));
	//ex08
	 char s[4] = "5-C\0";
	 printf("%s\n", ft_strlowcase(s));
	//ex09
	char s[63];
    char *str;
    str = &s[0];
    strcpy(str, "7alut, cOmment tu vas ? 42mots quarante- deux; cinquante+eT+Un");
    printf("%s\n", ft_strcapitalize(s));
	//ex10
	char str[] = "hola";
    char dest[7];
    printf("%d\n", ft_strlcpy(dest, str, 6));
    printf("%s\n", dest);
	printf("---------\n");
	strlcpy(dest, str, 6);
	printf("%s\n", dest);
	*/
	//ex11
	//ft_putstr_non_printable("Hello\nWorlçd!");/*
												
	//ex12
	//no_yet*/
	return (0);
}
