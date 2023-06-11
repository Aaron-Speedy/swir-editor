#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <stdlib.h>
#include <stdarg.h>

#include "structs.h"

int insert_g(Line *line, size_t column, char char_to_insert);

int insert(Selection *sel, ...); // Args: char_to_insert

#endif
