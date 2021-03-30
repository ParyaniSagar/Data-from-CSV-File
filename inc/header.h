/**
 * @file question 2a and 2b
 * @author Sagar Paryani
 * @brief Functions to perform sorting and display the contact details in data.csv file
 * @version 0.1
 * @date 2021-03-28
 * 
 * @copyright Copyright (c) 2021
 */
#ifndef __DATA_READ_AND_SORT_H__
#define __DATA_READ_AND_SORT_H__

/**
 * @brief Structure for Data of candidates
 * Name of a candidate
 * Mail-Id of candidate
 * Git link of candidate
 * external pointer to structure
 */
typedef struct file_data_t
{
   char name[100];
   char mail_id[100];
   char git_link[100];
} file_data_t;
extern file_data_t *arr;

/**
 * @brief Read the file
 * @param[in] file_name Pointer to file
 * @return SUCCESS if file reading is completed successfully. Else FAIL.
 */
int read_array(char* file_name);

/**
 * @brief Display the file
 * @param[in] temp Pointer to data in file
 */
int display(file_data_t *temp);

/**
 * @brief Sort the file
 * @param[in] temp Pointer to data in file
 */
int sort(file_data_t *temp);
#endif