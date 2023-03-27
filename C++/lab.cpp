#include<iostream>
using namespace std;

void delete_repeatss(char a[], int& n)// array, num
{
int k = 0;

for(int i = 0; i < n; ++i)//loop through array
{
bool flag = false;

for(int j = 0; j < k; ++j)
if(a[i] == a[j]) //check if element is repeated before
bool flag = true;

if(!flag) 
	//if not repeated add element
a[k++] = a[i];
}
for(int m=k;m<n;m++)
a[m] = '\0'; //make not required elements null
n = k;

}

int main(){

string s;
char str[80];
cout<<"Enter a line: ";
getline(cin,s);
int i=0;
while(s[i]!='\0')
{
str[i] = s[i];//store in array
i++;
}
cout<<i;//no. of letters
cout<<endl;
for(int j=0;j<i;j++)
cout<<str[j];
cout<<endl;
for(int j=0;j<i;j++)
cout<<str[j];
cout<<endl;

delete_repeatss(str,i); 

for(int j=0;j<12;j++)
cout<<str[j];
cout<<endl;
cout<<i<<endl;
}