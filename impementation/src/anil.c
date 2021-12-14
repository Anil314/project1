/**
 * @file function.h
 * @author  (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"

/**
 * @brief login withrespective to customer or admin
 */


int enterchoice(void);
/**
 * @brief login for admin
 * 
 */
void details(void);
/**
 * @brief Displays the movie available to purchase a ticket
 */

int ListofMovies(void);
int movieselect(void);

/**
 * @brief admin can change prize of ticket after login with the appropriate login credentials .
 * 
 */
int changepriceticket(int);

/**
 * @brief Customer can purchase a ticket 
 */

void show1(int choice,char name[10],int id1,int price);
/**
 * @brief Customer can purchase a ticket 
 */
void show2(int choice,char name[10],int id1,int price);
/**
 * @brief Customer can purchase a ticket 
 */
void show3(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show4(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show5(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show6(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show7(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show8(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show9(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show10(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show11(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show12(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show13(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show14(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show15(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show16(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show17(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show18(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show19(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show20(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show21(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void show22(int choice,char name[10],int id1,int price);


void reserveticket(int *,int,int );


/**
 * @brief A customer can cancel the ticket  
 */
void cancelticket(int *); 


#endif /* #define _FUNCTION_H__ */