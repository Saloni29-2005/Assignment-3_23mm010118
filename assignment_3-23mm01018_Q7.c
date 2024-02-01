#include <stdio.h>
int main()
{
    float M, N, K, W, T;
    printf("enter the marks obtained: ");
    scanf("%f", &M);
    printf("\nno of classes attended: ");
    scanf("%f", &N);
    printf("\ntotal no of classes conducted: ");
    scanf("%f", &K);
    if (M < 0 || M > 100)
    {
        printf("marks can't be less than 0 or greater than 100");
        
    }
    if (N > K)
    {
        printf("no of classes attended can't be greater than total classes held"); 
        
    }
    else
    {   W = N / K;
        T = M * W;
        if (T >= 90)
        {
            printf("Final Score = %f", T);
            printf("\nGrade is=EX");
        } 
        else if(T >= 80 && T < 89){
            printf("Final Score = %f", T);
            printf("\nGrade is=A");
        }
        else if(T >= 70 && T< 79){
            printf("Final Score = %f", T);
            printf("\nGrade is=B");
        }
        else if(T >= 60 && T < 69){
            printf("Final Score = %f", T);
            printf("\nGrade is=C");
        }
        else if(T >= 50 && T < 59){
            printf("Final Score = %f", T);
            printf("\nGrade is=D");
        }
        else if(T >= 40 && T < 49 ){
            printf("Final Score = %f", T);
            printf("\nGrade is=P");
        }
        else{
            printf("Final Score = %f", T);
            printf("\nGrade is=F");
        }
    }

    return 0;
}