#include<iostream>
#include<stack>

using namespace std;

class Flexstack
{
	private:
		int size;
		int element;
		int presentsize = 0;
	public:
		void setsize(int i)
		{
			this->size = i;
		}
		
		stack<char> flex;
		
		void setstack(char a)
		{
			int i = (int)a;
			this->element = i;
			int temp;
			for(temp=0;temp<size;temp++)
			{
				flex.push((char)(element+temp));
				presentsize ++;
			}
			cout<<""<<endl;
		}
		void readstack()
		{
			stack<char> Temp;
			if(presentsize!=0)
			{
				int temp;
				for(temp=0;temp<presentsize;temp++)
				{
					cout<<flex.top()<<endl;
					Temp.push(flex.top());
					flex.pop();
				}
				cout<<"Present size of stack: "<< presentsize<<endl;
				cout<<""<<endl;
			
				for(temp=0;temp<presentsize;temp++)
				{
					flex.push(Temp.top());	
					Temp.pop();
				}
			}
			else
			{
				cout<<"Empty"<<endl;
			}
			
			cout<<""<<endl;
		}
		
		void popstack(int k)
		{
			if(k<=presentsize)
			{
				int temp;
				for(temp=0;temp<k;temp++)
				{
					flex.pop();
					presentsize--;
				}
			}
			else
			{
				cout<<"Unavailable"<<endl;
			}
			cout<<""<<endl;
		}
		
		void addstack(char b)
		{
		
			if(presentsize<size)
			{
				int i = (int)b;
				flex.push(b);
				presentsize++;	
				cout<<"Present size of stack: "<< presentsize<<endl;
			}
			else
			{
				cout<<"Unavailable"<<endl;
			}
			cout<<""<<endl;
		}
		
		void fullorempty()
		{
			if(presentsize==size)
			{
				cout<<"Full"<<endl;
			}
			else if(presentsize == 0)
			{
				cout<<"Empty"<<endl;
			}
			else
			{
				cout<<"Not full or empty"<<endl;
			}
			cout<<""<<endl;
			
		}
};

int main(void)

