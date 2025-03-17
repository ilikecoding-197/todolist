/*
    status.h
    
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
    status for a task - header
*/

#ifndef STATUS_H
#define STATUS_H

/* the status of a task. */
typedef enum {
    PENDING = 0, /* task is pending */
    INPROGRESS = 1, /* task is in progress */
    COMPLETED = 2, /* task is completed */
} status_t;

/* gets the string repersenation of a status. */
const char *status_to_string(status_t status);

#endif /* STATUS_H */