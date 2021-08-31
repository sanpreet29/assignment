#include<stdio.h>
#include<stdlib.h>

struct node{

        int data;
        struct node* link;

};
struct node* top = NULL;

void push(){

        struct node* temp;
        temp = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &temp -> data);

        temp -> link  = top;
        top = temp;
}

void pop(){

        struct node* temp;
        if(top == NULL)
        {
                printf("Empty Stack\n");
        }
        else
        {
                printf("%d popped\n", top -> data);
                temp = top;
                top = temp -> link;
                temp -> link = NULL;
                free(temp);
        }

}

void peek(){

        printf("%d\n", top -> data);
}


void is_Empty(){

        if(top == NULL)
        {
                printf("Empty Stack\n");
        }

}

int main(){

        int ch;
        while(1)
        {
                printf("Enter your choice: \n");
                printf("1. PUSH\n2. POP\n3. PEEK\n4. IS_EMPTY\n5. EXIT\n");
                scanf("%d", &ch);

                switch(ch)
                {
                        case 1:
                                push();
                                break;

                        case 2:
                                pop();
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
        return 0;
}