#include"stack.h"
#include<iostream>
#include<cctype>
using namespace std;

stack::stack()
{
	top=0;
}

bool stack::isempty() const
{
	return top==0;   //�ж��Ƿ��ǿ�ջ 
}

bool stack::isfull() const
{
	return top==MAX;//�ж��Ƿ���ջ 
}

bool stack::push(const Item &item)
{
	if(top<MAX)
	{
		items[top++]=item;
		return true;
	}
	
	else 
		return false;
} 

bool stack::pop(Item & item)
{
	if(top>0)
	{
		item=items[--top];
		return true;
	}
	else
		return false;
}

int main()
{
	stack st;
	char ch;
	unsigned long po;
	cout<<"please enter A to add a purchase order,\n"<<"p to process a PO ,or Q to quit.\n";
	
	while(cin>>ch&&toupper(ch)!='Q')  //ת��Сд��ĸλ��д
	{
		while(cin.get()!='\n')
		{
			continue;
		}
		
		switch(ch)
		{
			case 'A'://���� 
			case 'a': 
				cout<<"enter a po number to add:";
				cin>>po;
				if(st.isfull()) 
				{
					cout<<"stack already full\n";
				}
				else 
					st.push(po);
					break;
			
			case 'p':
			case'P': 
				if(st.isempty())
				{
					cout<<"stack already empty\n";
				}
				else 
				{
					st.pop(po);
					cout<<"po# "<<po<<" popped\n";
				}
				break;
		}
		cout<<"please enter A to add a purchase order\n"
		<<"p to process a PO, or Q to quit.\n";
	} 
	cout<<"Bye"<<endl;
	return 0;
}
