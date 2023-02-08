#ifndef SERIALIZATION_H
# define SERIALIZATION_H

#include <iostream>
#include <inttypes.h>

#define RESET   "\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define GREEN   "\033[32m"      /* Green */

typedef struct s_data
{
    unsigned int value;
}       Data;

uintptr_t   serialize(Data* ptr);
Data*       deserialize(uintptr_t raw);

#endif