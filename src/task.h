/*
    task.h
    
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
    a task - header
*/

#ifndef TASK_H
#define TASK_H

#include "status.h"
#include <time.h>

/* a task. */
typedef struct {
	char *name; /* name of the task */
	char *desc; /* description of the task */
	status_t status; /* status of the task */
	time_t due; /* due date of the task */
} task_t;

/* creates a new task, on the heap. 
   no status param is included; as that should be set to new for new tasks. 
   will return NULL on failure. */
task_t *task_new(
	char *name, /* the name for the todo. will be duplicated. 
	               if NULL, function will return NULL. */
	char *desc, /* the description for the todo. will be duplicated.
	               if NULL, function will return NULL. */
	time_t due /* the due date for the todo. */
);

/* frees a task. 
   if task is NULL, nothing will happen. */
void task_free(
	task_t *task /* the task to free. */
);

/* convert a task to a string.
   will return NULL is there was a error.
   if task is NULL, function will return NULL. */
char *task_to_string(
	task_t *task /* the task to convert. */
);

#endif /* TASK_H */