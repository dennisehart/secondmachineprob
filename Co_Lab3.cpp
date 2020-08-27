
#include <iostream>
#include <string>
using namespace std;

int main()

{
	 string Ename,payperi ;
	 int empid;
	 float income,latabs;
	float const Philheal=1000,SSS=800;

	cout<<"\n";
	
	cout<<"Employee Name:"<<endl; 
	getline(cin,Ename);
	
    cout<<"Payroll Period:"<<endl;
    getline(cin,payperi);
	
	cout<<"Employee ID:"<<endl;
	cin>>income;
	

	cout<<"------FEU Institute of Technology-----"<<"\t"<<"\t"<<"\t"<<endl;
	
	
	cout<<"\n";
	
	cout<<"------INCOME-----"<<"\n";
	
	cout<<"\n";
    
	cout<<"Monthly Salary:"<<endl;
	cin>>income;
	

	cout<<"Lates and absences:"<<endl;
	cin>>latabs;

	
	
	cout<<"\n";
	
	cout<<"------DEDUCTIONS------"<<"\t"<<"\n"<<"\n";
	
	cout<<"\n";

  //deductions are late and absences, phil health, pagibig,sss and witholding tax
  
  //formula net=inc-p-sss
    
	cout<<"Lates and absences:"<<(latabs /= 60)<<endl; 
	
	cout<<"Phil Health:"<<Philheal<<endl;
	
	cout<<"Pag-ibig:"<<(income -= 800)<<endl;
	 
	cout<<"SSS:"<<endl;
	
    cout<<"Witholding tax:"<<(income *0.12 )<<endl;
   
    
    cout<<"Total deductions:"<<(latabs/60, income -= 1000, income -= 800, income -= 1200,income *0.12);

   
   return 0;

}

