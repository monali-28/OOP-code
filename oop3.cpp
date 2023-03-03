#include<iostream>
using namespace std;
class publication
{
    protected:
        string title;
        float price;
    public:
    publication()
    {
        title="";
        price=0.0;
    }
    publication(string t,float p)
    {
        title=t;
        price=p;
    }
};
class book:public publication
{
    private:
        int pages;
    public:
        book():publication()
        {
            pages=0;
        }
        book(string t,int p,float pr):publication(t,pr)
        {
            if(p>0&&pr>0.0)
            {
                pages=p;
            }
            else
			{
                throw(0);
            }
        }
        void display()
        {
            cout<<title<<"|"<<pages<<"|"<<price<<endl;
        }
};
class tape:public publication
{
    private:
        float mins;
    public:
        tape():publication()
        {
            mins=0.0;
        }
        tape(string t,float p,float pr):publication(t,pr)
        {
            mins=p;
            if(p>0&&pr>0.0)
            {
                mins=p;
            }
            else
	{
                throw(0);
            }
        }
        void display()
        {
            cout<<title<<"|"<<mins<<"|"<<price<<endl;
        }
};
int main()
{
    int pages;
    float price;
    string title;
    cout<<"Enter Book Details : Title|pages|price"<<endl;
    cin>>title>>pages>>price;
    float mins,pr;
    string t;
    cout<<"Enter Tape Details : Title|mins|price"<<endl;
    cin>>t>>mins>>pr;
    book b;
    tape t1;
    try
    {
        b = book(title,pages,price);
        t1 = tape(t,mins,pr);
    }
    catch(...)
    {
        b.display();
        t1.display();
        b=book("",0,0);   //The terminated is called as the destructor is called but again the constructor is called that why there is message.
        t1=tape("",0,0);
    }
    //b.display();
    //t1.display();
    return 0;
}
