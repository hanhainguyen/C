#include<stdio.h>
int main(){
 int dayIn,monthIn,yearIn, dayOut,monthOut,yearOut;
 scanf("%d/%d/%d",&dayIn,&monthIn,&yearIn);
 
  	if(monthIn==1||monthIn==3||monthIn==5||monthIn==7||monthIn==8||monthIn==10||monthIn==12)
  	{
  		if(dayIn==31)
  		 {
  		 	dayOut=1;
  		 	if(monthIn==12)	
			{
			   	monthOut=1;
			   	yearOut=yearIn+1;
			}
			else
			{
			    monthOut=monthIn+1;
			   	yearOut=yearIn;	
			}		 	
		 }
		else
		 {
		 	dayOut=dayIn+1;
		 	monthOut=monthIn;
			yearOut=yearIn;				
		 } 
	}
	else if(monthIn==4||monthIn==6||monthIn==9||monthIn==11)
  	{
  		if(dayIn==30)
  		 {
  		 	dayOut=1;
  		 	monthOut=monthIn+1;		 	
		 }
		else
		 {
		 	dayOut=dayIn+1;
		 	monthOut=monthIn;			
		 } 
		 
		yearOut=yearIn;	 
	}
	else if(((yearIn % 4 == 0 && yearIn % 100!= 0) || yearIn%400 == 0 )&&monthIn==2)
	{
		if(dayIn==29)
		{
			dayOut=1;
			monthOut=monthIn+1;		
		}
		else
		{
			dayOut=dayIn+1;
			monthOut=monthIn;	
		}	
		yearOut=yearIn;	
	}
	else
	{
		if(dayIn==28)
		{
			dayOut=1;
			monthOut=monthIn+1;		
		}
		else
		{
			dayOut=dayIn+1;
			monthOut=monthIn;	
		}	
		yearOut=yearIn;	
	}
  
    printf("%d/%d/%d",dayOut,monthOut,yearOut); 
  
 return 0;
}

