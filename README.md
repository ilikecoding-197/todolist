# todolist
A basic todo list made in C using a plain Makefiles and autoconf.

## Building
To build the project, follow these steps:

1. **Install dependencies**:
    Make sure you have `make`, `autoconf`, and a C compiler installed.

2. **Configure the project**:
    Run the following command to generate the necessary configuration files:
    ```sh
    ./configure
    ```

3. **Build the project**:
    Use `make` to compile the project:
    ```sh
    make
    ```

    The executable will be created in the current directory as `./todolist`.

4. **Install the project** (optional):
    If you want to install the executable on your system, run:
    ```sh
    sudo make install
    ```

    After installation, you can run the program using the command `todolist`.

## Adding Code Files to Build
To add new code files to the build, follow these steps:

1. **Create your new C source file**:
    ```c
    /*
        [your file name here]

        Made by [your name]

        You can redistribute this file and/or modify it under the terms
	    of version 2 of the GNU General Public License as published by
	    the Free Software Foundation.  You should have received a copy
	    of the license along with this file; see the file COPYING.

	    This file is distributed in the hope that it will be useful,
	    but WITHOUT ANY WARRANTY; without even the implied warranty of
	    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	    license for more details.
    */
    #include <stdio.h>

    void new_function() {
        printf("This is a new function.\n");
    }
    ```

    Make sure to replace the brackets.

2. **Update the Makefile**:
    Add your new source file to the `SOURCES` variable in the `Makefile.am`:
    ```makefile
    # filepath: /home/thomas/todolist/Makefile.am
    bin_PROGRAMS = todolist
    todolist_SOURCES = main.c newfile.c
    ```

3. **Rebuild the project**:
    After updating the `Makefile.am`, you need to regenerate the `Makefile.in` and `Makefile`:
    ```sh
    autoreconf -i
    ./configure
    make
    ```

## Contributing
We welcome contributions! Here are some ways you can help:

1. **Report bugs**: If you find a bug, please report it by opening an issue.
2. **Suggest features**: If you have an idea for a new feature, please open an issue to discuss it.
3. **Submit code changes**: If you have a fix or a new feature, please submit a pull request.

## Development
To set up a development environment, follow these steps:

1. **Clone the repository**:
    ```sh
    git clone https://github.com/ilikecoding-197/todolist.git
    cd todolist
    ```

2. **Install dependencies**:
    Make sure you have `make` and a C compiler installed.

3. **Build the project**:
    ```sh
    ./configure
    make
    ```

4. **Make your changes**:
    Make your changes in a new branch and submit a pull request for review.