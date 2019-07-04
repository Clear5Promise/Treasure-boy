#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	 int a[1000],i,n,k,flag=0,sum=0,flag1=0;
	 float b[5]={0};
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 	k=a[i]%5;
	 	switch(k)
	 	{
	 		case 0:
	 			{
	 				if(a[i]%2==0)
	 				b[0]+=a[i];
	 				break;
				 }
			case 1:
				{
					flag1=1;
					if(flag==0){
						b[1]+=a[i];
						flag=1;
					}
					else if(flag==1)
					{
						b[1]-=a[i];
						flag=0;
					}
					break;
				}
			case 2:
				{
					b[2]++;
					break;
				}
			case 3:
				{
					b[3]+=a[i];
					sum++;
					break;
				}
			case 4:
				{
					if(a[i]>b[4])
					b[4]=a[i];
					break;
				}
		 }
	 }
	 if(b[3]!=0){
	 	b[3]=b[3]/sum;
	 }	 
	 for(i=0;i<5;i++){
	 	switch(i)
	 	{
	 		case 1:{
	 			if(flag1==1)
	 				{
	 					cout<<b[i]<<" ";
					 }
	 				else cout<<"N"<<" ";
	 				
				break;
			 }
	 		case 3:
	 			{
	 				if(b[i]==0)
	 				{
	 					cout<<"N"<<" ";
					 }
	 				else cout<<fixed<<setprecision(1)<<b[i]<<" ";
	 				break;
	 			}
			case 4:
				{
					if(b[i]==0)
					{
						cout<<"N";
					}
					else cout<<fixed<<setprecision(0)<<b[i];
					break;
				}				
			default:
				{
					if(b[i]==0)
					{
						cout<<"N"<<" ";
					}
					else cout<<b[i]<<" ";
				}								
		 }
	 	
	 }
	 
 } 