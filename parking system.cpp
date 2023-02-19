#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number_of_hours,discount,pay_amount,week_day,parking_number,Discounted_amount;
	float arrival_time;
	cout<<"Enter day of the week (1 for Monday, 2 for Tuesday, 3 for Wednwsday, 4 for Thursday, 5 for Friday, 6 for Saturday, and 7 for Sunday)= ";
	cin>>week_day;
	cout<<"Enter time to park the car in hours= ";
	cin>>number_of_hours;
	cout<<"Enter arrival time= ";
	cin>>arrival_time;
	
	if(week_day==7)
		{	
			if((number_of_hours>=1)&&(number_of_hours<=8))
			{
				if(arrival_time>=8&&arrival_time<16)
				{
					pay_amount=number_of_hours*2;
					cout<<"The payable ammount to park the car="<<pay_amount;
				}
				else 
					if(arrival_time>=16&&arrival_time<=24)
					{
						pay_amount=number_of_hours*2;
						cout<<"The payable ammount to park the car="<<pay_amount;
					}
					else
					cout<<"It is not allowed to park the car beside 8 to 24";
			}
			else
			cout<<"The maximum time to park the car are 8hours. You can't park the car behind this limited hours.";
			
		}
		else
			if(week_day==1 || week_day==2 || week_day==3 || week_day==4 || week_day==5)
			{
				if((number_of_hours==1)||(number_of_hours==2))
				{
					if(arrival_time>=8&&arrival_time<16)
					{
					pay_amount=number_of_hours*10;
					cout<<"The payable ammount to park the car="<<pay_amount;
					}
					else 
					if(arrival_time>=16&&arrival_time<=24)
						{
						pay_amount=number_of_hours*2;
						cout<<"The payable ammount to park the car="<<pay_amount;
						}
						else
						cout<<"It is not allowed to park the car beside 8 to 24";	
				}
				else
				cout<<"The maximum time to park the car from monday to friday are 2 hours. You can't park the car behind this limited hours.";
			}
			else
			if(week_day==6)
			{	
				if((number_of_hours>=1)&&(number_of_hours<=4))
				{
					if(arrival_time>=8&&arrival_time<16)
					{
					pay_amount=number_of_hours*3;
					cout<<"The payable ammount to park the car="<<pay_amount;
					}
				else 
					if(arrival_time>=16&&arrival_time<=24)
					{
						pay_amount=number_of_hours*2;
						cout<<"The payable ammount to park the car="<<pay_amount;
					}
				else
				cout<<"It is not allowed to park the car beside 8 to 24";
				}
				else
				cout<<"The maximum time to park the car on saturday are 4. You can't park the car behind this limited hours.";
			}
			else
			cout<<"The entered day is invalid";
	
	cout<<"\nGet discount";
	cout<<"\nEnter your frequent parking number= ";
	cin>>parking_number;
	if((parking_number%2==0)&&(parking_number%3==0))
		{
			if(arrival_time>=16&&arrival_time<=24)
			{
				cout<<"discount=50%";
				discount=50*pay_amount/100;
				Discounted_amount=pay_amount-discount;
				cout<<"Discounted_amount="<<Discounted_amount;
			}
			else 
				if(arrival_time>=8&&arrival_time<16)
				{
					cout<<"discount=10%";
					discount=10*pay_amount/100;
					Discounted_amount=pay_amount-discount;
					cout<<"\nDiscounted_amount="<<Discounted_amount;
				}	
		}
	else
		cout<<"Discount is not applicable";
			
}

