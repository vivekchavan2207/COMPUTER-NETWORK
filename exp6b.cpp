#include<iostream>
#include<string>
using namespace std;
int main()
{
	string data,
	stuffed_data = " ";
	int count =0;
	
	cout<<"Enter the data bits : " ;
	cin>>data;
	
	// bit stuffing
	for(char bit:data)
	{
		stuffed_data += bit;
		
		if(bit=='1')
		{
			count ++;
			
			if(count == 5)
			{
				stuffed_data += '0';
				count = 0;
			}
		}
		else
		{
			count = 0;
		}
	}
	
	cout<<"\n Original data : " <<data <<endl;
	cout<<"Stuffed data : " <<stuffed_data <<endl;
	
	return 0;
}
Footer
