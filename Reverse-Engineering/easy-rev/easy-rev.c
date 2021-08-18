#include<stdio.h>

void main(){

char a[7] = "";
char first_pass[]="radare2";
int b,c;

printf("Enter the first password => ");
scanf("%s",&a);
int check=strncmp(a,first_pass);
if (check==0)
{
  printf("Enter the second password => ");
  scanf("%d",&b);
  if(b==15){
    printf("Enter the third password => ");
    scanf("%d",&c);
    if(c==1337){
      printf("flag{%s_%d_%d}",a,b,c);
    }
    else
      printf("Incorrect password!! Exiting...");
  }
  else
    printf("Incorrect password!! Exiting...");
}

else{
  printf("Incorrect password!! Exiting...");
  }

}

