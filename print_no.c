
#include<stdio.h>
int main(){
            int n,i,j;
           printf("Enter  a no between 0-9 :\n");
           scanf("%d",&n);
           switch(n){
           case 0:
               for(i=0;i<5;i++){
         for(j=0;j<5;j++){
         if(i==0||i==4){
             printf ("*");
         }
         else{
             if((i==1&&j==0)||(i==1&&j==4)||(i==3&&j==0)||(i==3&&j==4)||(i==2&&j==0)||(i==2&&j==4)){
                 printf ("*");
             }
             else{
                 printf (" ");
             }

         }

         }
         printf("\n");
     }

            break;
            case 1:
                for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        if(j==2){
            printf ("*");
        }
        else{
        if(i==4){
            printf ("*");
        }
        else{
            printf (" ");
        }

        }

        }
        printf ("\n");
    }

            break;
            case 2:
                for(i=0;i<5;i++){
          for(j=0;j<5;j++){
          if(i==0||i==2||i==4){
              printf ("*");
          }else{
              if((i==1&&j==4)||(i==3&&j==0)){
                  printf ("*");
              }
              else{
                  printf (" ");
              }
          }

          }
          printf ("\n");
      }

            break;
            case 3:
                for(i=0;i<5;i++){
         for(j=0;j<5;j++){
         if(i==0||i==2||i==4){
             printf ("*");
         }
         else{
         if((i==1&&j==4)||(i==3&&j==4)){
             printf ("*");
         }
         else{
             printf (" ");
         }

         }

         }
         printf("\n");
     }

            break;
            case 4:
               for(i=0;i<6;i++){
        for(j=0;j<7;j++){
                if(j==0||j==5){
                        if(i==4||i==5){
                           if(j==5){
                            printf("*");
                           }
                           else{
                            printf(" ");
                           }

                        }
                        else{
                           printf("*");
                        }

                }
                else{
                        if(i==3){
                            printf("*");
                        }
                        else{
                                if(i==4&&j==5){
                                        printf("*");

                                }
                            printf(" ");
                        }


                }


        }
        printf("\n");
    }
    break;

            case 5:
                for(i=0;i<5;i++){
         for(j=0;j<5;j++){
         if(i==0||i==2||i==4){
             printf ("*");
         }
         else{
             if((i==1&&j==0)||(i==3&&j==4)){
                 printf ("*");
             }
             else{
                printf (" ");
             }

         }

         }
         printf("\n");
     }

            break;
            case 6:
                 for(i=0; i<5; i++){
            for(j=0; j<5; j++){
            if(i==0||i==2||i==4){
                 printf("*");
            }
            else{
                if((j==0&&i==1)||(j==0&&i==3)||(j==4&&i==3)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }

            }

            printf("\n");
        }

            break;
            case 7:
                for(i=0;i<5;i++){
         for(j=0;j<5;j++){
         if(i==0){
             printf ("*");
         }
         else{
         if((i==1&&j==4)||(i==2&&j==4)||(i==3&&j==4)||(i==4&&j==4)){
             printf ("*");
         }
         else{
             printf (" ");
         }

         }

         }
         printf("\n");
     }

            break;
            case 8:
                for(i=0;i<5;i++){
         for(j=0;j<5;j++){
         if(i==0||i==2||i==4){
             printf ("*");
         }
         else{
             if((i==1&&j==0)||(i==1&&j==4)||(i==3&&j==0)||(i==3&&j==4)){
                 printf ("*");
             }
             else{
                 printf (" ");
             }

         }

         }
         printf("\n");
     }

            break;
            case 9:
                for(i=0;i<5;i++){
         for(j=0;j<5;j++){
         if(i==0||i==2||i==4){
             printf ("*");
         }
         else{
             if((i==1&&j==0)||(i==1&&j==4)||(i==3&&j==4)){
                 printf ("*");
             }
             else{
                 printf (" ");
             }

         }

         }
         printf("\n");
     }

            break;






}
return 0;
}
