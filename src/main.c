/*
    main.c

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
    main C file
*/

#include <stdio.h>
#include <stdlib.h>
#include "status.h"
#include "return_values.h"

int main(int argc, char *argv[]) {
    /* status test */
    status_t status_pending = PENDING;
    status_t status_inprogress = INPROGRESS;
    status_t status_completed = COMPLETED;

    printf("status_t PENDING: %s\n", status_to_string(status_pending));
    printf("status_t INPROGRESS: %s\n", status_to_string(status_inprogress));
    printf("status_t COMPLETED: %s\n", status_to_string(status_completed));
    
    return SUCCESS;
}