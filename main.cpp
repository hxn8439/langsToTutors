//Hamilton Nguyen 1000538439 problem 2 07-19-2019

#include "langs.h"	

int menu()
{
	int input;
	int input1;
	int run = 1;
	int run1 = 1;
	
	cout<<"***Welcome to Language Company***"<<endl<<endl<<endl;
	cout<<"Press any Key to continue"<<endl;
	getchar();
	Person* w = new Learner();
	w->File();
	cout<<"Hold on..."<<endl;
	cout<<"...."<<endl<<endl<<endl;
	
	cout<<"***Menu***"<<endl<<endl<<endl;
	cout<<"select options by inputing integer values"<<endl<<endl;
	cout<<"1. Find a Tutor"<<endl;
	cout<<"2. Register a Tutor"<<endl;
	cout<<"3. Check your name, as a Learner, in file"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"input:";
	cin>>input;
	cout<<endl;
	
	switch(input)
	{
		case 1:
		{
			while(run1)
			{	
				cout<<"select options by inputing integer values"<<endl<<endl;
				cout<<"1. match by gender."<<endl;
				cout<<"2. match by language."<<endl;
				cout<<"3. match by Date."<<endl;
				cout<<"4. match by days."<<endl;
				cout<<"5. match by price."<<endl;
				cout<<"6. request a specific tutor."<<endl;
				cout<<"7. exit the program."<<endl;
				cout<<"input:";
				cin>>input1;
				getchar();
				
				if(input1 == 1)
				{	
					int valid = w->matchGender();
					if (valid == 0)
					{
						cout<<"\nDid not find any Tutors that match that criteria...\n"<<endl;
					}

					else
					{
						
					}
				}
				
				if(input1 == 2)
				{	
					int valid = w->matchLanguage();
					if (valid == 0)
					{
						cout<<"\nDid not find any Tutors that match that criteria...\n"<<endl;
					}

					else
					{
						
					}
				}
				
				if(input1 == 3)
				{	
					int valid = w->matchDate();
					
					if (valid == 0)
					{
						cout<<"\nDid not find any Tutors that match that criteria...\n"<<endl;
					}

					else
					{
						
					}
				}
				
				if(input1 == 4)
				{
					w->matchDays();
				}
				
				if(input1 == 5)
				{
					w->matchPrice();
				}
				
				if(input1 == 6)
				{
					w->acceptPupil();
				}
				
				if(input1 == 7)
				{	
					cout<<"exiting..."<<endl<<endl;
					return 0;
				}
				
				else if (input1 > 7 || input1 < 1)
				{
					cout<<"invalid input, please input the number available on screen"<<endl;		
				}
			}	
		}break;
			
		case 2:
		{
			getchar();
			Person* y = new Tutor();
			y->File();
			cout<<"\nInformation is added to Tutor file, the program will now exit..."<<endl;
		}break;
		
		case 3:
		{
			getchar();
			int valid = w->validationcheck();
			
			if (valid == 0)
			{
				cout<<"Attention, your name is not in the file"<<endl;
			}

			else
			{
				
			}		
			cout<<"Program will now exit..."<<endl;
		}break;
		
		case 4:
		{
			cout<<"Exiting program now..."<<endl<<endl;
			exit(0);
		}break;
		
		default:
		{
			cout<<"Error input, please select the avialable options!"<<endl;
		}break;
	}
	
	
	return	0;	
}
	
int	main()
{
	menu();
}

