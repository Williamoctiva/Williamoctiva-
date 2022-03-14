#include<stdio.h>

int main()
{
    int N,a,b,c,d,e,f,g;
    printf("Enter integer:");
    scanf("%d",& N);
    
    
    if(N >=92){
      printf("your letter grade is A\n");
    }else if(N>=84){
      printf("your letter grade is A-\n");
    } else if(N>=76){
      printf("your letter grade is B\n");
    }else if(N>=68){
      printf("your letter grade is B-\n");
    }else if(N>=60){
      printf("your letter grade is C\n");
    }else if(N>=50){
      printf("your letter grade is D\n");
    }else if(N>=1){
      printf("your letter grade is F\n");
    }else if(N==0){
      printf("Invalid Input. Try Again");
    }
    
    return 0;
}