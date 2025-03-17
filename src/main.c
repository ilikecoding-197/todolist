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
#include "task.h"
#include "return_values.h"

int main(int argc, char *argv[]) {
    /* task test */
    task_t *task = task_new("test", "this is a test", time(NULL));
    if (task == NULL) {
        fprintf(stderr, "task_new failed\n");
        return FAILURE;
    }

    /* print task */
    printf("task: %s\n", task_to_string(task));

    /* free task */
    task_free(task);

    return SUCCESS;
}