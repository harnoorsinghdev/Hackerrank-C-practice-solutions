Functions(Greater of 4 numbers)

//THIS FILE CONTAINS 2 SOLUTIONS

//THIS CAN WORK UPTO n Numbers without use of nested if

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{ int lar=a;
    if(a>lar){
        lar=a;
    }
 if(b>lar){
     lar=b;
 }
 if(c>lar){
     lar=c;
 }
 if(d>lar){
     lar=d;
 }
 return lar;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
//2ND SOLUTION
#include<stdio.h>
int main(){
  int n,num,i;
  int big;
  
  printf("Enter the values of n: ");
  scanf("%d",&n);
 
  printf("Number %d",1);
  scanf("%d",&big);

  for(i=2;i<=n;i++){
    printf("Number %d: ",i);
    scanf("%d",&num);

    if(big<num)
      big=num;
  }
  
  printf("Largest number is: %d",big);

  return 0;
}
