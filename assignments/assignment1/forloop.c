https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char*s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for(int i=a;i<=b;i++){
          if(i>=1&&i<=9){
              printf("%s\n",s[i]);
              
          }
          else if(i>9){
             if(i%2==0){
                 printf("even\n");}
                 else{
                     printf("odd\n");
                 }
             }
          }
      

    return 0;
}


