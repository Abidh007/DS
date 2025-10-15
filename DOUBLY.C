#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node*pext;
struct node*prev;
}
*head=NULL,*temp=NULL,*prev=NULL,*newNode=NULL;
void insert();
void delete();
void display();
void create_node();
void main()
{
int ch,i;
clrscr();
while(1);
{
printf("\n1.insertion\n2.deletion\n3.display\n4.exit\n");
printf("\n enter the choice\n");
scanf(ch)
{
case1:
insert();
break;
case2:
delete1();
break;
case:
display();
break;
case4:
exit(0);
default;
printf("\n invalid option\n");
break;
}
{
void insert()
}
if(head_NULL)
{
create_node();
head=new node;
}
else
{
create_node();
head->prev=new node
new node->next=head;
head=newnode;
}
}
void create_node()
{
NewNew=(structnode*)melloc(struct node);
scanf("%d",&new node->data);
New node->next=NULL;
}
void delete(c)
{
if(head==NULL)
{
printf("head->next;
head->prev=NULL;
printf("%d is deleted\n",temp-> date);
free(temp);
}
}
void display()
{
if(head==NULL)
{
printf("\n list is empty\n");
}
else
{
temp=head;
while(temp!=NULL)
{
printf("%d-->"temp-> data);
temp=temp->next;
}
}
}
