#include<stdio.h>
#include<iostream>
using namespace std;

struct Node
{
	struct Node *next;
	int data;
}N;
class ll
{
public:
	Node* top;
	ll()
	{
		top = NULL;
	}
	void push(int ndata)
	{
		Node *ne = new Node();
		ne->data = ndata;
		ne->next = top;
		top = ne;
		cout<<"Pushed "<<ne->data<<"\n";
	}
	void pop()
	{
		if(top == NULL){
			cout<<"Stack Empty"<<"\n";
			return;
		}
		cout <<"Popped "<< top->data<<"\n";
		top = top->next;
	}
	void printStack()
	{
		Node *temp = top;
		while(temp!=NULL)
		{
			cout<<" "<<temp->data;
			temp = temp->next;
		}
		cout << "\n";
	}
	
	void insertAfter(int d, int nd)
	{
		Node* cur = top;
		while(cur != NULL)
		{
			if(cur -> data == d)
			{
				Node* i = new Node();
				i->data = nd;
				i->next = cur->next;
				cur->next=i;
			}
			cur = cur->next;
		}
	}

	void deleteTop()
	{
		Node* temp = top;
		top = top->next;
		delete temp;
	}
	
};

int main()
	{
		ll l;

		//public:
		cout << "Hello\n";
		//N.data = 2;
		//cout<<N.data<<"\n";
		//l.top = NULL;
		//top->next = NULL;
		l.push(1);
		l.push(2);
		l.printStack();
		l.insertAfter(1,10);
		l.deleteTop();
		l.printStack();
		l.pop();

		l.push(22);
		l.pop();
		l.pop();
		l.pop();

		return 0;
	}