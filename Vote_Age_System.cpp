#include<iostream>
using namespace std;

int main()
{
	char citizen_name[500000];
	int i=0;
	int Age;
	char ID[8];
		
	while(i<27)
	{
	
	cout<<"Enter the your name : "<<endl;
	cin>>citizen_name;
	
	cout<<"Enter your ID number : "<<endl;
	cin>>ID;
	
	cout<<"Your Name : "<<citizen_name<<endl;
	cout<<"Your ID : "<<ID<<endl;
	
	cout<<"Enter your Age : "<<endl;
	cin>>Age;
    if(Age>=18)
	 {
	 	cout<<"\t\t\t\t\t\tYOU CAN VOTE"<<endl;
	 	cout<<"\t\t\t\t\t\tINSERT YOUR ID CARD IN THE SLOT"<<endl;
	 	cout<<"\t\t\t\t\t\tINSERT YOUR VOTING CARD IN THE SLOT"<<endl;
	 }
	else
	{
		cout<<"\t\t\t\t\t\tYOU ARE NOT ALLOWED TO VOTE"<<endl;
		cout<<"\t\t\t\t\t\tCOME BACK WHEN YOU'RE OLD ENOUGH TO VOTE"<<endl;
	i++;	
	}
} 
	return 0;
   }
