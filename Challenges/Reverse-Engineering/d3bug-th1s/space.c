#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
void banner(){

printf(" /\\/\\/\\                            /  \\\n| \\  / |                         /      \\\n|  \\/  |                       /          \\\n|  /\\  |----------------------|     /\\     |\n| /  \\ |                      |    /  \\    |\n|/    \\|                      |   /    \\   |\n|\\    /|                      |  | (  ) |  |\n| \\  / |                      |  | (  ) |  |\n|  \\/  |                 /\\   |  |      |  |   /\\\n|  /\\  |                /  \\  |  |      |  |  /  \\\n| /  \\ |               |----| |  |      |  | |----|\n|/    \\|---------------|    | | /|   .  |\\ | |    |\n|\\    /|               |    | /  |   .  |  \\ |    |\n| \\  / |               |    /    |   .  |    \\    |\n|  \\/  |               |  /      |   .  |      \\  |\n|  /\\  |---------------|/        |   .  |        \\|\n| /  \\ |              /   CTF   |   .  |  CTF    \\\n|/    \\|              (          |      |           )\n|/\\/\\/\\|               |    | |--|      |--| |    |\n------------------------/  \\-----/  \\/  \\-----/  \\--------\n                        \\\\//     \\\\//\\\\//     \\\\//\n                         \\/       \\/  \\/       \\/\n ");

}



int main () {
   banner();
   char *check=getenv("planet");
   char dummya[]="m";
   char dummy2[]="x";
   char dummyb[]="a";
   char dummy4[]="q";
   char dummyc[]="r";
   char dummy6[]="j";
   char dummyd[]="s";
   char dummy8[]="t";
   char dummy9[]="u";
   char dummy10[]="v";
   char dummy11[]="w";
   char dummy12[]="x";
   char dummy13[]="y";

   char dummy[]="";
    strcat(dummy,dummya);
    strcat(dummy,dummyb);
    strcat(dummy,dummyc);
    strcat(dummy,dummyd);
   int a=strncmp(check,dummy,6);
   if(a==0){
    printf("\nflag{off_to_%s_2021}\n",check);
   }
   else
      puts("error...");
   return(0);
}


