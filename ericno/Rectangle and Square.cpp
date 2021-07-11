#include <iostream>
using namespace std;
using std::cin;
using std::cout;

//»ç°¢Çü °´Ã¼ 
class Rectangle
{
	private:
		double w,h;
		double area;
   	public:
   		void Setwh(double w, double h)
   		{
   			this->w = w;
   			this->h = h;
		   }
		double GetAreaRec()
   		{
   			area = w*h;
			return area;
		   }
};

class Square
{
	private:
		double l;
		double area;
	public:
		void Setl(double l)
		{
			this->l = l;
		}
		double GetAreaSqr()
		{
			area = l*l;
			return area;
		}
};

int main (void)
{
 
	cout<<"Choose Rectangle or Square"<<endl;
	string s;
	cin>>s;
	 
	if(s=="r")
	{
	 	cout<<"Write width and height of the rectangle"<<endl;
	 	double win, hin;
	 	cin >> win;
		cin >> hin;
		cout<<"Width: "<< win<< endl;
	 	cout<<"Height: "<< hin<<endl;
	  
		Rectangle rec;
	 	rec.Setwh(win,hin);
	 	cout<<"Area of the Rectangle: "<< rec.GetAreaRec()<<endl;
	  
	 	
	}
	else if (s=="s")
	{
		cout<<"Write length of width of the square"<<endl;
		double lin;
		cin >> lin;
		cout<<"Width: "<< lin<<endl;
		
		Square sqr;
		sqr.Setl(lin);
		cout<<"Area of the Square: "<<sqr.GetAreaSqr()<<endl;
		
	}
	else
	{
		cout<<"Error!"<<endl;
	}
	
	
	return 0;
}
