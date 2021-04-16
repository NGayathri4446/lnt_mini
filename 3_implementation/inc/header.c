#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define _CRT_SECURE_NO_WARNINGS 1

/**
 * @file header.h
 * @author gayathri
 * @brief  mini_project
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _HEADER_H_
#define _HEADER_H_


typedef enum error_t{
	ERROR_NULL_PTR = -2,
    SUCCESS = 0,
    START_EXISTS=1,
    NO_HEAD_EXIST=2,
    INVALID_NAME=4,
    ID_EXISTS=5
}error_t;

typedef struct diary
{
    FILE *fp;
    char press;
    int num;
} diary;
 

/**
 * @brief prints welcome message
 * 
 * welcome to our diary
 * @return zero  
 */
void welcome_message (void);

/**
 * @brief function adds files 
 * 
 * @param diary struct object, number of files
 * @return zero
 */
int insert(void);

/**
 * @brief function to append records from where the user left
 *
 * @return returns zero 
 */
int append(void);
 /**
 * @brief function to view records 
 *
 * @return returns zero
 */

int view(void);
#endif









