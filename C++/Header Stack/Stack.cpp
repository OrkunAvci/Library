//	private:
		bool Stack::isFull()
		{
			return (pointer == size);
		}

		bool Stack::isEmpty()
		{
			return (pointer == 0);
		}

//	public:
		Stack::Stack(int stackSize)
		{
			size = stackSize;
			stack = new int[size];
			pointer = 0;
		}
		Stack::~Stack()
		{
			delete stack;
		}

		int Stack::pop()
		{
			if (isEmpty()) { return -1; }		// Invalid operation value.
			return stack[pointer--];
		}

		bool Stack::push(int addon)
		{
			if (isFull()) { return false; }		// Invalid operation value.
			stack[++pointer] = addon;
		}