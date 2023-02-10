<h1 align="center">
	📖 get_next_line
</h1>

<p align="center">
	<b><i>Reading a line on a fd is way too tedious</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/KarenDanielyan/get_next_line?style=flat-square" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/KarenDanielyan/get_next_line?color=red&style=flat-square" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/KarenDanielyan/get_next_line?color=style=flat-square" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/KarenDanielyan/get_next_line?color=yellow&style=flat-square" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/KarenDanielyan/get_next_line?color=green&style=flat-square" />
</p>

## Requirements:

* Repeated calls (e.g., using a loop) to your get_next_line() function should let you read the text file pointed to by the file descriptor, one line at a time.
* Your function should return the line that was read. If there is nothing else to read or if an error occurred, it should return NULL.
* Make sure that your function works as expected both when reading a file and when reading from the standard input.
* Please note that the returned line should include the terminating \n character, except if the end of file was reached and does not end with a \n character.
* Your header file get_next_line.h must at least contain the prototype of the get_next_line() function.
* Add all the helper functions you need in the get_next_line_utils.c file.
* Because you will have to read files in get_next_line(), add this option to your compiler call: -D BUFFER_SIZE=n
* We consider that get_next_line() has an undefined behavior if the file pointed to by the file descriptor changed since the last call whereas read() didn’t reach the end of file.
* We also consider that get_next_line() has an undefined behavior when reading a binary file. However, you can implement a logical way to handle this behavior if you want to.
* Global variables are forbidden.
* lseek is forbidden.
* Develop get_next_line() using only one static variable.
* Your get_next_line() can manage multiple file descriptors at the same time.

## Final Grade: [![kdaniely's 42 get_next_line Score](https://badge42.vercel.app/api/v2/cldiw2g0k01220fl8ferid3xf/project/2940576)](https://github.com/JaeSeoKim/badge42)
