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

 unsigned long remove_digit(int index, unsigned long n){
   if(index == 0){
     return num / 10;
   }
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
