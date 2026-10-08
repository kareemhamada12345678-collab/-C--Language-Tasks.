//#include <stdio.h>
//#include <stdlib.h>
//1) Write a C program that prints the following sequence.
//int main()
//{
// int A,N;
// float sum=0;
// printf("Enter A = ");
// scanf("%d",&A);
//  printf("Enter N = ");
// scanf("%d",&N);
//for(int i=1;i<=N;i++){
//    sum+=((float) A/i);
//}
//printf("The sum sequence = %.3f ",sum);
//    return 0;
//}
//
//--------------------------------------------------------------------
//
//2) Write a C program to check whether a number is a palindrome.
//
//int main()
//{
//
//int num,x,y=0;
// printf("Enter num ");
// scanf("%d",&num);
//int orignialnum=num;
// while(num!=0){
//    x=num%10;
//
//    num=num/10;
//    y=y*10+x;
// }
// if(y==orignialnum){
//    printf("A %d is a palindrome",orignialnum);
// }
// else{
//    printf("A %d is a not palindrome",orignialnum);
// }
//
//return 0;
//}
//
//----------------------------------------------------------------------
//3) Write a C program that takes two integers A and B and, for every number in the
//interval [A, B], calculates and prints its digit sum
//int main()
//{
//int A,B;
//int small,big;
//printf("Enter A = ");
//scanf("%d",&A);
//printf("Enter B = ");
//scanf("%d",&B);
//
//if(A>B){
//    big=A;
//    small=B;
//}
//else{
//    big=B;
//    small=A;
//}
//
//
//while(small<=big){
//
// int temp=small;
//int sum=0;
//
//while(temp!=0){
//    sum+=temp%10;
//    temp=temp/10;
//
//}
// printf("%d -> %d\n", small, sum);
//small++;
//
//}
//
//return 0;
//}
//
