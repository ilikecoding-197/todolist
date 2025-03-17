/*
    status.c
    
    Made by Thomas Shrader
    
    You can redistribute this file and/or modify it under the terms
	of version 2 of the GNU General Public License as published by
	the Free Software Foundation.  You should have received a copy
	of the license along with this file; see the file COPYING.

	This file is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	license for more details.
*/

/*
    status for a task - implementation
*/

#include "status.h"
#include <stddef.h>

const char *status_to_string(status_t status) {
    /* switch statement to return correct string */
    switch (status) {
        case PENDING:
            return "pending";
        case INPROGRESS:
            return "in progress";
        case COMPLETED:
            return "completed";
        default:
            return NULL;
    }
}