#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void giveflag(){
  int x=0;
  
char challenge[]="cidb~5mZv5Z|5pZnK5rZU1qfm4kbx";

while(x<=strlen(challenge)){

int temp=challenge[x];
printf("%c",temp^5);
x++;
  }

}


int main(int argc, char** argv){

printf(" ==============================================\n|                    Crack Me                  |\n ==============================================\n");

if(argc==1){
  printf("Usage %s <password>\n",argv[0]);
  exit(0);
}

if(strlen(argv[1])!=7){
  printf("Incorrect Password\n");
  exit(0);
}


if(strlen(argv[1])==5){
  giveflag();
}



return 0;
}
