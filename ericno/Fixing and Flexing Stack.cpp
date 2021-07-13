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
{
	int x;
	cout<<"Write size of stack: "<<endl;
	cin>> x;
	Flexstack F;
	F.setsize(x);
	
	char a;
	cout<<"Write first Char of stack: "<<endl;
	cin>> a;
	F.setstack(a);
	
    int Act;
    do
	{
	cout<<"What you gonna do"<<endl;
    cout<<"1.Read 2.Add 3.Delete 4.Check if full or empty 5.End"<<endl;
    cin>>Act;
    switch (Act)
      {
      	case 1:
      		F.readstack();
      		break;
      	case 2:
      		cout<<"Write one Char to add"<<endl;
      		char a;
			cin>>a;
			F.addstack(a);
			break;
      	case 3:
      	 	cout<<"How much would you like to delete?"<<endl;
      	 	int i;
      	 	cin>>i;
		  	F.popstack(i);
		  	break;
	case 4:
		F.fullorempty();
			break;
	case 5:
		cout<<""<<endl;
		break; 
	default:
		cout<<"Unknown"<<endl;
		break;
 	
	  }
	}while (Act!=5);
    
    cout<<"End"<<endl;
}

