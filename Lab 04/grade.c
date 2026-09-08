 #include<stdio.h>
        int main() {
         int marks;
         printf("Enter your Marks");
         scanf("%d", &marks);
         if(marks >100 ){
            printf("Error: Invalid marks");
           }
          
         else if(marks >= 85 ){
            printf(" is grade A", marks);
         }
         else if(marks >= 70 ){
            printf(" is grade b", marks);
         }
         else if(marks >= 60){
            printf(" is grade c", marks);
         }
           else if(marks >= 50){
            printf("is grade d", marks);
           }
           
           else{
            printf("Your are fail"); 
           }
                
            return 0;
        }