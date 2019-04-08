# Get_Next_Line @ 42 Silicon Valley
The aim of this project is to make a function that reads a file and at every call returns a new line from that file.
### What is it?
From a file descriptor _get_next_line(const int fd, char **line)_ will place in a pointer to string _line_ the next line of an input that hasn't been read yet from a certain file descriptor _fd_. A line is a string ended by a '\n' or by a '\0'. It returns 1 if has read something, 0 if there are no new line, -1 if there is an error (wrong file descriptor, inexistent original pointer to string). The function has to work with any length of new line and has to work with a _BUFF_SIZE_ for reading a file from 1 to 9999. As bonus this one has to work with multiple file descriptors at the same time and use only ona static variable and no global variable. Behavior is similar to getline() function: `http://man7.org/linux/man-pages/man3/getline.3.html`.
### Usage:
* git clone `https://github.com/patrisor/get_next_line.git`
* run the shell script ***sh make.sh***
* ./main ***[input file] [input file] [input file]***
### Return value:
* `return 1 when it read a line`
* `return 0 when it finished reading a file`
* `return -1 when an error occurs`
