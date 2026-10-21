// Circular Queue Implementation Using Array for Parcel Handling System
#include<stdio.h> 
#define size 5 

void main(){
int arr[size]; 
int op;
int front = -1, rear = -1; 
do{
    printf("1. Add\n2. Dispatch\n3. Display\n4. Exit\n"); 
    printf("Enter a option: ");
    scanf("%d", &op); 
    switch(op){
        case 1:
            if(front == (rear + 1)%size){ 
                printf("Parcel queue is Full\n\n"); 
                break;
            }else{
                if(front == -1){ 
                    front++;
                }
            rear = (rear+1)%size; 
            printf("Enter parcel no. to add: "); 
            scanf("%d", &arr[rear]); 
            printf("\n");
            }
            break;

        case 2:
            if(front == -1){
                printf("Parcel queue is Empty\n\n"); 
                break;
            }else{
                printf("Parcel %d is dispatched\n\n", arr[front]); 
                if(front == rear){
                    front = -1;
                    rear = -1;
                }
            front = (front+1)%size;
            }
            break;
 
        case 3:
            if(front == -1){
                printf("Parcel queue is empty\n\n"); 
                break;
            }else{
                int i = front;
                printf("Parcel no. left in queue are: "); 
                do{
                    printf("%d ", arr[i]); 
                    i = (i+1)%size;
                }while(i != (rear+1)%size); 
                printf("\n\n");
            }
            break;

        case 4:
            printf("EXITED SUCCESSFULLY");
            break;

        }
    }while(op <= 3);
}