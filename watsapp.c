#include<stdio.h>  
#include<string.h>
#include<stdlib.h>  
struct node   
{  
  char name[50];
    int data;  
    struct node *next;   
};  
struct node *head;  
void enqueue();
void display();  
void main ()  
{  
    int choice =0;  
    while(choice != 9)   
    { 
        printf("\n***********WHATSAPP MESSAGES**********\n");
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.send a message\n2.display the message\n3.exit from the chat\n");  
        printf("\nEnter your choice:\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            	case 1:{
				enqueue();
				break;}
			case 2:
				{
				display();
				break;}
			case 3:
			{
				exit(0);
				break;}
			default:
				{
				printf("enter valid choice\n");} 
        }  
    }  
} 
void enqueue()  
{  
    struct node *ptr,*temp;      
	char msg[30];
    ptr = (struct node*)malloc(sizeof(struct node));      
    if(ptr == NULL)  
    {  
        printf("\n no message can be send");     
    }  
    else  
    {  
		printf("enter the message:\n");
	    fflush(stdin);
       fgets(msg, 30, stdin);
		strcpy(ptr->name,msg);    
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("message is sent\n");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nmessage is sent");  
          
        }  
    }  
}
void display()  
{  
   char name[30];
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("no messages are sent\n");  
    }  
    else  
    {  
        printf("\nthe messages that are recieved by the reciever are:\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%s",ptr->name);  
            ptr = ptr -> next;  
        }  
    }  
}       
