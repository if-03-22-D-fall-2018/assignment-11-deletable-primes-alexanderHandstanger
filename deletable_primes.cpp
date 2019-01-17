/*----------------------------------------------------------
 *				HTBLA-Leonding / Class
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			deletable_primes.c
 * Author:			P. Bauer
 * Due Date:		October 16, 2012
 * ----------------------------------------------------------
 * Description:
 * Implementation of deletable_primes.h.
 * ----------------------------------------------------------
 */
#include "deletable_primes.h"
#include <math.h>

 unsigned long remove_digit(int index, unsigned long n){
   unsigned long left_site = 0;
   unsigned long right_site = 0;
   unsigned long result = 0;

   if(index == 0){
     return n / 10;
   }

   left_site = n / pow(10, index + 1);
   right_site = n % (unsigned long) pow(10, index);
   result = left_site * pow(10, index) + right_site;

   return result;
 }

 int get_ways(unsigned long p){
   int lenght = 0;
   for(int i = 0; i < get_length(p); i++){
      if(get_length(p) == 1){
        if(is_prime(p) == true){
          return 1;
        }
        return 0;
      }
      else if(is_prime(remove_digit(i, p))){
        lenght += get_ways(remove_digit(i, p));
      }
   }
   return lenght;
 }

 int get_length(unsigned long number){
   unsigned long temp = number;
   unsigned long lenght = 0;
   if(number < 10){
     return 1;
   }
   while(temp != 0){
     temp /= 10;
     lenght++;
   }
   return lenght;
 }

 bool is_prime(unsigned long num){
   if(num == 1){
     return false;
   }
   unsigned long i = 2;
   unsigned long cloned_num = num;
   while(i <= sqrt(num)){
     if(cloned_num % i == 0){
       return false;
     }
     i++;
   }
   return true;
 }
