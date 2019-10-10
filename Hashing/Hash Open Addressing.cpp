#include<iostream>

using namespace std;


class HashMap
{		
	public:
		
		int *arr;
		int size;
		
		HashMap(int s)
		{
			size = s;
			arr = new int[s];
			
			for(int i=0;i<s;i++)
			{
				arr[i] = 0;
			}
		}
		
		int hash(int n)
		{
			return n%size;
		}
		
		
		void insert(int n)
		{
			int key = n;
			int index = hash(key);
			
			while(arr[index] != 0 && arr[index] != -1)
			{
				index = hash(++key);
			}
			
			arr[index] = n;
		}
		
		int search(int n)
		{
			int key = n;
			int counter = 0;
			int index = hash(key);
			
			while(arr[index] != 0 && counter < size)
			{
				counter++;
				if(arr[index] == key) 
				{
					return 1;
				}
				index = hash(++key);
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
				index = hash(++key);
			}
			
			return 0;
		}
		
		void display()
		{
			for(int i=0;i<size;i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}
};

int main()
{
	HashMap H(11);
	H.insert(22);
	H.display();
	H.insert(19);
	H.display();
	H.insert(20);
	H.display();
	H.insert(11);
	H.display();
	H.insert(24);
	H.display();
	H.insert(33);
	H.display();
	H.del(33);
	H.display();
	H.insert(44);
	H.display();
}
