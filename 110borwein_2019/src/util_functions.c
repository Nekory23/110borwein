/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** util functions
*/

#include <string.h>
#include <unistd.h>
#include "error_msg.h"
#include "borwein.h"

int my_strcmp(char const *str1, char const *str2)
{
    if (strlen(str1) != strlen(str2))
        return (0);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            return (0);
    }
    return (1);
}

int write_error(char const *str)
{
    write(2, str, strlen(str));
    write(2, STR_HELP, strlen(STR_HELP));
    return (TRUE);
}
