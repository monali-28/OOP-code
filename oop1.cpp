#include<iostream>
using namespace std;
class complex
{
	private:
		int r;
		int i;
	public:
		complex()
		{
			r=0;
			i=0;
		}
	complex operator +(complex &c)
	{
		complex t;
		t.r=r+c.r;
		t.i=i+c.i;
		return t;
		
	}
	complex operator *(complex &c)
	{
		complex t;
		t.r=(r*c.r)-(i*c.i);
		t.i=(r*c.i)+(i*c.r);
		return t;
	}
	friend istream & operator >>(istream &in,complex &c);
	friend ostream & operator <<(ostream &out,complex &c);
};
istream & operator >>(istream &in,complex &c)
{
	cout<<"Enter real part : ";
	in>>c.r;
	cout<<"Enter Imaginary part :";
	in>>c.i;
	return in;   // This is for the error arrises return type.
}
ostream & operator <<(ostream &out,complex &c)
{
	out<<c.r<<" + "<<c.i<<"i"<<endl;
	return out; // This is for the error arrises return type.
}
int main()
{
	complex c1,c2,c3,c4;
	cout<<"enter first complex number"<<endl;
	cin>>c1;
	cout<<"enter second complex number"<<endl;
	cin>>c2;
	c3=c1+c2;
	cout<<"The addition :"<<c3<<endl;
	c4=c1*c2;
	cout<<"The Multiplication :"<<c4<<endl;
	return 0;
}

