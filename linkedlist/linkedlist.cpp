#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};
struct Node *first=NULL;
struct Node *second=NULL;
struct Node *third=NULL;
//
void create(int A[], int n){
	int i;
	struct Node *t,*last;
	first=new Node;
	first->data=A[0];
	first->next = NULL;
	last = first;
	
	for(i=1;i<n;i++){
		t= new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void create2(int A[], int n){
	int i;
	struct Node *t,*last;
	second=new Node;
	second->data=A[0];
	second->next = NULL;
	last = second;
	
	for(i=1;i<n;i++){
		t= new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

// counting
int count(struct Node *p){
	int c=0;
	while(p!=NULL){
		c++;
		p=p->next;
	}
	return c;		
}
// sum 
int sum(struct Node *p){
	int sum=0;
	while(p!=NULL){
		sum += p->data;
		p=p->next;
	}
	return sum;
}
// Max 
int Max(struct Node *p){
	int m=-32768; //build in 32 bit min value
	while(p!=NULL){
		if(p->data > m){
			m = p->data;
			p=p->next;
		}
	}
	return m;
}

// Linear Search
struct Node * LSearch(struct Node *p,int key){
    while(p!=NULL){
    	if(key == p->data)
    	return p;
    	p=p->next;
	}
	return NULL;	
}
// Move to head in linear search
struct Node *search(struct Node *p,int key){
	struct Node *q=NULL;
	while(p!=NULL){
		if(key==p->data){
			q->next = p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p=p->next;
	}
	return NULL;
}
// Insertion
void Insert(struct Node *p,int index,int x){
	struct Node *t;
	int i;
	if(index < 0 || index > count(p))
	 return;
	t = new Node;
	t->data = x;
	
	if(index == 0){
		t->next = first;
		first =t;
	}
	else{
		for(i=0;i<index-1;i++){
			p=p->next;
		}
			t->next = p->next;
			p->next = t;
		
	}
}
// -- Deleting from linkedIn --
int Delete(struct Node *p,int index){
 struct Node *q = NULL;
 int x = -1,i;
 if(index < 1 || index > count(p))
 {
 	return -1;
 }
 if(index==1){
 	q=first;
 	x=first->data;
 	first=first->next;
 	delete q;
 	return x;
 } else {
 	 for(i=0;i<index-1;i++){
 	 	q=p;
 	 	p=p->next;
	  }
	  q->next= p->next;
	  x=p->data;
	  delete p;
	  return x;
 }
}
// removing duplicate
void RemoveDuplicate(struct Node *p){
	struct Node *q=p->next;
	 while(q!=NULL){
	 	if(p->data != q->data){
	 		p=q;
	 		q=q->next;
		 }
		 else
		 {
		 	p->next = q->next;
		 	delete q;
		 	q= p->next;
		 }
	 }
}

void Reverse1(struct Node *p){
	int *A,i=0;
	struct Node *q=p;
	A = new int;
	while(q!=NULL)
	{
		A[i]=q->data;
		q=q->next;
		i++;
	}
	q=p;
	i--;
	while(q!=NULL){
		q->data = A[i];
		q= q->next;
		i--;
	}
}

void Reverse2(struct Node *p){
	struct Node *q = NULL;
	struct Node *r = NULL;
	while(p!=NULL){
		r=q;
		q=p;
		p=p->next;
		q->next = r;
	}
	first = q;
}
//concat 
void Concat(struct Node *p, struct Node *q){
	third = p;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next = q;
}

void display(struct Node *p){
	while(p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
}
// Checking Loop in linked list
int isLoops(struct Node *f){
	struct Node *p,*q;
	p=q=f;
	do{
		p=p->next;
		q=q->next;
		q=q?q->next:q;
	}while(p && q && p!=q);
	if(p==q)
	return 1;
	else 
	return 0;
}

// 
int main(){
	int A[] = {10,20,30,40,50};
//	int B[] = {1,2,3,4,5};
	create(A,5);
//	create2(B,5);
//	cout<<"displaying numbers\n";
//	display(first);
//	cout<<"counting is\n";
//	cout<<count(first)<<endl;
//	cout<<"sum is\n";
//	cout<<sum(first)<<endl;
//	cout<<"Max is\n";
////	cout<<Max(first)<<endl;
//    cout<<"LSearch is\n";
//	struct Node *temp;
//	temp = search(first,20);
//	if(temp)
//	cout<<"key is found \n"<<temp->data;
//	else
//	cout<<"key is not found\n";
	// inserting
//	Insert(first,3,10);
    struct Node *t1,*t2;
    t1=first->next->next;
    t2= first->next->next->next->next;
    t2->next = t1;
    cout<<isLoops(first);
}