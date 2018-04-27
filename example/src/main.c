// POSIX for uname()/struct utsname
#include <sys/utsname.h>

// Standard
#include <stdio.h>

int main() {
   struct utsname info;
   uname(&info);
   printf("Hello from Raspberry PI..\r\n");
   printf("OS: %s\r\n", info.sysname);
   printf("Host name: %s\r\n", info.machine);
   printf("Node name: %s\r\n", info.nodename);
   printf("Version: %s\r\n", info.version);
   printf("Release: %s\r\n", info.release);

   return 0;
}