#include<iostream>
#include<cmath>
#include<map>
#include<cstring>
using namespace std;
int main()
{
    string state;
    map<string, int> ind;
    map<string, int>::iterator it;
    ind.insert(pair<string,int>("Uttar Pradesh",199812341));
    ind.insert(pair<string,int>("Maharashta",112372972));
    ind.insert(pair<string,int>("Bihar",103804637));
    ind.insert(pair<string,int>("West Bengal",91347736));
    ind.insert(pair<string,int>("Madhya Pradesh",72597565));
    ind.insert(pair<string,int>("Tamil Nadu",72138958));
    ind.insert(pair<string,int>("Rajasthan",68621012));
	cout<<"Enter State Name:-"<<endl;
    cin >> state;
    for(it = ind.begin();it != ind.end();++it)
    {
        if(it->first == state)
            cout << "Population of "<< it->first << " is about "<< it->second<<endl; 
    }
    cout <<endl;
    return 0;
}


