#include<iostream>
#include<cstring>
using namespace std;
int main()

{
int k=0,n,b=0;
char s[10];
char a,guessed[26];
cout<<"enter word"<<endl;
cin>>s;
n=strlen(s);
char w[n];
int flag=0;
for(int i=0;i<n;i++)
{w[i]='*';}
cout<<endl;
puts(w);

while(k!=8)
{
cout<<"guess letter"<<endl;
cin>>a;
guessed[b++]=a;

for(int j=0;j<n;j++)
{
if (s[j] == a)
{
w[j]=a;
flag=1;
}
}
if (flag==0)
{k++;
cout<<k<<"wrong attempts"<<endl<<8-k<<"left"<<endl;
}
if(k==8)
{
cout<<"game over"<<endl;
}
puts(w);
flag=0;
}
}
