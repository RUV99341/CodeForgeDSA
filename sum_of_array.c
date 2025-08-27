# include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number for array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    printf("\nThe sum of all the value of array: %d",sum);
    return 0;
}