#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* link;

};
struct node* front;
struct node* rear;

void enqueue(){

	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	scanf("%d", &temp -> data);
	temp -> link = NULL;

	if(rear == NULL){

		front = temp;
		rear = temp;
	}

	rear -> link = temp;
	rear = temp;
}

void dequeue(){

	struct node* temp;
	if(front == NULL){

		printf("queue is empty\n");

	}

	else
	{
		printf("%d\n", front -> data);
		temp = front;
		front = temp -> link;
		if(front == NULL)
			rear = NULL;

		free(temp);
	}
}

void peek(){

	printf("%d\n", front -> data);

}

void is_Empty(){

	if(front == NULL){

		printf("queue is empty\n");

	}
}

void main(){
	
	int ch;
	while(1){
		printf("Enter choice : \n");
		printf("1. ENQUEUE\n2. DEQUEUE\n3. PEEK\n4. IS_EMPTY\n5. EXIT\n");
		scanf("%d", &ch);

		switch(ch){

			case 1:

				enqueue();
				break;

			case 2:

				dequeue();
				break;

			case 3:

				peek();
				break;

			case 4:

				is_Empty();
				break;

			case 5:

			       exit(0);
			       break;


			default:
			       printf("Invalid Input\n");
			       break;
		}
	}
}

