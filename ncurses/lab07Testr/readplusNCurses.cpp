#include <ncurses.h>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <unistd.h>
#include <fcntl.h>

using std::cout;
using std::endl;

int main(const int argc, const char * argv []) {



  if (argc != 2) {
    cout << "Usage: " << argv[0] << " FILE" << endl;
    exit(EXIT_FAILURE); // see exit(3)
  } // if

  const char * filename = argv[1];
  int fd = open(filename, O_RDONLY);

  if (fd != -1) {

    cout << "Opened " << filename << "; "
	 << "fd = " << fd << "; "
	 << "error = " << strerror(errno) 
	 << endl;
  } else {
    cout << "Could not open " << filename << "; "
	 << "fd = " << fd  << " (should be -1); "
	 << "error = " << strerror(errno) 
	 << endl;
    exit(EXIT_FAILURE); // see exit(3)
  } // if

  const int BUFF_SIZE = 1024; // size of data buffer
  char buffer [BUFF_SIZE];    // data buffer 
  int n = 0;                  // number of bytes read


  // test
  initscr();
  // test


  while ((n = read(fd, buffer, BUFF_SIZE)) > 0) {
    if (write(STDOUT_FILENO, buffer, n) == -1) perror("write");
  } // while 

  // test refresh
  refresh();
  // test

  close(fd); // should check return value here
  
  // test
  endwin();
  // test
  
  return EXIT_SUCCESS;
} // main