//Hamilton Nguyen 1000538439 problem 2 07-19-2019

#ifndef	LANGS_H	
#define	LANGS_H	
	
#include <iostream>
#include <string>
#include<fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#define MAX 10000
#define HEAD 770

using namespace std;

class Language_company
{
	vector<Language_company>LearnerList;
	vector<Language_company>TutorList;
	vector<int>access;
	string name;
	string gender;
	string language;
	string date;
	double pay;
	char sunday;
	char monday;
	char tuesday;
	char wednesday;
	char thursday;
	char friday;
	char saturday;
	int session;
	
	public:
	
	Language_company(string a, string b, string c, string d, double e, char f, char g, char h, char i, char j, char k, char l)
	{
		name = a;
		gender = b;
		language = c;
		date = d; 
		pay = e;
		sunday = f;
		monday = g;
		tuesday = h;
		wednesday = i;
		thursday = j;
		friday = k;
		saturday = l;
		
	}
	
	Language_company(string a, string b, string c, string d, double e, char f, char g, char h, char i, char j, char k, char l, int m)
	{
		name = a;
		gender = b;
		language = c;
		date = d; 
		pay = e;
		sunday = f;
		monday = g;
		tuesday = h;
		wednesday = i;
		thursday = j;
		friday = k;
		saturday = l;
		session = m;
		
	}
	
	string getName();
	string getGender();
	string getLanguage();
	string getDate();
	double getPay();
	char getSunday();
	char getMonday();
	char getTuesday();
	char getWednesday();
	char getThursday();
	char getFriday();
	char getSaturday();
	int getSession();
	
};

class Person
{

	protected:
	
   string name;
   string gender;
   string language;
   string date;
   double pay;
   char sunday;
   char monday;
   char tuesday;
   char wednesday;
   char thursday;
   char friday;
   char saturday;
   int session;
   int validation;
   string raw[MAX];
   string nameroster[HEAD];
   string genderroster[HEAD];
   string languageroster[HEAD];
   string dateroster[HEAD];
   double payroster[HEAD];
   char sundayroster[HEAD];
   char mondayroster[HEAD];
   char tuesdayroster[HEAD];
   char wednesdayroster[HEAD];
   char thursdayroster[HEAD];
   char fridayroster[HEAD];
   char saturdayroster[HEAD];
   int sessionroster[HEAD];
   vector<Language_company>LearnerList;
   vector<Language_company>TutorList;
   vector<int>access;
   
   public:
	
	void DataBundle(string m, string n, string o, string p, double q, char r, char s, char t, char u, char v, char w, char x);
	void DataBundle1(string m, string n, string o, string p, double q, char r, char s, char t, char u, char v, char w, char x, int y);
	
   
	virtual void File();
	int matchGender();
	int matchLanguage();
	int matchDate();
	void matchDays();
	void matchPrice();
	void acceptPupil();
	void setSession(int a);
	int validationcheck();
	
};


class Tutor: public Person
{
	public:
	
	
	void File();	
};

class Learner: public Person
{
	public:
	
	void File();
	
};
	
#endif	
	
	