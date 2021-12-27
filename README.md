Note: _This was my second 42 project. This code is from November 2020. This README was written by the amazing [Qing Li](https://github.com/qingqingqingli), it was copied with her permission; it perfectly describes the project._

[![Logo](https://github.com/qingqingqingli/readme_images/blob/master/codam_logo_1.png)](https://github.com/qingqingqingli/get_next_line)

## get_next_line
***The aim of this project is to code a function that returns a line ending with a newline, read from a file descriptor.***

This project also introduces the concept of static variables in C programming.

## Technical considerations

- Allowed functions: ```malloc```, ```free```, ```write```
- All heap allocated memory space must be properly freed when necessary

## How to test
> Run the following commands

```shell
$ git clone https://github.com/elbaradi/42_get_next_line.git
$ cd get_next_line
$ gcc -Wall -Werror -Wextra  -D BUFFER_SIZE=32 -o get_next_line main.c get_next_line.c get_next_line_utils.c
$ ./get_next_line goodfellas.txt
```