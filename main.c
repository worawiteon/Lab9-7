#include<stdio.h>
float A,B,ans=1;
float power(float a,int b){
  int i;
  for(i=1;i<=b;i++){
    ans *=a;
  }
  return ans;
}
int main(void){
  do{
    printf("Enter Number : ");
    scanf("%f",&A);
    printf("Enter Powerz : ");
    scanf("%f",&B);
    int x = B;
    if(B!=x || B<0){
      B = -1;
      printf("Can't do this !!\n\n");
    }
  }while(B<0);
  power(A,B);
  printf("\n%f\n",ans);
  return 0;
}