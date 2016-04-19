#include <stdio.h>
#include <string.h>

int main ()
{
   char command[50];

   strcpy( command, "ping -s twitch.tv");
   system(command);

   return(0);
} 
