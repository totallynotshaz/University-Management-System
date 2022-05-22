#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

void UniversityManagementSystem();

void TeacherPortal();
void classroom1();
void classroom2();
void classroom3();
void classroom4();

int cafe();
int maincafe(int bill);
int tuckshop(int bill);
int shakes(int bill);


char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int game();
int checkwin();
void board();

int main()
{
	UniversityManagementSystem();
	
	return 0;
}
void UniversityManagementSystem()
{
	string check;
	do{
	cout<<"\t\t\t\t\t-=:|University Management System|:=-"<<endl;
	cout<<"\t\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl<<"* PRESS 1 TO ENTER TEACHERS PORTAL"<<endl;
	cout<<"* PRESS 2 TO ENTER CAFE"<<endl;
	cout<<"* PRESS 3 TO ENTER GAMING ZONE"<<endl;
	cout<<"* PRESS 0 TO EXIT"<<endl;
	cin>>check;
	system("CLS");
	if(check=="1")
	TeacherPortal();
	if(check=="2")
	cafe();
	if(check=="3")
	game();
	}while(check!="0");
}
void TeacherPortal()
{
	string check,user,pass,c;
	string username="Farooq",password="damn_farooq";
	int op;

	cout<<"\t\t\t\t\t-=:|Teacher Portal|:=-"<<endl;
	cout<<"\t\t\t\t\t-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl<<endl;
	cout<<setw(40)<<"Username: ";
	cin>>user;
	cout<<setw(40)<<"Password: ";
	cin>>pass;
	cout<<endl;
	if(username==user&&password==pass)
	{
	system("CLS");
	do{
	cout<<"\t\t\t\t\t-=:|Teacher Portal|:=-"<<endl;
	cout<<"\t\t\t\t\t-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;
	cout<<"* Press 1 to enter BEBME-OOP"<<endl;
	cout<<"* Press 2 to enter MTSA-CP"<<endl;
	cout<<"* Press 3 to enter MTSB-CP"<<endl;
	cout<<"* Press 4 to enter POWER-CP"<<endl;
	cout<<"* Press 0 to exit"<<endl;
	cin>>check;
	system("CLS");
	
	if(check=="1")
	classroom1();
	else if(check=="2")
	classroom2();
	else if(check=="3")
	classroom3();
	else if(check=="4")
	classroom4();
	
	}while(check!="0");
	cout<<endl<<">> You have now exited the teacher's portal!"<<endl<<endl;
	system("PAUSE");
	system("CLS");
}
		if(username!=user||password!=pass)
	{
		cout<<endl<<">> Invalid username or password... Exiting teacher's portal"<<endl;
		system("PAUSE");
		system("CLS");
	}
}
void classroom1()
{
	
	int check,temp,condition;
	float labperf=25,labrep=20,mid=15,final=20,cea=20;
	
	do
	{
	cout<<"\t\t\t\t-=:|You have now entered BEBME-OOP !|:=-"<<endl;
	cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl<<"* Press 1 to add weights";
	cout<<endl<<"  (If you skip this step, default weights will be used i.e(25, 20, 15, 20, 20)!)";
	cout<<endl<<"* Press 2 to read file";
	cout<<endl<<"* Press 0 to exit"<<endl;
	cin>>check;
	system("CLS");
	if(check==1)
	{
		do
		{
		temp=0;
		cout<<"\t\t\t\t\t     -=:|Weights|:=-"<<endl;
		cout<<"\t\t\t\t\t     -=-=-=-=-=-=-=-"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		
		cout<<endl<<"* Enter weight of Lab Performance: ";
		cin>>labperf;
		cout<<"* Enter weight of Lab Reports: ";
		cin>>labrep;
		cout<<"* Enter weight of Mid Exams: ";
		cin>>mid;
		cout<<"* Enter weight of Final Exams: ";
		cin>>final;
		cout<<"* Enter weight of CEA: ";
		cin>>cea;
		temp=labperf+labrep+mid+final+cea;
		if(temp!=100)
		cout<<endl<<">> Error, the weights don't add upto 100... Please try again!"<<endl<<endl;
		else
		cout<<endl<<">> Weights added successfully!"<<endl;
		system("PAUSE");
		system("CLS");
		}while(temp!=100);
	}
	string line,test;
	int size;
	if(check==2)
	{
		size=0;
		ifstream file ("BEBME-OOP.csv");
		while(getline(file, line))
		{
			test=line;
			if(test!=",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,")
			{
			size++;
			}
			else 
			break;
		}
		file.close();
	}
	
	long int rollnumber[size];
	float labperf1[size],labperf2[size],labperf3[size],labperf4[size],labperf5[size],labperf6[size],labperf7[size],labperf8[size],labperf9[size],
	labperf10[size],labperf11[size],labperf12[size],labperf13[size],labperf14[size],labrep1[size],labrep2[size],labrep3[size],labrep4[size],labrep5[size],labrep6[size],
	labrep7[size],labrep8[size],labrep9[size],labrep10[size],labrep11[size],labrep12[size],labrep13[size],labrep14[size],midterm[size],finalterm[size],
	ceaterm[size],totalmarks[size];
	string name[size],grade[size];
	
	if(check==2)
	{
		cout<<"\t\t\t\t\t-=:|Reading File|:=-"<<endl;
		cout<<"\t\t\t\t\t-=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		string sen;
		ifstream file1("BEBME-OOP.csv");
		int j=0;
		while (getline(file1, sen))
		{
    		string temp1;
    		istringstream iss(sen);
    		iss >> rollnumber[j];
    		getline(iss, temp1, ',');
    		getline(iss, name[j], ',');
    		
			iss >> labperf1[j];
    		getline(iss, temp1, ',');
    		iss >> labperf2[j]; 
			getline(iss, temp1, ',');
    		iss >> labperf3[j];
    		getline(iss, temp1, ',');
    		iss >> labperf4[j];  
			getline(iss, temp1, ',');
    		iss >> labperf5[j];
    		getline(iss, temp1, ',');
    		iss >> labperf6[j];  
			getline(iss, temp1, ',');
    		iss >> labperf7[j];
    		getline(iss, temp1, ',');
    		iss >> labperf8[j];  
			getline(iss, temp1, ',');
    		iss >> labperf9[j];
    		getline(iss, temp1, ',');
    		iss >> labperf10[j];  
			getline(iss, temp1, ',');
    		iss >> labperf11[j];
    		getline(iss, temp1, ',');
    		iss >> labperf12[j];  
			getline(iss, temp1, ',');
    		iss >> labperf13[j];
    		getline(iss, temp1, ',');
    		iss >> labperf14[j];
			
			getline(iss, temp1, ',');
			iss >> labrep1[j];
    		getline(iss, temp1, ',');
    		iss >> labrep2[j]; 
			getline(iss, temp1, ',');
    		iss >> labrep3[j];
    		getline(iss, temp1, ',');
    		iss >> labrep4[j];  
			getline(iss, temp1, ',');
    		iss >> labrep5[j];
    		getline(iss, temp1, ',');
    		iss >> labrep6[j];  
			getline(iss, temp1, ',');
    		iss >> labrep7[j];
    		getline(iss, temp1, ',');
    		iss >> labrep8[j];  
			getline(iss, temp1, ',');
    		iss >> labrep9[j];
    		getline(iss, temp1, ',');
    		iss >> labrep10[j];  
			getline(iss, temp1, ',');
    		iss >> labrep11[j];
    		getline(iss, temp1, ',');
    		iss >> labrep12[j];  
			getline(iss, temp1, ',');
    		iss >> labrep13[j];
    		getline(iss, temp1, ',');
    		iss >> labrep14[j];  
			
			getline(iss, temp1, ',');
    		iss >> midterm[j];  
			getline(iss, temp1, ',');
    		iss >> finalterm[j];
    		getline(iss, temp1, ',');
    		iss >> ceaterm[j];     
    		j++;
    		
		}
		cout<<endl<<">> File has been read successfully! :)"<<endl;
		system("PAUSE");
		system("CLS");
		file1.close();
		do
		{
		cout<<"\t\t\t\t-=:|Options after File|:=-"<<endl;
		cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<endl<<"* Press 1 to generate marks"<<endl;
		cout<<"  (WARNING: Generate marks before choosing any other option!)"<<endl;
		cout<<"* Press 2 to view list of students with marks"<<endl;
		cout<<"* Press 3 to view marks of one student"<<endl;
		cout<<"* Press 0 to exit"<<endl;
		cin>>condition;
		system("CLS");
		if(condition==1)
		{
		cout<<"\t\t\t\t-=:|Generating Report|:=-"<<endl;
		cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
		cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		fstream fout;
		fout.open("BEBME-OOP-Reportcard.csv",ios::out);
		float sum,a,a1,a2,a3,b,c,d,e,f;
		for(int j=0;j<size;j++)
		{
			a=(((labperf1[j]+labperf2[j]+labperf3[j]+labperf4[j]+labperf5[j]+labperf6[j]+labperf7[j]+labperf8[j]+labperf9[j]+
			labperf10[j]+labperf11[j]+labperf12[j]+labperf13[j]+labperf14[j])/(14))/(15))*(labperf);
			b=(((labrep1[j]+labrep2[j]+labrep3[j]+labrep4[j]+labrep5[j]+labrep6[j]+labrep7[j]+labrep8[j]+labrep9[j]+
			labrep10[j]+labrep11[j]+labrep12[j]+labrep13[j]+labrep14[j])/(14))/(15))*(labrep);
			c=(midterm[j]/55)*(mid);
			d=(finalterm[j]/50)*(final);
			e=(ceaterm[j]/20)*(cea);
			totalmarks[j]=a+b+c+d+e;
			
			if(totalmarks[j]<=100&&totalmarks[j]>85)
			grade[j]="A";
			if(totalmarks[j]<=85&&totalmarks[j]>=80)
			grade[j]="A-";
			if(totalmarks[j]<80&&totalmarks[j]>=75)
			grade[j]="B+";
			if(totalmarks[j]<75&&totalmarks[j]>=70)
			grade[j]="B";
			if(totalmarks[j]<70&&totalmarks[j]>=65)
			grade[j]="B-";
			if(totalmarks[j]<65&&totalmarks[j]>=60)
			grade[j]="C+";
			if(totalmarks[j]<60&&totalmarks[j]>=55)
			grade[j]="C";
			if(totalmarks[j]<55&&totalmarks[j]>=50)
			grade[j]="C-";
			if(totalmarks[j]<50&&totalmarks[j]>=40)
			grade[j]="D";
			if(totalmarks[j]<40&&totalmarks[j]>=0)
			grade[j]="F";
			
			fout<<rollnumber[j]<<", "<<name[j]<<", "<<totalmarks[j]<<", "<<grade[j]<<"\n";
			
		}
		cout<<endl<<">> Result has been generated successfully! :)"<<endl;
		system("PAUSE");
		system("CLS");
		}
		if(condition==2)
		{
			string sus;
			do
			{
			cout<<"\t\t\t\tList of students"<<endl<<endl;
			cout<<setw(20)<<"Roll Number"<<setw(30)<<"Name"<<setw(15)<<"Marks"<<setw(15)<<"Grade"<<endl<<endl;
			for(int j=0;j<size;j++)
			cout<<setw(20)<<rollnumber[j]<<setw(30)<<name[j]<<setw(15)<<totalmarks[j]<<setw(15)<<grade[j]<<endl;
			cout<<endl<<"Press 0 to exit!"<<endl;
			cin>>sus;
			system("CLS");
			}while(sus!="0");
			system("CLS");
		}
		if(condition==3)
		{
			int rn,index;
			string c;
			do
			{
			cout<<"\t\t\t     -=:|Data of a particular student|:=-"<<endl;
			cout<<"\t\t\t     -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<endl<<"Enter rollnumber of a student: ";
			cin>>rn;
			for(int j=0;j<30;j++)
			{
				if(rn==rollnumber[j])
				{
					cout<<endl<<"Name: "<<name[j];
					cout<<endl<<"Total Marks: "<<totalmarks[j];
					cout<<endl<<"Grade: "<<grade[j];
					cout<<endl<<endl;
					index=j;
				}
			}
			if(rn!=rollnumber[index])
			cout<<"No Data found..."<<endl<<endl;
			
			cout<<"Press any key to continue or 0 to exit!"<<endl;
			cin>>c;
			system("CLS");
			}while(c!="0");
			system("CLS");
		}
		}
		while(condition!=0);
		
	}
	}while(check!=0);
}
void classroom2()
{
		
	int check,temp,condition;
	float labperf=25,labrep=20,mid=15,final=20,cea=20;
	
	do
	{
	cout<<"\t\t\t\t-=:|You have now entered MTSA-CP !|:=-"<<endl;
	cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl<<"* Press 1 to add weights";
	cout<<endl<<"  (If you skip this step, default weights will be used i.e(25, 20, 15, 20, 20)!)";
	cout<<endl<<"* Press 2 to read file";
	cout<<endl<<"* Press 0 to exit"<<endl;
	cin>>check;
	system("CLS");
	if(check==1)
	{
		do
		{
		temp=0;
		cout<<"\t\t\t\t\t     -=:|Weights|:=-"<<endl;
		cout<<"\t\t\t\t\t     -=-=-=-=-=-=-=-"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		
		cout<<endl<<"* Enter weight of Lab Performance: ";
		cin>>labperf;
		cout<<"* Enter weight of Lab Reports: ";
		cin>>labrep;
		cout<<"* Enter weight of Mid Exams: ";
		cin>>mid;
		cout<<"* Enter weight of Final Exams: ";
		cin>>final;
		cout<<"* Enter weight of CEA: ";
		cin>>cea;
		temp=labperf+labrep+mid+final+cea;
		if(temp!=100)
		cout<<endl<<">> Error, the weights don't add upto 100... Please try again!"<<endl<<endl;
		else
		cout<<endl<<">> Weights added successfully!"<<endl;
		system("PAUSE");
		system("CLS");
		}while(temp!=100);
	}
	string line,test;
	int size;
	if(check==2)
	{
		size=0;
		ifstream file ("MTSA-CP.csv");
		while(getline(file, line))
		{
			test=line;
			if(test!=",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,")
			{
			size++;
			}
			else 
			break;
		}
		file.close();
	}
	
	long int rollnumber[size];
	float labperf1[size],labperf2[size],labperf3[size],labperf4[size],labperf5[size],labperf6[size],labperf7[size],labperf8[size],labperf9[size],
	labperf10[size],labperf11[size],labperf12[size],labperf13[size],labperf14[size],labrep1[size],labrep2[size],labrep3[size],labrep4[size],labrep5[size],labrep6[size],
	labrep7[size],labrep8[size],labrep9[size],labrep10[size],labrep11[size],labrep12[size],labrep13[size],labrep14[size],midterm[size],finalterm[size],
	ceaterm[size],totalmarks[size];
	string name[size],grade[size];
	
	if(check==2)
	{
		cout<<"\t\t\t\t\t-=:|Reading File|:=-"<<endl;
		cout<<"\t\t\t\t\t-=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		string sen;
		ifstream file1("MTSA-CP.csv");
		int j=0;
		while (getline(file1, sen))
		{
    		string temp1;
    		istringstream iss(sen);
    		iss >> rollnumber[j];
    		getline(iss, temp1, ',');
    		getline(iss, name[j], ',');
    		
			iss >> labperf1[j];
    		getline(iss, temp1, ',');
    		iss >> labperf2[j]; 
			getline(iss, temp1, ',');
    		iss >> labperf3[j];
    		getline(iss, temp1, ',');
    		iss >> labperf4[j];  
			getline(iss, temp1, ',');
    		iss >> labperf5[j];
    		getline(iss, temp1, ',');
    		iss >> labperf6[j];  
			getline(iss, temp1, ',');
    		iss >> labperf7[j];
    		getline(iss, temp1, ',');
    		iss >> labperf8[j];  
			getline(iss, temp1, ',');
    		iss >> labperf9[j];
    		getline(iss, temp1, ',');
    		iss >> labperf10[j];  
			getline(iss, temp1, ',');
    		iss >> labperf11[j];
    		getline(iss, temp1, ',');
    		iss >> labperf12[j];  
			getline(iss, temp1, ',');
    		iss >> labperf13[j];
    		getline(iss, temp1, ',');
    		iss >> labperf14[j];
			
			getline(iss, temp1, ',');
			iss >> labrep1[j];
    		getline(iss, temp1, ',');
    		iss >> labrep2[j]; 
			getline(iss, temp1, ',');
    		iss >> labrep3[j];
    		getline(iss, temp1, ',');
    		iss >> labrep4[j];  
			getline(iss, temp1, ',');
    		iss >> labrep5[j];
    		getline(iss, temp1, ',');
    		iss >> labrep6[j];  
			getline(iss, temp1, ',');
    		iss >> labrep7[j];
    		getline(iss, temp1, ',');
    		iss >> labrep8[j];  
			getline(iss, temp1, ',');
    		iss >> labrep9[j];
    		getline(iss, temp1, ',');
    		iss >> labrep10[j];  
			getline(iss, temp1, ',');
    		iss >> labrep11[j];
    		getline(iss, temp1, ',');
    		iss >> labrep12[j];  
			getline(iss, temp1, ',');
    		iss >> labrep13[j];
    		getline(iss, temp1, ',');
    		iss >> labrep14[j];  
			
			getline(iss, temp1, ',');
    		iss >> midterm[j];  
			getline(iss, temp1, ',');
    		iss >> finalterm[j];
    		getline(iss, temp1, ',');
    		iss >> ceaterm[j];     
    		j++;
    		
		}
		cout<<endl<<">> File has been read successfully! :)"<<endl;
		system("PAUSE");
		system("CLS");
		file1.close();
		do
		{
		cout<<"\t\t\t\t-=:|Options after File|:=-"<<endl;
		cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<endl<<"* Press 1 to generate marks"<<endl;
		cout<<"  (WARNING: Generate marks before choosing any other option!)"<<endl;
		cout<<"* Press 2 to view list of students with marks"<<endl;
		cout<<"* Press 3 to view marks of one student"<<endl;
		cout<<"* Press 0 to exit"<<endl;
		cin>>condition;
		system("CLS");
		if(condition==1)
		{
		cout<<"\t\t\t\t-=:|Generating Report|:=-"<<endl;
		cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
		cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		fstream fout;
		fout.open("MTSA-CP-Reportcard.csv",ios::out);
		float sum,a,a1,a2,a3,b,c,d,e,f;
		for(int j=0;j<size;j++)
		{
			a=(((labperf1[j]+labperf2[j]+labperf3[j]+labperf4[j]+labperf5[j]+labperf6[j]+labperf7[j]+labperf8[j]+labperf9[j]+
			labperf10[j]+labperf11[j]+labperf12[j]+labperf13[j]+labperf14[j])/(14))/(15))*(labperf);
			b=(((labrep1[j]+labrep2[j]+labrep3[j]+labrep4[j]+labrep5[j]+labrep6[j]+labrep7[j]+labrep8[j]+labrep9[j]+
			labrep10[j]+labrep11[j]+labrep12[j]+labrep13[j]+labrep14[j])/(14))/(15))*(labrep);
			c=(midterm[j]/55)*(mid);
			d=(finalterm[j]/50)*(final);
			e=(ceaterm[j]/20)*(cea);
			totalmarks[j]=a+b+c+d+e;
			
			if(totalmarks[j]<=100&&totalmarks[j]>85)
			grade[j]="A";
			if(totalmarks[j]<=85&&totalmarks[j]>=80)
			grade[j]="A-";
			if(totalmarks[j]<80&&totalmarks[j]>=75)
			grade[j]="B+";
			if(totalmarks[j]<75&&totalmarks[j]>=70)
			grade[j]="B";
			if(totalmarks[j]<70&&totalmarks[j]>=65)
			grade[j]="B-";
			if(totalmarks[j]<65&&totalmarks[j]>=60)
			grade[j]="C+";
			if(totalmarks[j]<60&&totalmarks[j]>=55)
			grade[j]="C";
			if(totalmarks[j]<55&&totalmarks[j]>=50)
			grade[j]="C-";
			if(totalmarks[j]<50&&totalmarks[j]>=40)
			grade[j]="D";
			if(totalmarks[j]<40&&totalmarks[j]>=0)
			grade[j]="F";
			
			fout<<rollnumber[j]<<", "<<name[j]<<", "<<totalmarks[j]<<", "<<grade[j]<<"\n";
			
		}
		cout<<endl<<">> Result has been generated successfully! :)"<<endl;
		system("PAUSE");
		system("CLS");
		}
		if(condition==2)
		{
			string sus;
			do
			{
			cout<<"\t\t\t\tList of students"<<endl<<endl;
			cout<<setw(20)<<"Roll Number"<<setw(30)<<"Name"<<setw(15)<<"Marks"<<setw(15)<<"Grade"<<endl<<endl;
			for(int j=0;j<size;j++)
			cout<<setw(20)<<rollnumber[j]<<setw(30)<<name[j]<<setw(15)<<totalmarks[j]<<setw(15)<<grade[j]<<endl;
			cout<<endl<<"Press 0 to exit!"<<endl;
			cin>>sus;
			system("CLS");
			}while(sus!="0");
			system("CLS");
		}
		if(condition==3)
		{
			int rn,index;
			string c;
			do
			{
			cout<<"\t\t\t     -=:|Data of a particular student|:=-"<<endl;
			cout<<"\t\t\t     -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<endl<<"Enter rollnumber of a student: ";
			cin>>rn;
			for(int j=0;j<30;j++)
			{
				if(rn==rollnumber[j])
				{
					cout<<endl<<"Name: "<<name[j];
					cout<<endl<<"Total Marks: "<<totalmarks[j];
					cout<<endl<<"Grade: "<<grade[j];
					cout<<endl<<endl;
					index=j;
				}
			}
			if(rn!=rollnumber[index])
			cout<<"No Data found..."<<endl<<endl;
			
			cout<<"Press any key to continue or 0 to exit!"<<endl;
			cin>>c;
			system("CLS");
			}while(c!="0");
			system("CLS");
		}
		}
		while(condition!=0);
		
	}
	}while(check!=0);
}
void classroom3()
{
			
	int check,temp,condition;
	float labperf=25,labrep=20,mid=15,final=20,cea=20;
	
	do
	{
	cout<<"\t\t\t\t-=:|You have now entered MTSB-CP !|:=-"<<endl;
	cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl<<"* Press 1 to add weights";
	cout<<endl<<"  (If you skip this step, default weights will be used i.e(25, 20, 15, 20, 20)!)";
	cout<<endl<<"* Press 2 to read file";
	cout<<endl<<"* Press 0 to exit"<<endl;
	cin>>check;
	system("CLS");
	if(check==1)
	{
		do
		{
		temp=0;
		cout<<"\t\t\t\t\t     -=:|Weights|:=-"<<endl;
		cout<<"\t\t\t\t\t     -=-=-=-=-=-=-=-"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		
		cout<<endl<<"* Enter weight of Lab Performance: ";
		cin>>labperf;
		cout<<"* Enter weight of Lab Reports: ";
		cin>>labrep;
		cout<<"* Enter weight of Mid Exams: ";
		cin>>mid;
		cout<<"* Enter weight of Final Exams: ";
		cin>>final;
		cout<<"* Enter weight of CEA: ";
		cin>>cea;
		temp=labperf+labrep+mid+final+cea;
		if(temp!=100)
		cout<<endl<<">> Error, the weights don't add upto 100... Please try again!"<<endl<<endl;
		else
		cout<<endl<<">> Weights added successfully!"<<endl;
		system("PAUSE");
		system("CLS");
		}while(temp!=100);
	}
	string line,test;
	int size;
	if(check==2)
	{
		size=0;
		ifstream file ("MTSB-CP.csv");
		while(getline(file, line))
		{
			test=line;
			if(test!=",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,")
			{
			size++;
			}
			else 
			break;
		}
		file.close();
	}
	
	long int rollnumber[size];
	float labperf1[size],labperf2[size],labperf3[size],labperf4[size],labperf5[size],labperf6[size],labperf7[size],labperf8[size],labperf9[size],
	labperf10[size],labperf11[size],labperf12[size],labperf13[size],labperf14[size],labrep1[size],labrep2[size],labrep3[size],labrep4[size],labrep5[size],labrep6[size],
	labrep7[size],labrep8[size],labrep9[size],labrep10[size],labrep11[size],labrep12[size],labrep13[size],labrep14[size],midterm[size],finalterm[size],
	ceaterm[size],totalmarks[size];
	string name[size],grade[size];
	
	if(check==2)
	{
		cout<<"\t\t\t\t\t-=:|Reading File|:=-"<<endl;
		cout<<"\t\t\t\t\t-=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		string sen;
		ifstream file1("MTSB-CP.csv");
		int j=0;
		while (getline(file1, sen))
		{
    		string temp1;
    		istringstream iss(sen);
    		iss >> rollnumber[j];
    		getline(iss, temp1, ',');
    		getline(iss, name[j], ',');
    		
			iss >> labperf1[j];
    		getline(iss, temp1, ',');
    		iss >> labperf2[j]; 
			getline(iss, temp1, ',');
    		iss >> labperf3[j];
    		getline(iss, temp1, ',');
    		iss >> labperf4[j];  
			getline(iss, temp1, ',');
    		iss >> labperf5[j];
    		getline(iss, temp1, ',');
    		iss >> labperf6[j];  
			getline(iss, temp1, ',');
    		iss >> labperf7[j];
    		getline(iss, temp1, ',');
    		iss >> labperf8[j];  
			getline(iss, temp1, ',');
    		iss >> labperf9[j];
    		getline(iss, temp1, ',');
    		iss >> labperf10[j];  
			getline(iss, temp1, ',');
    		iss >> labperf11[j];
    		getline(iss, temp1, ',');
    		iss >> labperf12[j];  
			getline(iss, temp1, ',');
    		iss >> labperf13[j];
    		getline(iss, temp1, ',');
    		iss >> labperf14[j];
			
			getline(iss, temp1, ',');
			iss >> labrep1[j];
    		getline(iss, temp1, ',');
    		iss >> labrep2[j]; 
			getline(iss, temp1, ',');
    		iss >> labrep3[j];
    		getline(iss, temp1, ',');
    		iss >> labrep4[j];  
			getline(iss, temp1, ',');
    		iss >> labrep5[j];
    		getline(iss, temp1, ',');
    		iss >> labrep6[j];  
			getline(iss, temp1, ',');
    		iss >> labrep7[j];
    		getline(iss, temp1, ',');
    		iss >> labrep8[j];  
			getline(iss, temp1, ',');
    		iss >> labrep9[j];
    		getline(iss, temp1, ',');
    		iss >> labrep10[j];  
			getline(iss, temp1, ',');
    		iss >> labrep11[j];
    		getline(iss, temp1, ',');
    		iss >> labrep12[j];  
			getline(iss, temp1, ',');
    		iss >> labrep13[j];
    		getline(iss, temp1, ',');
    		iss >> labrep14[j];  
			
			getline(iss, temp1, ',');
    		iss >> midterm[j];  
			getline(iss, temp1, ',');
    		iss >> finalterm[j];
    		getline(iss, temp1, ',');
    		iss >> ceaterm[j];     
    		j++;
    		
		}
		cout<<endl<<">> File has been read successfully! :)"<<endl;
		system("PAUSE");
		system("CLS");
		file1.close();
		do
		{
		cout<<"\t\t\t\t-=:|Options after File|:=-"<<endl;
		cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<endl<<"* Press 1 to generate marks"<<endl;
		cout<<"  (WARNING: Generate marks before choosing any other option!)"<<endl;
		cout<<"* Press 2 to view list of students with marks"<<endl;
		cout<<"* Press 3 to view marks of one student"<<endl;
		cout<<"* Press 0 to exit"<<endl;
		cin>>condition;
		system("CLS");
		if(condition==1)
		{
		cout<<"\t\t\t\t-=:|Generating Report|:=-"<<endl;
		cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
		cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		fstream fout;
		fout.open("MTSB-CP-Reportcard.csv",ios::out);
		float sum,a,a1,a2,a3,b,c,d,e,f;
		for(int j=0;j<size;j++)
		{
			a=(((labperf1[j]+labperf2[j]+labperf3[j]+labperf4[j]+labperf5[j]+labperf6[j]+labperf7[j]+labperf8[j]+labperf9[j]+
			labperf10[j]+labperf11[j]+labperf12[j]+labperf13[j]+labperf14[j])/(14))/(15))*(labperf);
			b=(((labrep1[j]+labrep2[j]+labrep3[j]+labrep4[j]+labrep5[j]+labrep6[j]+labrep7[j]+labrep8[j]+labrep9[j]+
			labrep10[j]+labrep11[j]+labrep12[j]+labrep13[j]+labrep14[j])/(14))/(15))*(labrep);
			c=(midterm[j]/55)*(mid);
			d=(finalterm[j]/50)*(final);
			e=(ceaterm[j]/20)*(cea);
			totalmarks[j]=a+b+c+d+e;
			
			if(totalmarks[j]<=100&&totalmarks[j]>85)
			grade[j]="A";
			if(totalmarks[j]<=85&&totalmarks[j]>=80)
			grade[j]="A-";
			if(totalmarks[j]<80&&totalmarks[j]>=75)
			grade[j]="B+";
			if(totalmarks[j]<75&&totalmarks[j]>=70)
			grade[j]="B";
			if(totalmarks[j]<70&&totalmarks[j]>=65)
			grade[j]="B-";
			if(totalmarks[j]<65&&totalmarks[j]>=60)
			grade[j]="C+";
			if(totalmarks[j]<60&&totalmarks[j]>=55)
			grade[j]="C";
			if(totalmarks[j]<55&&totalmarks[j]>=50)
			grade[j]="C-";
			if(totalmarks[j]<50&&totalmarks[j]>=40)
			grade[j]="D";
			if(totalmarks[j]<40&&totalmarks[j]>=0)
			grade[j]="F";
			
			fout<<rollnumber[j]<<", "<<name[j]<<", "<<totalmarks[j]<<", "<<grade[j]<<"\n";
			
		}
		cout<<endl<<">> Result has been generated successfully! :)"<<endl;
		system("PAUSE");
		system("CLS");
		}
		if(condition==2)
		{
			string sus;
			do
			{
			cout<<"\t\t\t\tList of students"<<endl<<endl;
			cout<<setw(20)<<"Roll Number"<<setw(30)<<"Name"<<setw(15)<<"Marks"<<setw(15)<<"Grade"<<endl<<endl;
			for(int j=0;j<size;j++)
			cout<<setw(20)<<rollnumber[j]<<setw(30)<<name[j]<<setw(15)<<totalmarks[j]<<setw(15)<<grade[j]<<endl;
			cout<<endl<<"Press 0 to exit!"<<endl;
			cin>>sus;
			system("CLS");
			}while(sus!="0");
			system("CLS");
		}
		if(condition==3)
		{
			int rn,index;
			string c;
			do
			{
			cout<<"\t\t\t     -=:|Data of a particular student|:=-"<<endl;
			cout<<"\t\t\t     -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<endl<<"Enter rollnumber of a student: ";
			cin>>rn;
			for(int j=0;j<30;j++)
			{
				if(rn==rollnumber[j])
				{
					cout<<endl<<"Name: "<<name[j];
					cout<<endl<<"Total Marks: "<<totalmarks[j];
					cout<<endl<<"Grade: "<<grade[j];
					cout<<endl<<endl;
					index=j;
				}
			}
			if(rn!=rollnumber[index])
			cout<<"No Data found..."<<endl<<endl;
			
			cout<<"Press any key to continue or 0 to exit!"<<endl;
			cin>>c;
			system("CLS");
			}while(c!="0");
			system("CLS");
		}
		}
		while(condition!=0);
		
	}
	}while(check!=0);
}
void classroom4()
{
		
	int check,temp,condition;
	float labperf=25,labrep=20,mid=15,final=20,cea=20;
	
	do
	{
	cout<<"\t\t\t\t-=:|You have now entered POWER-CP !|:=-"<<endl;
	cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl<<"* Press 1 to add weights";
	cout<<endl<<"  (If you skip this step, default weights will be used i.e(25, 20, 15, 20, 20)!)";
	cout<<endl<<"* Press 2 to read file";
	cout<<endl<<"* Press 0 to exit"<<endl;
	cin>>check;
	system("CLS");
	if(check==1)
	{
		do
		{
		temp=0;
		cout<<"\t\t\t\t\t     -=:|Weights|:=-"<<endl;
		cout<<"\t\t\t\t\t     -=-=-=-=-=-=-=-"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		
		cout<<endl<<"* Enter weight of Lab Performance: ";
		cin>>labperf;
		cout<<"* Enter weight of Lab Reports: ";
		cin>>labrep;
		cout<<"* Enter weight of Mid Exams: ";
		cin>>mid;
		cout<<"* Enter weight of Final Exams: ";
		cin>>final;
		cout<<"* Enter weight of CEA: ";
		cin>>cea;
		temp=labperf+labrep+mid+final+cea;
		if(temp!=100)
		cout<<endl<<">> Error, the weights don't add upto 100... Please try again!"<<endl<<endl;
		else
		cout<<endl<<">> Weights added successfully!"<<endl;
		system("PAUSE");
		system("CLS");
		}while(temp!=100);
	}
	string line,test;
	int size;
	if(check==2)
	{
		size=0;
		ifstream file ("POWER-CP.csv");
		while(getline(file, line))
		{
			test=line;
			if(test!=",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,")
			{
			size++;
			}
			else 
			break;
		}
		file.close();
	}
	
	long int rollnumber[size];
	float labperf1[size],labperf2[size],labperf3[size],labperf4[size],labperf5[size],labperf6[size],labperf7[size],labperf8[size],labperf9[size],
	labperf10[size],labperf11[size],labperf12[size],labperf13[size],labperf14[size],labrep1[size],labrep2[size],labrep3[size],labrep4[size],labrep5[size],labrep6[size],
	labrep7[size],labrep8[size],labrep9[size],labrep10[size],labrep11[size],labrep12[size],labrep13[size],labrep14[size],midterm[size],finalterm[size],
	ceaterm[size],totalmarks[size];
	string name[size],grade[size];
	
	if(check==2)
	{
		cout<<"\t\t\t\t\t-=:|Reading File|:=-"<<endl;
		cout<<"\t\t\t\t\t-=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		string sen;
		ifstream file1("POWER-CP.csv");
		int j=0;
		while (getline(file1, sen))
		{
    		string temp1;
    		istringstream iss(sen);
    		iss >> rollnumber[j];
    		getline(iss, temp1, ',');
    		getline(iss, name[j], ',');
    		
			iss >> labperf1[j];
    		getline(iss, temp1, ',');
    		iss >> labperf2[j]; 
			getline(iss, temp1, ',');
    		iss >> labperf3[j];
    		getline(iss, temp1, ',');
    		iss >> labperf4[j];  
			getline(iss, temp1, ',');
    		iss >> labperf5[j];
    		getline(iss, temp1, ',');
    		iss >> labperf6[j];  
			getline(iss, temp1, ',');
    		iss >> labperf7[j];
    		getline(iss, temp1, ',');
    		iss >> labperf8[j];  
			getline(iss, temp1, ',');
    		iss >> labperf9[j];
    		getline(iss, temp1, ',');
    		iss >> labperf10[j];  
			getline(iss, temp1, ',');
    		iss >> labperf11[j];
    		getline(iss, temp1, ',');
    		iss >> labperf12[j];  
			getline(iss, temp1, ',');
    		iss >> labperf13[j];
    		getline(iss, temp1, ',');
    		iss >> labperf14[j];
			
			getline(iss, temp1, ',');
			iss >> labrep1[j];
    		getline(iss, temp1, ',');
    		iss >> labrep2[j]; 
			getline(iss, temp1, ',');
    		iss >> labrep3[j];
    		getline(iss, temp1, ',');
    		iss >> labrep4[j];  
			getline(iss, temp1, ',');
    		iss >> labrep5[j];
    		getline(iss, temp1, ',');
    		iss >> labrep6[j];  
			getline(iss, temp1, ',');
    		iss >> labrep7[j];
    		getline(iss, temp1, ',');
    		iss >> labrep8[j];  
			getline(iss, temp1, ',');
    		iss >> labrep9[j];
    		getline(iss, temp1, ',');
    		iss >> labrep10[j];  
			getline(iss, temp1, ',');
    		iss >> labrep11[j];
    		getline(iss, temp1, ',');
    		iss >> labrep12[j];  
			getline(iss, temp1, ',');
    		iss >> labrep13[j];
    		getline(iss, temp1, ',');
    		iss >> labrep14[j];  
			
			getline(iss, temp1, ',');
    		iss >> midterm[j];  
			getline(iss, temp1, ',');
    		iss >> finalterm[j];
    		getline(iss, temp1, ',');
    		iss >> ceaterm[j];     
    		j++;
    		
		}
		cout<<endl<<">> File has been read successfully! :)"<<endl;
		system("PAUSE");
		system("CLS");
		file1.close();
		do
		{
		cout<<"\t\t\t\t-=:|Options after File|:=-"<<endl;
		cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
		cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<endl<<"* Press 1 to generate marks"<<endl;
		cout<<"  (WARNING: Generate marks before choosing any other option!)"<<endl;
		cout<<"* Press 2 to view list of students with marks"<<endl;
		cout<<"* Press 3 to view marks of one student"<<endl;
		cout<<"* Press 0 to exit"<<endl;
		cin>>condition;
		system("CLS");
		if(condition==1)
		{
		cout<<"\t\t\t\t-=:|Generating Report|:=-"<<endl;
		cout<<"\t\t\t\t-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
		cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		fstream fout;
		fout.open("POWER-CP-Reportcard.csv",ios::out);
		float sum,a,a1,a2,a3,b,c,d,e,f;
		for(int j=0;j<size;j++)
		{
			a=(((labperf1[j]+labperf2[j]+labperf3[j]+labperf4[j]+labperf5[j]+labperf6[j]+labperf7[j]+labperf8[j]+labperf9[j]+
			labperf10[j]+labperf11[j]+labperf12[j]+labperf13[j]+labperf14[j])/(14))/(15))*(labperf);
			b=(((labrep1[j]+labrep2[j]+labrep3[j]+labrep4[j]+labrep5[j]+labrep6[j]+labrep7[j]+labrep8[j]+labrep9[j]+
			labrep10[j]+labrep11[j]+labrep12[j]+labrep13[j]+labrep14[j])/(14))/(15))*(labrep);
			c=(midterm[j]/55)*(mid);
			d=(finalterm[j]/50)*(final);
			e=(ceaterm[j]/20)*(cea);
			totalmarks[j]=a+b+c+d+e;
			
			if(totalmarks[j]<=100&&totalmarks[j]>85)
			grade[j]="A";
			if(totalmarks[j]<=85&&totalmarks[j]>=80)
			grade[j]="A-";
			if(totalmarks[j]<80&&totalmarks[j]>=75)
			grade[j]="B+";
			if(totalmarks[j]<75&&totalmarks[j]>=70)
			grade[j]="B";
			if(totalmarks[j]<70&&totalmarks[j]>=65)
			grade[j]="B-";
			if(totalmarks[j]<65&&totalmarks[j]>=60)
			grade[j]="C+";
			if(totalmarks[j]<60&&totalmarks[j]>=55)
			grade[j]="C";
			if(totalmarks[j]<55&&totalmarks[j]>=50)
			grade[j]="C-";
			if(totalmarks[j]<50&&totalmarks[j]>=40)
			grade[j]="D";
			if(totalmarks[j]<40&&totalmarks[j]>=0)
			grade[j]="F";
			
			fout<<rollnumber[j]<<", "<<name[j]<<", "<<totalmarks[j]<<", "<<grade[j]<<"\n";
			
		}
		cout<<endl<<">> Result has been generated successfully! :)"<<endl;
		system("PAUSE");
		system("CLS");
		}
		if(condition==2)
		{
			string sus;
			do
			{
			cout<<"\t\t\t\tList of students"<<endl<<endl;
			cout<<setw(20)<<"Roll Number"<<setw(30)<<"Name"<<setw(15)<<"Marks"<<setw(15)<<"Grade"<<endl<<endl;
			for(int j=0;j<size;j++)
			cout<<setw(20)<<rollnumber[j]<<setw(30)<<name[j]<<setw(15)<<totalmarks[j]<<setw(15)<<grade[j]<<endl;
			cout<<endl<<"Press 0 to exit!"<<endl;
			cin>>sus;
			system("CLS");
			}while(sus!="0");
			system("CLS");
		}
		if(condition==3)
		{
			int rn,index;
			string c;
			do
			{
			cout<<"\t\t\t     -=:|Data of a particular student|:=-"<<endl;
			cout<<"\t\t\t     -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout<<endl<<"Enter rollnumber of a student: ";
			cin>>rn;
			for(int j=0;j<30;j++)
			{
				if(rn==rollnumber[j])
				{
					cout<<endl<<"Name: "<<name[j];
					cout<<endl<<"Total Marks: "<<totalmarks[j];
					cout<<endl<<"Grade: "<<grade[j];
					cout<<endl<<endl;
					index=j;
				}
			}
			if(rn!=rollnumber[index])
			cout<<"No Data found..."<<endl<<endl;
			
			cout<<"Press any key to continue or 0 to exit!"<<endl;
			cin>>c;
			system("CLS");
			}while(c!="0");
			system("CLS");
		}
		}
		while(condition!=0);
		
	}
	}while(check!=0);
}
int cafe()
{
	int x,check,discount,y,z;
	int bill=0;
	char condition;
	char a;
	
	do
	{
			cout<<endl<<endl<<endl;
				cout<<"                                 ------"<<endl; 
	cout<<"                                  ---"<<endl;
	cout<<"                                   -"<<endl;
		cout<<"                           __ CAFE 911__          -------------------"<<endl;
		cout<<"     ----------------";
		cout<<endl<<endl<<endl;
		cout<<"PRESS 1 TO ENTER MAIN CAFE"<<endl;
		cout<<"PRESS 2 TO ENTER TUCK SHOP"<<endl;
		cout<<"PRESS 3 TO ENTER SHAKES"<<endl;
		cout<<"PRESS 4 TO CHECK OUT"<<endl;
		cout<<"PRESS 0 TO EXIT"<<endl;
		cin>>check;
		system("CLS");
		cout<<endl;
		if (check==1)
		{
			bill=maincafe(bill);
			
		}
		if (check==2)
		{
			bill=tuckshop(bill);
		}
		if (check==3)
		{
			bill=shakes(bill);
		}
		if (check==4)
		{
			cout<<"TOTAL BILL: "<<bill;
			cout<<endl<<endl;
			cout<<"DO YOU WANT TO KEEP SHOPPING? (PRESS y OR Y TO CONTINUE): "<<endl;
		cin>>condition;
		system("CLS");
		if(condition=='y'||condition=='Y')
		{
		}
		else
		{
		cout<<"BILL TO BE PAID:"<<bill<<endl<<endl;
		cout<<"CODE FOR SPECIAL DISCOUNT:";
		cin>>discount;
		cout<<endl<<endl;
		cout<<"       -------------------------------------------------"<<endl;
	cout<<"             -----------------------------------"<<endl;
	cout<<"                  --------------------------"<<endl; 
	cout<<"                       ---------------"<<endl;
	cout<<"                           ------"<<endl; 
	cout<<"                             ---"<<endl;
	cout<<"                              -"<<endl;
		if(discount==4475)
		{ 
		y=bill*0.30;
		z=bill-y;
		cout<<"\t\t\tSUBTOTAL=Rs"<<bill<<endl;
		cout<<"\t\t\tDISCOUNT=Rs"<<y<<endl;
		cout<<"\t\t\tTOTAL=Rs"<<z<<endl;
		cout<<"\t\t\tGST INCLUDED";
				}
				else
				{ cout<<"\t\t\tINVALID CODE"<<endl;
				cout<<"\t\t\tTOTAL=Rs"<<bill<<endl;
				cout<<"\t\t\tGST INCLUDED";
				}
				cout<<"\t\t   ----------------------------"<<endl;
				cout<<endl<<endl;
				cout<<"\t\t\tTHANKYOU FOR SHOPPING"<<endl;
				cout<<"\t\t\t  HAVE A NICE DAY"<<endl;
				system("PAUSE");
				system("CLS");
				cout<<endl<<endl;
		break;
		}
		}
	}while(check!=0);
}
int maincafe(int bill)
{
	int check,n;
	cout<<"       -------------------------------------------------"<<endl;
	cout<<"             -----------------------------------"<<endl;
	cout<<"                  --------------------------"<<endl; 
	cout<<"                       ---------------"<<endl;
	cout<<"                           ------"<<endl; 
	cout<<"                             ---"<<endl;
	cout<<"                              -"<<endl;                                
	cout<<" ----------------     WELCOME TO MAIN CAFE   -----------------"<<endl;
	cout<<endl<<endl;
	cout<<"PRESS 1 for BURGER (Rs 150)"<<endl;
	cout<<"PRESS 2 FOR PIZZA (Rs 300)"<<endl;
	cout<<"PRESS 3 FOR SANDWICH (Rs 75)"<<endl;
	cout<<"PRESS 4 FOR BIRYANI(Rs 150)"<<endl;
	cout<<"PRESS 5 FOR MACRONI(Rs 150)"<<endl;
	cout<<"PRESS 6 FOR CHAI(Rs 50)"<<endl;
	cout<<"PRESS 7 FOR SAMOSA(Rs 30)"<<endl;
	cout<<"PRESS 8 FOR FRIES(Rs 50)"<<endl;
	cout<<"PRESS 9 FOR BROWNIE(Rs 150)"<<endl;
	
	cout<<"PRESS 10 TO CHECK BILL"<<endl;
	cout<<"PRESS 0 TO EXIT"<<endl;
	do{
	cin>>check;
	if(check==1)
	{ cout<<"HOW MANY BURGERS DO YOU WANT:";
	cin>>n;
	    
		bill=bill+(150*n);
		cout<<endl;
		cout<<n<<" BURGERS ADDED TO CART"<<endl;
	}
	if(check==2)
	{cout<<"HOW MANY PIZZA DO YOU WANT:";
	cin>>n;
		bill=bill+(300*n);
		cout<<endl;
		cout<<n<<" PIZZA ADDED TO CART"<<endl;
	}
	if(check==3)
	{cout<<"HOW MANY SANDWICH DO YOU WANT:";
	cin>>n;
		bill=bill+(75*n);
		cout<<endl;
		cout<<n<<" SANDWICH ADDED TO CART"<<endl;
	}
		if(check==4)
	{cout<<"HOW MANY BIRYANI DO YOU WANT:";
	cin>>n;
		bill=bill+(150*n);
		cout<<endl;
		cout<<n<<" BIRYANI ADDED TO CART"<<endl;
	}
		if(check==5)
	{cout<<"HOW MANY MACRONI DO YOU WANT:";
	cin>>n;
		bill=bill+(150*n);
		cout<<endl;
		cout<<n<<" MACRONI ADDED TO CART"<<endl;
	}
		if(check==6)
	{cout<<"HOW MANY CHAI DO YOU WANT:";
	cin>>n;
		bill=bill+(50*n);
		cout<<endl;
		cout<<n<<" CHAI ADDED TO CART"<<endl;
	}
		if(check==7)
	{cout<<"HOW MANY SAMOSA DO YOU WANT:";
	cin>>n;
		bill=bill+(30*n);
		cout<<endl;
		cout<<n<<" SAMOSA ADDED TO CART"<<endl;
	}
		if(check==8)
	{cout<<"HOW MANY FRIES DO YOU WANT:";
	cin>>n;
		bill=bill+(50*n);
		cout<<endl;
		cout<<n<<" FRIES ADDED TO CART"<<endl;
	}
		if(check==9)
	{cout<<"HOW MANY BROWNIE DO YOU WANT:";
	cin>>n;
		bill=bill+(150*n);
		cout<<endl;
		cout<<n<<" BROWNIE ADDED TO CART"<<endl;
	}
	
	if(check==10)
	{
		cout<<"Total Bill: "<<bill;
		cout<<endl;
	}
	}while(check!=0);
	system("CLS");
	return bill;
}
int tuckshop(int bill)
{
	int check,n;
		cout<<"       -------------------------------------------------"<<endl;
	cout<<"             -----------------------------------"<<endl;
	cout<<"                  --------------------------"<<endl; 
	cout<<"                       ---------------"<<endl;
	cout<<"                           ------"<<endl; 
	cout<<"                             ---"<<endl;
	cout<<"                              -"<<endl;
	cout<<"  -----------        WELCOME TO TUCK SHOP      ------------ "<<endl;
	cout<<endl<<endl;
	cout<<"press 1 for COLD DRINKS  (Rs 30)"<<endl;
	cout<<"PRESS 2 FOR JUICE (Rs 50)"<<endl;
	cout<<"PRESS 3 FOR MILO (Rs 50)"<<endl;
	cout<<"PRESS 4 FOR BISCUIT (Rs 20)"<<endl;
	cout<<"PRESS 5 FOR CAKE (Rs 50)"<<endl;
	cout<<"PRESS 6 FOR LAYS (Rs 50 )"<<endl;
	cout<<"PRESS 7 FOR CHOCOLATE (Rs 100)"<<endl;
	cout<<"PRESS 8 FOR LOLLIPOP (Rs 20)"<<endl;
	
	
	cout<<"PRESS 10 TO CHECK BILL"<<endl;
	cout<<"PRESS 0 TO EXIT"<<endl;
	do{
	cin>>check;
	if(check==1)
	{cout<<"HOW MANY COLD DRINKS DO YOU WANT:";
	cin>>n;
		bill=bill+(30*n);
		cout<<endl;
		cout<<n<<" COLD RINKS ADDED TO CART"<<endl;
	}
	if(check==2)
	{cout<<"HOW MANY JUICE DO YOU WANT:";
	cin>>n;
		bill=bill+(50*n);
		cout<<endl;
		cout<<n<<" JUICE ADDED TO CART"<<endl;
	}
	if(check==3)
	{cout<<"HOW MANY MILO DO YOU WANT";
	cin>>n;
		bill=bill+(50*n);
		cout<<endl;
		cout<<n<<" MILO ADDED TO CART"<<endl;
	}
		if(check==4)
	{cout<<"HOW MANY BISCUIT DO YOU WANT:";
	cin>>n;
		bill=bill+(20*n);
		cout<<endl;
		cout<<n<<" BISCUIT ADDED TO CART"<<endl;
	}
		if(check==5)
	{cout<<"HOW MANY CAKE DO YOU WANT:";
	cin>>n;
		bill=bill+(50*n);
		cout<<endl;
		cout<<n<<" CAKE ADDED TO CART"<<endl;
	}
		if(check==6)
	{cout<<"HOW MANY LAYS DO YOU WANT:";
	cin>>n;
		bill=bill+(50*n);
		cout<<endl;
		cout<<n<<" LAYS ADDED TO CART"<<endl;
	}
		if(check==7)
	{cout<<"HOW MANY CHOCOLATE DO YOU WANT:"<<endl;
	cin>>n;
		bill=bill+(100*n);
		cout<<endl;
		cout<<n<<" CHOCOLATE ADDED TO CART"<<endl;
	}
		if(check==8)
	{cout<<"HOW MANY LOLLIPOP DO YOU WANT:";
	cin>>n;
		bill=bill+(20*n);
		cout<<endl;
		cout<<n<<" LOLLIPOP ADDED TO CART"<<endl;
	}	
	if(check==10)
	{
		cout<<"Total Bill: "<<bill;
		cout<<endl;
	}
	}while(check!=0);
	system("CLS");
	return bill;
}

