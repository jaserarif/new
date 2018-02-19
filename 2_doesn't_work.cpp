#include<iostream>
#include<cstring>

using namespace std;

string function(string, int, char, string);
int strike;

int main()
{    
     char g,n;
     int strikes=8;
     string name;
	cout<<"enter name"<<endl;
	cin>>name;
	n=name.length();
	
	string guessed;
	for(int i=0;i<n;i++)
	guessed[i]='*';
	cout<<guessed;
	while(strikes!=0)
	{
	cout<<"make a guess"<<endl;
	cin>>g;
	guessed=function(name,n,g,guessed);
	cout<<guessed;
	if(strike!=0)
	strikes--;
	if(strikes==0)
	cout<<"gameover"<<endl;
    }
	return 0;
}
	
	string function(string name, int n, char g, string guessed)	
	{
		for(int i=1; i<=n;i++)
		{   
		    if(guessed[i]==g)
		    {
			cout<<"already guessed"<<endl;
			strike=0;
		    } 
			if((name[i]==g)&&(guessed[i]=='*'))
			{
			guessed[i]=g;
			strike=0;
		    }
	    } 
	    return guessed;
	}

	
