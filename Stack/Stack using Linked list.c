#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;  
void push(int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

void display() {
    struct Node *temp = top;
    if(top == NULL) {
        printf("Stack is Empty\n");
        return;
    }
    
    printf("Values in Stack : ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n,val;
    printf("Enter no. of values to insert : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        printf("Enter value %d : ",i);
        scanf("%d",&val);
        push(val);         
    }

    display();              
    return 0;
}
