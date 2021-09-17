#include <stdio.h>
void  ft_ft(int *nbr);
void  ft_ultimate_ft(int *********nbr);
void  ft_swap(int *a, int *b);
void  ft_div_mod(int a, int b, int *div, int *mod);
void  ft_ultimate_div_mod(int *a, int *b);
void  ft_putstr(char *str);
int ft_strlen(char *str);
void  ft_rev_int_tab(int *tab, int size);
void  ft_sort_int_tab(int *tab, int size);

int main(void)
{
  //int a;
  //int b;
  //int div;
  //int mod;
  int tab[6];
  //int *ptr;
  //int *ptrb;/*
  //int **ptr2
  //int ***ptr3;
 // int ****ptr4;
 // int *****ptr5;
 // int ******ptr6;
  //int *******ptr7;
  //int ********ptr8;
  //int *********ptr9;
  //int *ptrdiv;
  //int *ptrmod;
  //char *str;
 // a = 14;
 // b = 10;/*
  //div = 18;
  //mod = 10;
  //ptr = &a;
  /*ptrb = &b;
  ptr2 = &ptr;
  ptr3 = &ptr2;
  ptr4 = &ptr3;
  ptr5 = &ptr4;
  ptr6 = &ptr5;
  ptr7 = &ptr6;
  ptr8 = &ptr7;
  ptr9 = &ptr8;*/
  //ptrdiv = &div;
  //ptrmod = &mod;/*
  //str = "cadena";
  tab[0] = 1;
  tab[1] = 2;
  tab[2] = 3;
  tab[3] = 4;
  tab[4] = 5;
  tab[5] = 6;
  /*printf("%d", *ptr);
  ft_ft(ptr);
  printf("%d", *ptr);
  ft_ultimate_ft(ptr9);
  printf("%d", *ptr);
  printf("%p %p\n",&a,&b);
  printf("%p,%p\n", ptr, ptrb);
  printf("%d,%d\n", *ptr, *ptrb);
  ft_swap(ptr, ptrb);
  printf("%d,%d\n", a, b);
  swap(&a, &b);
  printf("%d,%d\n",a,b);
  
  printf("%d, %d\n", *ptrdiv, *ptrmod);
  ft_div_mod(div, mod, ptrdiv, ptrmod);
  printf("%d,%d\n", div, mod);
  ft_ultimate_div_mod(ptr, ptrb);
  printf("%d,%d\n", a, b);
  printf("%d", *ptr)
  ft_putstr(str);
  
  a = ft_strlen(str);
  printf("%d", a);*/
  printf("%d%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
  ft_rev_int_tab(tab, 6);
  printf("%d%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);/*
  printf("%d%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
  ft_sort_int_tab(tab, 7);
  printf("%d%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);*/
  return (0);
}
