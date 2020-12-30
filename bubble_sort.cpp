#include <iostream>

using namespace std;



template<class T>
	void Swap(T &a,T&b)//Swap(arr1[min],arr1[i]);
{
	T temp=a;
	a=b;
	b=temp;
}




//º¯ÊýÄ£°å
template<typename T>		//class T
	
	void Sort(T arr1[],int len)
{
	for(int i=0;i<len;i++)
	{
		int min=i;
		for(int j=i+1;j<len;j++)
		{
			if(arr1[j]<arr1[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=arr1[min];
			arr1[min]=arr1[i];
			arr1[i]=temp;
			//Swap(arr1[min],arr1[i]);
		}
		
	
	}
	



}

template<class T>
	void printArray(T arr1[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<arr1[i]<<" ";
	}
cout<<endl;
}


void test1()
{
	char arr1[]="febaopqvtykldc";
	int Len=sizeof(arr1)/sizeof(char);
	
	Sort(arr1,Len);
	printArray(arr1,Len);
}

void test2()
{
	int arr2[]={1,5,84,96,45,21,94,55,22};
	int Len2=sizeof(arr2)/sizeof(int);
	//cout<<sizeof(arr2)/sizeof(int)<<endl;
	Sort(arr2,Len2);
	printArray(arr2,Len2);

	
}




int main() {

	//test1();
	test2();
	
	return 0;
}