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
     return num / 10;
   }

   left_site = num / pow(10, i + 1);
   right_site = num % (unsigned long) pow(10, i);
   result = left_site * pow(10, i) + right_site;

   return result;
 }

 int get_ways(unsigned long p){
   return 0;
 }

 int get_length(unsigned long num){

 }

 bool is_prime(unsigned long num){
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
