#include <stdio.h>
int main(){
    int n;
    int arr[100];

    printf("input number of elements in the array n:");
    scanf("%d", &n);
    //if(n>=0){
     //   printf("Please enter valid input number in array");    
    //}
   // else {
     //   return 1;
    //}
int arr[n];
    for (int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    //for (int i=0; i<n ; i++){
    //    printf("%d ",arr[i]);
   // }
int pos;
scanf("%d",&pos);

if ( pos>n || pos<1 ){
    printf("Enter valid position to delete... :(");

}
for (int i=pos; i<(n-1);i++ ){
    arr[i]=arr[i+1];

}
for (int i=pos; i<(n-1);i++ ){
    arr[i]=arr[i+1];
    printf("%d",arr[i])

}
return 0;


    
}