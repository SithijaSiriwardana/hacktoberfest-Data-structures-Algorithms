#include<iostream>
#include<cstddef>

using namespace std;

class HashMap
{
	public:
		int *arr;
		int size;
		
		HashMap(int size)
		{
			this->size = size;
			arr = new int[size];
			
			for(int i=0;i<size;i++)
			{
				arr[i] = 0;
			}
		}
		
		int hash(int n)
		{
			static int i = 0;
			int x = n%size;
			int y = 8-(n%8);
			int z = (x + i*y)%size;
			i++;
			return z;
			
		}
		
		int insert(int n)
		{
			int key = n;
			int index = hash(key);
			int count = 0;
			
			while(arr[index] != 0 && arr[index] != -1)
			{
				if(count++ >= size)
				{
					return 0;
				}
				index = hash(key);
			}
			arr[index] = n;
			return 1;
		}
		
		int search(int n)
		{
			int counter = 0;
			int key = n;
			int index = hash(key);
			
			while(arr[index] != 0 && counter++ < size)
			{
				if(arr[index] == n)
				{
					return 1;
				}
			}
			return 0;
		}
		
		int del(int n)
		{
			int key = n;
			int index = hash(key);
			
			while(arr[index] != 0)
			{
				if(arr[index] == n)
				{
					arr[index] = -1;
					return 1;
				}
				index = hash(key);
			}
			return 0;
		}
		
		void display()
		{
			for(int i=0;i<size;i++)
			{
				cout << arr[i] << " ";
			}
		}
	
};


int main()
{
	HashMap H(11);
	H.insert(22);
	H.insert(1);
	H.insert(13);
	H.insert(11);
	H.insert(24);
	H.insert(33);
	H.display();
}