int shakes(int bill)
{
	int check,n;
			cout<<"       -------------------------------------------------"<<endl;
	cout<<"             -----------------------------------"<<endl;
	cout<<"                  --------------------------"<<endl; 
	cout<<"                       ---------------"<<endl;
	cout<<"                           ------"<<endl; 
	cout<<"                             ---"<<endl;
	cout<<"                              -"<<endl;
	cout<<" ------------         WELCOME TO SHAKES            ------------"<<endl;
	cout<<endl<<endl;
	cout<<"PRESS 1 FOR BANANA SHAKE (Rs 100)"<<endl;
	cout<<"PRESS 2 FOR MANGO SHAKE (Rs 100)"<<endl;
	cout<<"PRESS 3 FOR STRAWBERY SHAKE (Rs 150)"<<endl;
	cout<<"PRESS 4 FOR OREO SHAKE(Rs 120)"<<endl;
	cout<<"PRESS 5 FOR DATES+BANANA SHAKE(Rs 170)"<<endl;
	cout<<"PRESS 6 FOR OREO+BANANA SHAKE(Rs 150 )"<<endl;
	cout<<"PRESS 7 FOR VANILLA SHAKE(Rs 200)"<<endl;
	cout<<"PRESS 8 FOR CHOCOLATE SHAKE(Rs 200)"<<endl;
	cout<<"PRESS 10 to CHECK BILL"<<endl;
	cout<<"PRESS 0 TO EXIT"<<endl;
	do{
	cin>>check;
	if(check==1)
	{cout<<"HOW MANY BANANA SHAKE DO YOU WANT:";
	cin>>n;
		bill=bill+(100*n);
		cout<<endl;
		cout<<n<<"BANANA SHAKE ADDED TO CART"<<endl;
	}
	if(check==2)
	{cout<<"HOW MANY MANGO SHAKE  DO YOU WANT:";
	cin>>n;
		bill=bill+(100*n);
		cout<<endl;
		cout<<n<<"MANGO SHAKE ADDED TO CART"<<endl;
	}
	if(check==3)
	{cout<<"HOW MANY STRAWBERY SHAKE DO YOU WANT:";
	cin>>n;
		bill=bill+(150*n);
		cout<<endl;
		cout<<n<<"STRAWBERY SHAKE ADDED TO CART"<<endl;
	}
		if(check==4)
	{cout<<"HOW MANY OREO SHAKE DO YOU WANT:";
	cin>>n;
		bill=bill+(120*n);
		cout<<endl;
		cout<<n<<"ORERO SHAKE ADDED TO CART"<<endl;
	}
		if(check==5)
	{cout<<"HOW MANY DATES+BANANA SHAKE DO YOU WANT:";
	cin>>n;
		bill=bill+(170*n);
		cout<<endl;
		cout<<n<<"DATES+BANANA SHAKE ADDED TO CART"<<endl;
	}
		if(check==6)
	{cout<<"HOW MANY OREO+BANANA SHAKE DO YOU WANT:";
	cin>>n;
		bill=bill+(50*n);
		cout<<endl;
		cout<<n<<"OREO+BANANA SHAKE ADDED TO CART"<<endl;
	}
		if(check==7)
	{cout<<"HOW MANY VANILLA SHAKE DO YOU WANT:";
	cin>>n;
		bill=bill+(200*n);
		cout<<endl;
		cout<<"VANILLA SHAKE ADDED TO CART"<<endl;
	}
		if(check==8)
	{cout<<"HOW MANY CHOCOLATE SHAKE DO YOU WANT:"<<endl;
	cin>>n;
		bill=bill+(200*n);
		cout<<n<<" CHOCOLATE SHAKE ADDED TO CART"<<endl;
	}
	if(check==10)
	{
		cout<<"Total Bill: "<<bill;
		cout<<endl;
	}
	}while(check!=0);
		system("CLS");
	return bill;
}


int game()
{
	int player = 1,i,choice;
	square[0]='o';square[1]='1';square[2]='2';square[3]='3';square[4]='4';square[5]='5';square[6]='6';square[7]='7';square[8]='8';square[9]='9';
	
    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)
    {
	

        cout<<"==>\aPlayer "<<--player<<" win ";
		system("PAUSE");
		system("CLS");
		}
        
    else
    {
	
        cout<<"==>\aGame draw";
        system("PAUSE");
		system("CLS");
		
	}
    cin.ignore();
    cin.get();
}


int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}


void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}
