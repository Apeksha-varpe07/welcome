#include<stdio.h>
#include<stdlib.h>
struct node
{
	int vertex;
	struct node*next;
};
void Display(struct node *temp)
{
	printf("\t");
	while(temp)
	{
		printf("V%d->",temp->vertex);
		temp=temp->next;
	}
	printf("NULL\n");
}
void Append(struct node **head,int vertex)
{
	struct node*newnode;
	newnode=malloc(sizeof(struct node));
	newnode->vertex=vertex;
	newnode->next=NULL;
	if(*head==NULL)
		*head=newnode;
	else
	{
		struct node *temp=*head;
		while(temp->next)
			temp=temp->next;
		temp->next=newnode;
	}
}
int **createMatrix(int n)
{
	int **matrix,e,i,j;
	matrix=malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		matrix[i]=malloc(sizeof(int)*n);
	printf("HOW MANY EDGES THIS GRAPH HAS :");
	scanf("%d",&e);
	while(e>0)
	{
		printf("Enter source :");
		scanf("%d",&i);
		printf("Enter destination :");
		scanf("%d",&j);
		matrix[i][j]=1;
		e--;
	}
	return matrix;
}
struct node **matrix2List(int **matrix, int n)
{
	struct node **head;
	int i,j;
	head=malloc(sizeof(struct node *)*n);
	for(i=0;i<n;i++)
	{
		head[i]=NULL;
		for(j=0;j<n;j++)
		{
			if(matrix[i][j]==1)
				Append(&head[i],j);
		}
	}
	return head;
}
void DisplayLists(struct node **head,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("V%d :",i);
		Display(head[i]);
	}
}
void degree(int **matrix,int n)
{
	int i,j,out,in;
	for(i=0;i<n;i++)
	{
		out=0;
		for(j=0;j<n;j++)
			out +=matrix[i][j];
		printf("Printign degree of vertex V%d :\n",i);
		printf("\tOutdegree :%d",out);
		printf("\n");
	}
}
int main()
{
	int n,**matrix,e,i,j;
	struct node **head;
	printf("ENter number of vetices :");
	scanf("%d",&n);
	matrix=createMatrix(n);
	head=matrix2List(matrix,n);
	DisplayLists(head,n);
	degree(matrix,n);
}

