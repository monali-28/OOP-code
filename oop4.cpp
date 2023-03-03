#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outfile;
	outfile.open("data.txt",ios::app);
	string s;
	while(1)
	{
		cout<<"Enter 1 To Enter New Line || Enter 0 to exit"<<endl;
		int ch;
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		if(ch==1)
		{
			cout<<"Enter your lIne:- "<<endl;
			cin.get();
			getline(cin,s);
		//	outfile<<s<<endl;	
		}
		else if(ch==0)
		{
			cout<<"Exited"<<endl;
			break;
		}	
	}
	outfile.close();
	ifstream infile;
	infile.open("data.txt",ios::in);
	cout<<"file contents:"<<endl;
	while(!infile.eof())
	{
		getline(infile,s);
		cout<<s<<endl;
	}
}
