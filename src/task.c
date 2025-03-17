/*
    task.c
    
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
    a task - implementation
*/

#include "task.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

task_t *task_new(char *name, char *desc, time_t due) {
    task_t *task;
    char *name_copy;
    char *desc_copy;

    /* checks */
    if (name == NULL) return NULL;
    if (desc == NULL) return NULL;

    /* copy name and desc */
    name_copy = strdup(name);
    if (name_copy == NULL) return NULL;

    desc_copy = strdup(desc);
    if (desc_copy == NULL) {
        free(name_copy);
        return NULL;
    }

    /* allocate memory */
    task = malloc(sizeof(task_t));
    if (task == NULL) return NULL;

    /* fill in task */
    task->name = name_copy;
    task->desc = desc_copy;
    task->status = PENDING;
    task->due = due;

    /* return it */
    return task;
}

void task_free(task_t *task) {
    /* check */
    if (task == NULL) return;

    /* free */
    free(task->name);
    free(task->desc);
    free(task);
}

/* util to allocate just the enough space for a formatted string, and format it */
static char *aprintf(const char *format, ...) {
    va_list args;
    char *str;
    int len;

    /* get length */
    va_start(args, format);
    len = vsnprintf(NULL, 0, format, args);
    va_end(args);
    if (len < 0) return NULL;

    /* allocate memory */
    str = malloc(len + 1);
    if (str == NULL) return NULL;

    /* format */
    va_start(args, format);
    vsnprintf(str, len + 1, format, args);
    va_end(args);

    /* return it */
    return str;
}

char *task_to_string(task_t *task) {
    char *str;
    const char *status_str;

    /* check */
    if (task == NULL) return NULL;

    /* get status string */
    status_str = status_to_string(task->status);
    if (status_str == NULL) return NULL;

    /* format */
    str = aprintf("Name: %s\ndesc: %s\nStatus: %s\nDue: %s", task->name, task->desc, status_str, ctime(&task->due));

    /* return it */
    return str;
}