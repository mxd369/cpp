# It says, "still reachable: 72,704 bytes in 1 blocks." Do I have a leak?

No. Many implementations of the C++ standard libraries use their own memory pool
allocators. Memory for quite a number of destructed objects is not immediately 
freed and given back to the OS, but kept in the pool(s) for later re-use. The 
fact that the pools are not freed at the exit of the program causes Valgrind to 
report this memory as still reachable. Even if you do not create objects, the
standard library still sets everything up just in case you do. 
