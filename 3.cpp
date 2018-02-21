#include <iostream>
#include <cstring>
using namespace std;


class hiddenword

{
	int len;
	string s,guessed;
	void getword();
	void play(char);
};

void hiddenword::getword()
{
	cout<<"enter word"<<endl;
	cin>>s;
	len=strlen(s);
	for(int i=0;i<len;i++)
	{
		guessed[i]="\*";
	}
}

void hiddenword::play(char l)
{
	cout<<"guess letter";
	cin>>l;
	for(int i=0;i<len;i++)
	{
		if(s[i]==l)
		guessed[i]=l;
	}
}
	
	
  
  

int main()
{ char l;
	hiddenword word;
	word.getword();
	cout<<"guess letter";
	cin>>l;
	word.play(l);

	return 0;
}
