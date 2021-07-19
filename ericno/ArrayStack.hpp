class Node {
	public:
		int Data;
};

class ArrayStack{
	private:
		int Capacity;
		int Top;
		Node *Nodes;
		
	public:
		void CreateStack(int capacity);
		void DestroyStack();
		void Push(int newData);
		int Pop();
};


