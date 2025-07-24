#include<stdlib.h>
#include<stdio.h>

struct node{
	int data;
	struct node* next;
};
struct node* a[1000];

void insert_elemnt(int i,int x)
{
	struct node* temp;
	temp= (struct node*)malloc(sizeof(struct node));
	temp->data= x;
	temp->next= NULL;
	if(a[i]==0)
    {
    	a[i]= temp;
	}
	else
	{
		struct node* p,*s;
		p= a[i];
		s= a[i];
		while(p->next!=NULL)
		{
			p= p->next;
		}
		p->next= temp;
		temp= NULL;
	}
}

void display()
{
	struct node* temp;
	int i;
	for(i=0; a[i]!=0;i++)
	{
		temp= a[i];
		while(temp!=NULL)
		{
			printf("%d-->", temp->data);
			temp= temp->next;
		}
		printf("\n");
	}
}

void shortest_path()                       //program to calculate shortest path between source node and target node
{
	int S,T;
	int i,k;
	int flag1=0, flag2=0;
	struct node* temp;
	int x1,x2,h[100];
	printf("\nenter the source node and target node: ");
	scanf("%d %d", &S,&T);
	for(i=0; a[i]!=0; i++)
	{
		temp= a[i];
	if(temp->data==S)
	{
		flag1=1;
		x1= i;
	}
	if(temp->data==T)
	{
		flag2=1;
		x2= i;
	}
		
	}
	if(flag1==1&&flag2==1)
	{ 
		for(i=0; a[i]!=0; i++)
		{
			h[i]= a[x2]-a[i];                  //heruistic value calculation
		}
		flag1=1; flag2= 1;
	printf("\n");
	int nod1,nod2,nod,f1,f2;
	printf("%d-->",S);
		while(S!=T)
		{
		
			if(a[x1]->next!=NULL&&a[x1]->next->next!=NULL)
			{
				for(i=0; a[i]!=0; i++)
				{
					if(a[i]->data==(int)a[x1]->next->data)
					nod1= i;
					if(a[nod1]->data==T)
					flag1=0;
				}
				if(flag1==0)
				{
					printf("%d-->",a[nod1]->data);
					break;					
				}
				for(k=0; a[k]!=0; k++)
				{
					if(a[k]->data==a[x1]->next->next->data)
					nod2= k;
					if(a[nod2]->data==T)
					flag2==0;
				}
				if(flag2==0)
				{
					printf("%d-->",a[nod2]->data);
					break;
				}
				f1= h[nod1];
				f2= h[nod2];
				if(f1>f2)
				x1= nod2;
				else
				x1= nod1;		
			}
			else
			{
				for(i=0; a[i]!=0; i++)
				{
					if(a[x1]->next->data==a[i]->data)
					nod= i;
				}
				x1 = nod;
			}
			if(flag1==0||flag2==0)
			break;
			S= a[x1]->data;
				printf("%d-->",S);
		}
	}
}

int main()
{ freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
	insert_elemnt(0,1);
	insert_elemnt(0,2);
	insert_elemnt(0,3);
	insert_elemnt(1,2);
	insert_elemnt(1,4);
	insert_elemnt(1,6);
	insert_elemnt(2,3);
	insert_elemnt(2,5);
	insert_elemnt(2,6);
	insert_elemnt(3,4);
	insert_elemnt(3,7);
	insert_elemnt(4,5);
	insert_elemnt(4,6);
	insert_elemnt(5,6);
	insert_elemnt(5,7);
	insert_elemnt(6,7);
	display();
	shortest_path();
	
	return 0;
}