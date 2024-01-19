#include <stdio.h>
#include <string.h>
int main()
{
// qus 1
    char str1[100]="Rahul";
   char str2[100]="Rahul";
   int a=strcmp(str1,str2);
      
   
  if(a==0){
      printf("both are same");
  }else{
      printf("both are not same");
  }
   return 0;

//   qus 2
  char str[6]="zabcxy";
   
   for(int i=5;i>=0;i--){
       printf("%c\n",str[i]);
   }

// qus 3
      char str4[100]="xyz";
   char str5[100]=" abc";
   
   printf("%s",strcat(str4,str5));

//  qus 4
   char str6[100];
   printf("enter your name char");
   scanf("%s",&str6);
   for(int i=0;str6[i]>'\0';i++){
       printf("%c\n",str6[i]);
   }

}