#include <bits/stdc++.h>
using namespace std;
char woho(int n);
#define wee 'l'
char letterthatcomesbeforeP();
char leftofM();
#define whatisD 'd'

char github[]="hacktober";
int main()
{	
	char weird[12]="           ";
	weird[12]='\0';
	weird[4]=leftofM();
	weird[9]='W';
	char thisis[6]="crazy";
	weird[8]=thisis[1];
	for(int i=0;i<=26;i++)
	{
		if(i==8)
		{
			weird[0]=woho(i);
		}
		if(i==2 || i==3)
		{
		    weird[i]=letterthatcomesbeforeP();
		}
	}
    weird[1]=wee;
    weird[10]=wee;
    weird[11]=github[7];
    char symbol = '!';
    weird[5]=symbol;
    weird[7]=whatisD;
    for(int insane=0;insane<=5;insane++)
    {
        cout<<weird[insane];
        if(insane==2)
        {
            cout<<" ";
        }
        cout<<weird[11-insane];
    }
    
}
char letterthatcomesbeforeP(){
    return 'o';
}
char leftofM()
{   
    int j=11;
    return char(j+97); 
}
char woho(int n)
{
	return char(n+64);
}
