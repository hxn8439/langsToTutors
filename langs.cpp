//Hamilton Nguyen 1000538439 problem 2 07-19-2019

#include "langs.h"	

string ToLowerCase(string w)
{
	for (int i=0; i<w.size(); i++)
	{
		w[i] = tolower(w[i]);
	}
	
	return w;
}

void Person::DataBundle(string m, string n, string o, string p, double q, char r, char s, char t, char u, char v, char w, char x)
   {
		name = m;
		gender = n;
		language = o;
		date = p; 
		pay = q;
		sunday = r;
		monday = x;
		tuesday = t;
		wednesday = u;
		thursday = v;
		friday = w;
		saturday = x;
   }
   
   void Person::DataBundle1(string m, string n, string o, string p, double q, char r, char s, char t, char u, char v, char w, char x,int y)
   {
		name = m;
		gender = n;
		language = o;
		date = p; 
		pay = q;
		sunday = r;
		monday = x;
		tuesday = t;
		wednesday = u;
		thursday = v;
		friday = w;
		saturday = x;
		session = y;
   }
 
	void Person::setSession(int a)
	{
		session = a;
	}
    string Language_company::getName()
   {
	   return name;
   }
   
   string Language_company::getGender()
   {
	   return gender;
   }
   
   string Language_company::getLanguage()
   {
	   return language;
   }
   
   string Language_company::getDate()
   {
	   return date;
   }
   
   double Language_company::getPay()
   {
	   return pay;
   }
   
   char Language_company::getSunday()
   {
	   return sunday;
   }
   
   char Language_company::getMonday()
   {
	   return monday;
   }
   
   char Language_company::getTuesday()
   {
	   return tuesday;
   }
   
   char Language_company::getWednesday()
   {
	   return wednesday;
   }
   
   char Language_company::getThursday()
   {
	   return thursday;
   }
   
   char Language_company::getFriday()
   {
	   return friday;
   }
   
   char Language_company::getSaturday()
   {
	   return saturday;
   }
   
   int Language_company::getSession()
   {
	   return session;
   }

	void Person::File()
	{
		cout<<"Person file function is being accessed."<<endl;
	}
	
	void Tutor::File()
	{
		
		char Namechar[256];
		string NewName;
		string NewGender;
		string NewLanguage;
		string Newdate;
		string NewPay;
		string NewSunday;
		string NewMonday;
		string NewTuesday;
		string NewWednesday;
		string NewThursday;
		string NewFriday;
		string NewSaturday;
		string NewSession;
		
		cout<<"\nEnter your Full Name: ";
		cin.getline(Namechar,256);
		name=Namechar;
		cout<<"\nEnter your Gender: ";
		cin>>gender;
		cout<<"\nEnter a language you are teaching: ";
		cin>>language;
		cout<<"\nEnter a date on how long have you practice your language(Format XX/XX/XXXX): ";
		cin>>date;
		cout<<"\nEnter your rate of pay per hour:$";
		cin>>pay;
		cout<<"\nAre you available on sunday? (X:Yes, -:No):";
		cin>>sunday;
		cout<<"\nAre you available on monday? (X:Yes, -:No):";
		cin>>monday;
		cout<<"\nAre you available on tuesday? (X:Yes, -:No):";
		cin>>tuesday;
		cout<<"\nAre you available on wednesday? (X:Yes, -:No):";
		cin>>wednesday;
		cout<<"\nAre you available on thursday? (X:Yes, -:No):";
		cin>>thursday;
		cout<<"\nAre you available on friday? (X:Yes, -:No):";
		cin>>friday;
		cout<<"\nAre you available on saturday? (X:Yes, -:No):";
		cin>>saturday;
		cout<<"\nEnter a integer of how many learners you can teach? (btwn 1-9): ";
		cin>>session;
		Language_company Language_company(name, gender, language, date, pay, sunday, monday, tuesday, wednesday, thursday, friday, saturday, session);
		TutorList.push_back(Language_company);
		
		ofstream written("Tutors.txt", ios::out | ios::app);
		if(written.is_open())
		{	
			written<<endl;
			written<<endl;
			written<<name+'\n';
			written<<"Gender:"<<gender<<'\n';
			written<<"Language:"+language+'\n';
			written<<"Start:"+date+'\n';
			ostringstream strs;
			strs<<pay;
			string str = strs.str();
			written<<"Max:$"+str+'\n';
			written<<"Sunday:"<<sunday<<endl;
			written<<"Monday:"<<monday<<endl;
			written<<"Tuesday:"<<tuesday<<endl;
			written<<"Wednesday:"<<wednesday<<endl;
			written<<"Thursday:"<<thursday<<endl;
			written<<"Friday:"<<friday<<endl;
			written<<"Saturday:"<<saturday<<endl;
			string s = to_string(session);
			written<<"Session:"+s+'\n';
			written<<endl;
		}
		
		else
		cout<<"UNABLE TO OPEN TUTORS.TXT FILE"<<endl;	
	}	
	
	void Learner::File()
	{
		int i = 0;
		int j = 0;
		
		//input to file of Learner
		ifstream file;
		string line;
		file.open("Learners.txt");
		string concat;
	
		while(getline(file,line))
		{
			stringstream linestream(line);
			getline(linestream, raw[i]);
			++i;
		}
		
		for(i=0; i<HEAD; i+=13)
		{	
			nameroster[j]=raw[i];
			++j;
		}
		
		j =0;
		for(i=1; i<HEAD; i+=13)
		{	
			stringstream ss;
			ss<<raw[i][7]<<raw[i][8]<<raw[i][9]<<raw[i][10]<<raw[i][11]<<raw[i][12];
			concat = ss.str();
			genderroster[j] = concat;
			++j;
		}
		
		
		j =0;
		for(i=2; i<HEAD; i+=13)
		{	
			stringstream as;
			as<<raw[i][9]<<raw[i][10]<<raw[i][11]<<raw[i][12]<<raw[i][13]<<raw[i][14]<<raw[i][15];
			concat = as.str();
			languageroster[j] = concat;
			++j;
		}
		
		j =0;
		for(i=3; i<HEAD; i+=13)
		{	
			stringstream as;
			as<<raw[i][6]<<raw[i][7]<<raw[i][8]<<raw[i][9]<<raw[i][10]<<raw[i][11]<<raw[i][12]<<raw[i][13]<<raw[i][14]<<raw[i][15]<<raw[i][16];
			concat = as.str();
			dateroster[j] = concat;
			++j;
		}
		
		j =0;
		for(i=4; i<HEAD; i+=13)
		{	
			stringstream as;
			as<<raw[i][5]<<raw[i][6]<<raw[i][7]<<raw[i][8]<<raw[i][9]<<raw[i][10]<<raw[i][11]<<raw[i][12];
			concat = as.str();
			stringstream bs(concat);
			bs>>payroster[j];
			++j;
		}
		
		j =0;
		for(i=5; i<HEAD; i+=13)
		{	
			sundayroster[j]=raw[i][7];
			++j;
		}
		
		j =0;
		for(i=6; i<HEAD; i+=13)
		{	
			mondayroster[j]=raw[i][7];
			++j;
		}
		
		j =0;
		for(i=7; i<HEAD; i+=13)
		{	
			tuesdayroster[j]=raw[i][8];
			++j;
		}
		
		j =0;
		for(i=8; i<HEAD; i+=13)
		{	
			wednesdayroster[j]=raw[i][10];
			++j;
		}
		
		j =0;
		for(i=9; i<HEAD; i+=13)
		{	
			thursdayroster[j]=raw[i][9];
			++j;
		}
		
		j =0;
		for(i=10; i<HEAD; i+=13)
		{	
			fridayroster[j]=raw[i][7];
			++j;
		}
		
		j =0;
		for(i=11; i<HEAD; i+=13)
		{	
			saturdayroster[j]=raw[i][9];
			++j;
		}
		
		for(i=0; i<HEAD; i++)
		{
			Person::DataBundle(nameroster[i], genderroster[i], languageroster[i], dateroster[i], payroster[i], sundayroster[i], mondayroster[i], tuesdayroster[i], wednesdayroster[i], thursdayroster[i], fridayroster[i], saturdayroster[i]);
			Language_company Language_company(name, gender, language, date, pay, sunday, monday, tuesday, wednesday, thursday, friday, saturday);
			LearnerList.push_back(Language_company);	
		}
		
		
		for(i=0; i<=MAX; i++)
		{	
			raw[i].clear();
		}

		
		for(i=0; i<HEAD; i++)
		{		
			nameroster[i].clear();
			genderroster[i].clear();
			languageroster[i].clear();
			dateroster[i].clear();
			payroster[i]=0.0;
			sundayroster[i]='\0';
			mondayroster[i]='\0';
			tuesdayroster[i]='\0';
			wednesdayroster[i]='\0';
			thursdayroster[i]='\0';
			fridayroster[i]='\0';
			saturdayroster[i]='\0';
			
		}	
		
		
		//input to file of Tutor(s)
		ifstream myfile;
		string line1;
		myfile.open("Tutors.txt");
		i = 0;
		j = 0;
		string concat1;
	
		while(getline(myfile,line1))
		{
			stringstream linestream(line1);
			getline(linestream, raw[i]);
			++i;
		}
		
		for(i=0; i<HEAD; i+=14)
		{	
			nameroster[j]=raw[i];
			++j;
		}
		
		j =0;
		for(i=1; i<HEAD; i+=14)
		{	
			stringstream ss;
			ss<<raw[i][7]<<raw[i][8]<<raw[i][9]<<raw[i][10]<<raw[i][11]<<raw[i][12];
			concat1 = ss.str();
			genderroster[j] = concat1;
			++j;
		}
		
		
		j =0;
		for(i=2; i<HEAD; i+=14)
		{	
			stringstream as;
			as<<raw[i][9]<<raw[i][10]<<raw[i][11]<<raw[i][12]<<raw[i][13]<<raw[i][14]<<raw[i][15];
			concat1 = as.str();
			languageroster[j] = concat1;
			++j;
		}
		
		j =0;
		for(i=3; i<HEAD; i+=14)
		{	
			stringstream as;
			as<<raw[i][6]<<raw[i][7]<<raw[i][8]<<raw[i][9]<<raw[i][10]<<raw[i][11]<<raw[i][12]<<raw[i][13]<<raw[i][14]<<raw[i][15]<<raw[i][16];
			concat1 = as.str();
			dateroster[j] = concat1;
			++j;
		}
		
		j =0;
		for(i=4; i<HEAD; i+=14)
		{	
			stringstream as;
			as<<raw[i][5]<<raw[i][6]<<raw[i][7]<<raw[i][8]<<raw[i][9]<<raw[i][10]<<raw[i][11]<<raw[i][12];
			concat1 = as.str();
			stringstream bs(concat1);
			bs>>payroster[j];
			++j;
		}
		
		j =0;
		for(i=5; i<HEAD; i+=14)
		{	
			sundayroster[j]=raw[i][7];
			++j;
		}
		
		j =0;
		for(i=6; i<HEAD; i+=14)
		{	
			mondayroster[j]=raw[i][7];
			++j;
		}
		
		j =0;
		for(i=7; i<HEAD; i+=14)
		{	
			tuesdayroster[j]=raw[i][8];
			++j;
		}
		
		j =0;
		for(i=8; i<HEAD; i+=14)
		{	
			wednesdayroster[j]=raw[i][10];
			++j;
		}
		
		j =0;
		for(i=9; i<HEAD; i+=14)
		{	
			thursdayroster[j]=raw[i][9];
			++j;
		}
		
		j =0;
		for(i=10; i<HEAD; i+=14)
		{	
			fridayroster[j]=raw[i][7];
			++j;
		}
		
		j =0;
		for(i=11; i<HEAD; i+=14)
		{	
			saturdayroster[j]=raw[i][9];
			++j;
		}
		
		j =0;
		for(i=12; i<HEAD; i+=14)
		{	
			stringstream cs;
			cs<<raw[i][8]<<raw[i][9]<<raw[i][10]<<raw[i][11]<<raw[i][12]<<raw[i][13]<<raw[i][14];
			concat1 = cs.str();
			stringstream bs(concat1);
			bs>>sessionroster[j];
			++j;
		}
		
		for(i=0; i<HEAD; i++)
		{
			Person::DataBundle1(nameroster[i], genderroster[i], languageroster[i], dateroster[i], payroster[i], sundayroster[i], mondayroster[i], tuesdayroster[i], wednesdayroster[i], thursdayroster[i], fridayroster[i], saturdayroster[i], sessionroster[i]);
			Language_company Language_company(name, gender, language, date, pay, sunday, monday, tuesday, wednesday, thursday, friday, saturday, session);
			TutorList.push_back(Language_company);
			setSession(sessionroster[i]);
			access.push_back(session);
		}
		
		
		for(i=0; i<=MAX; i++)
		{	
			raw[i].clear();
		}
		
		for(i=0; i<HEAD; i++)
		{		
			nameroster[i].clear();
			genderroster[i].clear();
			languageroster[i].clear();
			dateroster[i].clear();
			payroster[i]=0.0;
			sundayroster[i]='\0';
			mondayroster[i]='\0';
			tuesdayroster[i]='\0';
			wednesdayroster[i]='\0';
			thursdayroster[i]='\0';
			fridayroster[i]='\0';
			saturdayroster[i]='\0';
			sessionroster[i]=0;
		}	
		
	}
	
	int Person::validationcheck()
	{
		int i;
		char inputcha[256];
		string input;
		cout<<"Please enter your Name: ";
		cin.getline(inputcha,256);
		cout<<endl;
		input = inputcha;	
	
		for(i=0;i<770;i++)
		{
			if(((LearnerList[i].getName().find(input)) != string::npos ) )
			{
				cout<<"Your name is on file!!"<<endl;
				return 1;
			}
		}
		
		return 0;
	}
	
	int Person::matchGender()
   {   
		int i;
		int j;
		char inputcha[256];
		string input;
		string input2;
		cout<<"You choosed match Tutor by Gender..."<<endl<<endl;
		cout<<"Please enter your Name: ";
		cin.getline(inputcha,256);
		cout<<endl;
		input = inputcha;	
		
		
		for(i=0;i<770;i++)
		{
			if(((LearnerList[i].getName().find(input)) != string::npos ) )
			{
				
				cout<<"What is your desired gender?"<<endl<<endl;
				cin>>input2;
				getchar();
				for(int j=0; j<770; j++)
				{	
					if(TutorList[j].getGender().find(input2) != string::npos)
					{
						cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
						cout<<"Is your match!"<<endl<<endl;
						return 1;
					}
					
					return 0;	
				}
			}		
		}
   }
   
   int Person::matchLanguage()
   {
	   cout<<"You choosed match Tutor by Language..."<<endl<<endl;  
		int i;
		int j;
		char inputcha[256];
		string input;
		string input2;
		cout<<"Please enter your Name: ";
		cin.getline(inputcha,256);
		cout<<endl;
		input = inputcha;	
		
		for(i=0;i<770;i++)
		{
			if(((LearnerList[i].getName().find(input)) != string::npos ) )
			{
				cout<<"What is your desired Language?"<<endl<<endl;
				cin>>input2;
				getchar();
				for(int j=0; j<770; j++)
				{	
					if(TutorList[j].getLanguage().find(input2) != string::npos)
					{
						cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
						cout<<"Is your match!"<<endl<<endl;
						return 1;
					}
					
					return 0;	
				}	
			}
		}
   }
	int Person::matchDate()
	{
	   cout<<"You choosed match Tutor by Date..."<<endl<<endl;  
		int i;
		int j;
		char inputcha[256];
		string input;
		string input2;
		cout<<"Please enter your Name: ";
		cin.getline(inputcha,256);
		cout<<endl;
		input = inputcha;	
		
		for(i=0;i<770;i++)
		{
			if(((LearnerList[i].getName().find(input)) != string::npos ) )
			{
				cout<<"What is your desired year of experience since(e.g. 1995)?"<<endl;
				cin>>input2;
				getchar();
				for(int j=0; j<770; j++)
				{	
					if(TutorList[j].getDate().find(input2) != string::npos)
					{
						cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
						cout<<"Is your match!"<<endl<<endl;
						return 1;
					}
					
					return 0;	
				}	
			}
		}
    }
	void Person::matchDays()
	{
		cout<<"\nYou choosed match Tutor by Days..."<<endl<<endl;
		int i;
		int j;
		char inputcha[256];
		string input;
		string input2;
		cout<<"Please enter your Name: ";
		cin.getline(inputcha,256);
		cout<<endl;
		input = inputcha;	

		for(i=0;i<770;i++)
		{
			if(((LearnerList[i].getName().find(input)) != string::npos ) )
			{
				cout<<"What day do you want a tutor?"<<endl;
				cin>>input2;
				getchar();
				
				if(input2 == "sunday")
				{	
					for(int j=0; j<770; j++)
					{	
						if(TutorList[j].getSunday()=='x')
						{
							cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
							cout<<"Is your match!"<<endl<<endl;
						}
						
						else
						cout<<"\nTutor not available at this day"<<endl<<endl;
						break;
					}	
				}
				
				if(input2 == "monday")
				{	
					for(int j=0; j<770; j++)
					{	
						if(TutorList[j].getMonday()=='x')
						{
							cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
							cout<<"Is your match!"<<endl<<endl;
						}

						else
						cout<<"\nTutor not available at this day"<<endl<<endl;
						break;
					}	
				}
				
				if(input2 == "tuesday")
				{	
					for(int j=0; j<770; j++)
					{	
						if(TutorList[j].getTuesday()=='x')
						{
							cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
							cout<<"Is your match!"<<endl<<endl;
						}	

						else
						cout<<"\nTutor not available at this day"<<endl<<endl;
						break;	
					}	
				}
				
				if(input2 == "wednesday")
				{	
					for(int j=0; j<770; j++)
					{	
						if(TutorList[j].getWednesday()=='x')
						{
							cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
							cout<<"Is your match!"<<endl<<endl;
						}

						else
						cout<<"\nTutor not available at this day"<<endl<<endl;
						break;	
					}	
				}
				
				if(input2 == "thursday")
				{	
					for(int j=0; j<770; j++)
					{	
						if(TutorList[j].getThursday()=='x')
						{
							cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
							cout<<"Is your match!"<<endl<<endl;
						}		

						else
						cout<<"\nTutor not available at this day"<<endl<<endl;
						break;	
					}	
				}
				
				if(input2 == "friday")
				{	
					for(int j=0; j<770; j++)
					{	
						if(TutorList[j].getFriday()=='x')
						{
							cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
							cout<<"Is your match!"<<endl<<endl;
						}

						else
						cout<<"\nTutor not available at this day"<<endl<<endl;
						break;	
					}	
				}
				
				if(input2 == "saturday")
				{	
					for(int j=0; j<770; j++)
					{	
						if(TutorList[j].getSaturday()=='x')
						{
							cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
							cout<<"Is your match!"<<endl<<endl;
						}		

						else
						cout<<"\nTutor not available at this day"<<endl<<endl;
						break;	
					}	
				}
			}	
			
		}
    }
	void Person::matchPrice()
	{
	   cout<<"You choosed match Tutor by Price..."<<endl<<endl;   
		int i;
		int j;
		char inputcha[256];
		string input;
		double input2;
		cout<<"Please enter your Name: ";
		cin.getline(inputcha,256);
		cout<<endl;
		input = inputcha;	
		
		for(i=0;i<770;i++)
		{
			if(((LearnerList[i].getName().find(input)) != string::npos ) )
			{
				cout<<"What is your desired pay per hour for tutor(s)?: $";
				cin>>input2;
				getchar();
				
				for(int j=0; j<770; j++)
				{	
					double check = TutorList[j].getPay();
					if(check<input2 && TutorList[j].getPay()!= 0.0)
					{
						cout<<"\nThis Tutor: "<<TutorList[j].getName()<<endl;
						cout<<"Is your match!"<<endl<<endl;
					}

					else
					{
						cout<<"No Tutors available"<<endl<<endl;
						break;
					}	
				}	
				
				
			}
		}
    }
	
	void Person::acceptPupil()
	{
		cout<<"You request a Tutor, let see if he or she can accept..."<<endl<<endl;
		int i;
		int j;
		char inputcha[256];
		char inputcha1[256];
		string input;
		string input2;
		cout<<"Please enter your Name: ";
		cin.getline(inputcha,256);
		cout<<endl;
		input = inputcha;	
		
		for(i=0;i<770;i++)
		{
			if(((LearnerList[i].getName().find(input)) != string::npos ) )
			{
				cout<<"What is your desired tutor?:";
				cin.getline(inputcha1,256);
				input2 = inputcha1;
				
				for(int i=0; i<770; i++)
				{	
					if((TutorList[i].getName().find(input2)) != string::npos )
					{
						int subtract = -1;
						int check1 = access[i];
						int result = check1 + subtract;
						replace(access.begin(), access.end(), check1, result);
						if(access[i]>0)
						{
							cout<<"\nThis Tutor can still take you!!"<<endl<<endl;
						}
						
						else
						{
							cout<<"This Tutor is not available!!"<<endl<<endl;
						}	
					}	
				}	
			}
		}
	}
   
   
	

	