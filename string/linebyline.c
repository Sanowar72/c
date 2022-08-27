#include <stdio.h>
#include<string.h>
int main() {
    
   char s[500];
   printf("Enter the character\n");
   gets(s);
   printf("you entered \n");
   puts(s);
   int l=strlen(s);
   for(int i=0;i<l;i++){
       if(s[i]==' '){
           printf("\n");
       }else{
           printf("%c",s[i]);
       }
   }

    return 0;
}