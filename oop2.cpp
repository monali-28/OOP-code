#include<iostream>
using namespace std;
class student;
class person
{
	private:
		string name,bg,add,tele,dlo,dob;
	public:
		friend class student;
		person()
		{
			this->name=name;
			name="",bg="",add="",tele="",dlo="",dob="";
		}
		person(const person &p)
		{
			name=p.name;
			bg=p.bg;
			add=p.add;
			tele=p.tele;
			dlo=p.dlo;
			dob=p.dob;
		}
		
};

class student
{
	private:
		int roll;
		string Class;
		string *div;
		string d;
		static int count;
	public:
		student()
		{
			person();
			roll=0;
			Class="";
			div=NULL;
		}
		void acceptStudent(person &p)
		{
			cout<<"Enter your Name : ";
			cin>>p.name;
			cout<<"Enter your Blood Group : ";
			cin>>p.bg;
			cout<<"Enter your Address : ";
			cin.get();
			getline(cin,p.add);
			cout<<"Enter your Telephone Number : ";
			cin>>p.tele;
			cout<<"Enter your Driving License No : ";
			cin>>p.dlo;
			cout<<"Enter your Date of Birth : ";
			cin>>p.dob;
			cout<<"Enter your Roll No. : ";
			cin>>roll;
			cout<<"Enter your class name : ";
			cin>>Class;
			cout<<"Enter your Division : ";
			cin>>d;
			div=&d;
			count++;
		}
		inline void displayStudent(person &p)
		{
			cout<<"Name : "<<p.name<<endl;
			cout<<"Blood Group : "<<p.bg<<endl;
			cout<<"Address : "<<p.add<<endl;
			cout<<"Telephone No : "<<p.tele<<endl;
			cout<<"Driving License : "<<p.dlo<<endl;
			cout<<"Birthdate : "<<p.dob<<endl;
			cout<<"Roll No : "<<roll<<endl;
			cout<<"Class : "<<Class<<endl;
			cout<<"Division : "<<d<<endl;
		}
		static int get()
		{
			return count;
		}	
		~student()
		{	
			cout<<"student Destructor called."<<endl;			
		}
		
		
};
int student::count;
int main()
{
	person *p[10];
	student *s[10];
	int i=0;
	while(1)
	{
		int ch;
		cout<<"1.Enter student Data | 2. Displaying the entire database | 0.Exit "<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		if(ch==1)
		{
			s[i]=new student();
			p[i]=new person();
			s[i]->acceptStudent(*p[i]);
			//s[i]->displayStudent(*p[i]);
			i++;
		}
		else if(ch==2)
		{
			for(int j=0;j<i;j++)
			{
				cout<<"-----------------------------------------------------------"<<endl;
				s[j]->displayStudent(*p[j]);
				cout<<"-----------------------------------------------------------"<<endl;
			}
			cout<<"Total Students : "<<student::get()<<endl;
			for(int j=0;j<i;j++)
    			{
        			delete p[j];
        			delete s[j];
    			}	
		}
		else if(ch==0)
		{
			cout<<"Exited"<<endl;
			break;
		}		
	}	
	return 0;
}
