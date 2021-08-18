/*
Balanced Parentheses: Write a program that checks whether the sequence of brackets in the given string is balanced or not. The matching pair of braces is said to be balanced if the opening bracket is placed to the left (not necessarily immediate left) of the closing bracket of the exact same type in the sequence. Note that the input string contains only braces and doesn’t include whitespaces. 
Input:  str = {}()[]    Output: true
Input: str = {[()]}     Output: true
Input: str = ([(]))     Output: false


*/

#include <stdio.h>
#include <stdlib.h>
#define bool int
 

struct sNode {
    char data;
    struct sNode* next;
};

void push(struct sNode** top_ref, int new_data);

int pop(struct sNode** top_ref);

bool isMatchingPair(char character1, char character2)
{
    if (character1 == '(' && character2 == ')')
        return 1;
    else if (character1 == '{' && character2 == '}')
        return 1;
    else if (character1 == '[' && character2 == ']')
        return 1;
    else
        return 0;
}
 

bool areBracketsBalanced(char exp[])
{
    int i = 0;
 
    struct sNode* stack = NULL;
 
    while (exp[i])
    {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
            push(&stack, exp[i]);
 
        if (exp[i] == '}' || exp[i] == ')'
            || exp[i] == ']') {
 
            if (stack == NULL)
                return 0;
 
            else if (!isMatchingPair(pop(&stack), exp[i]))
                return 0;
        }
        i++;
    }
 
    
    if (stack == NULL)
        return 1; 
    else
        return 0;
}
 

int main()
{
    int size;
    scanf("%d",&size);
    
    char exp[size];
    for(int i=0;i<size;i++)
    scanf("%c",&exp[i]);
 
    
    if (areBracketsBalanced(exp))
        printf("True \n");
    else
        printf("False \n");
    return 0;
}
 

void push(struct sNode** top_ref, int new_data)
{
    
    struct sNode* new_node
        = (struct sNode*)malloc(sizeof(struct sNode));
 
    if (new_node == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
 
    new_node->data = new_data;
 
    new_node->next = (*top_ref);
 
    (*top_ref) = new_node;
}
int pop(struct sNode** top_ref)
{
    char res;
    struct sNode* top;
 
    if (*top_ref == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
    else {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
    }
}