#include<stdio.h>

int main()
{
    int date,month,year;;
    printf("Enter the Date \n");
    scanf("%d",&date);
    printf("Enter the Month \n");
    scanf("%d",&month);
    printf("Enter the Year \n");
    scanf("%d",&year);

    if(month==1|| month==3 || month==5 || month==7||
    month==8|| month==10|| month==12)
    {
     if(date <= 31 ){
          printf("The entered date is %d:d:d",date,month,year);
      }else{
        printf("Entered Date is invalid");
    }
  }else{
    if(date<=30){
        printf("The entered date is %d:%d:%d", date,month,year);
    }else{
        printf("Entered Date is invalid");
    }
  }
  return 0;
}
