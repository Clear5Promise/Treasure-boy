#include<iostream>
#include<string>
using namespace std;
int main()
{
	char z_m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	bool passM=true;
    int n;
	cin>>n;
	while(n--)
	{
        string str;
		cin>>str;
		bool allNUm=true;
		int total=0;
		for(int i=0;i<17&&allNUm;i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			total+=(str[i]-'0')*weight[i];
			else allNUm=false;
		}
         total%=11;
         if(str[17]!=z_m[total]||!allNUm)
		 {
			 passM=false;
			 cout<<str<<endl;
		 }
	}
	if(passM)cout<<"All passed"<<endl;

}
