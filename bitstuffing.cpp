#include<stdio.h>
#include<string.h>
int main() {
  int i=0,count=0;
 char data[100];
 char flag[9]="01111110";

 printf("Enter Data Bits: ");
 scanf("%s",data);
 
 
 printf("\nData Bits After Bit stuffing :");
 printf("%s",flag);
 for(i=0; i<strlen(data); i++)
 {
    if(data[i]=='1')
        count++;
    else
        count=0;
    printf("%c",data[i]);
    if(count==5)
    {
        printf("0");
        count=0;
    }
 }
  printf("%s",flag);
 return 0;
}

