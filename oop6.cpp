#include<iostream>
#include<vector>
using namespace std;
class items
{
	private:
		string name;
		int cost;
		int quantity;
	public:
		int code;
		items(int a, string b , int c,int d)
		{
			code=a;
			name=b;
			cost=c;
			quantity=d;
		}
		void display()
		{
			
			cout<<"Item Code ="<<code<<endl;
			cout<<"Item Name="<<name<<endl;
			cout<<"Item Cost"<<cost<<endl;
			cout<<"Item quantity="<<quantity<<endl;
		}
		
};
int main()
{
	vector<items> v1;
	int ch;
	
	while(1)
	{
		cout<<"------Menu------";
		cout<<"\n1-Inserting Items \n2-Displaying the items \n3- Searching the items \n4- Sorting the items \n0 - Exit"<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		if(ch==1)
		{
			string name;
		int cost,quantity,code;
		cout<<"Enter Items Details:"<<endl;
		cout<<"Item code:";
		cin>>code;
		cout<<"Item name :";
		cin>>name;
		cout<<"Cost of Each piece:";
		cin>>cost;
		cout<<"Quantity Of Items:";
		cin>>quantity;
		items i1(code,name,cost,quantity);
		v1.push_back(i1);
		}
		else if(ch==2)
		{
			for(int i=0;i<v1.size();i++)
			{
				v1[i].display();
			}
		}
		else if(ch==3)
		{
			int c;
			cout<<"Enter the item code to be searched:";
			cin>>c;
			int flag=0;
			for(int i=0;i<v1.size();i++)
			{
				if(v1[i].code==c)
				{
					v1[i].display();
					flag=1;
					break;
				}
			}
			if(flag==0)
				cout<<"Item not found"<<endl;
		}
		else if(ch==4)
		{
			for(int i =0;i<v1.size();i++)
            {
                for(int j=0;j<v1.size()-i-1;j++)
                {
                    if(v1[j].code>v1[j+1].code)
                    {
                        items temp = v1[j];
                        v1[j] = v1[j+1];
                        v1[j+1] = temp;
                    }
                }
            }

            for(int i =0;i<v1.size();i++)
            {
                v1[i].display();
            }
		}
		else if(ch==5)
		{
			cout<<"Thank you for using this program";
			break;
		}
		else
			break;
	}
	return 0;
}
