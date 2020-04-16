//simulator for managing hospital tasks 
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
using namespace std;
int pid=1000;
class stfmanage
{	
	public:
    void getinfo()
    {
	cout<<"ENTER THE ID OF STAFF MEMBER "<<endl;
	cout<<"ID STARTS FROM 1 TO 10"<<endl;
	int id;
	cin>>id;
	switch (id)
	{
		case 1:
		{
			cout<<"NAME - DR. SIVA RAM"<<endl;
			cout<<"SEX - MALE"<<endl;
			cout<<"CARDIOLOGIST"<<endl;
			cout<<"AGE - 46 YEARS"<<endl;
			break;
					
		}
		case 2:
		{
			cout<<"NAME - DR. AKHIL SHAIK"<<endl;
			cout<<"SEX - MALE"<<endl;
			cout<<"NEPHROLOGIST"<<endl;
			cout<<"AGE - 42 YEARS"<<endl;
			break;
					
		}
		case 3:
		{
			cout<<"NAME - DR. PRIYA"<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"UROLOGISTS"<<endl;
			cout<<"AGE - 46"<<endl;
			break;
					
		}
		case 4:
		{
			cout<<"NAME - DR. ANAND KUMAR"<<endl;
			cout<<"SEX - MALE"<<endl;
			cout<<"NEUROLOGIST"<<endl;
			cout<<"AGE - 50"<<endl;
			break;
					
		}
		case 5:
		{
			cout<<"NAME - DR. ABHAY SINGH "<<endl;
			cout<<"SEX - MALE"<<endl;
			cout<<"ORTHOPADIC"<<endl;
			cout<<"AGE - 55"<<endl;
			break;
					
		}
		case 6:
		{
			cout<<"NAME - VANITHA "<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"NURSE"<<endl;
			cout<<"AGE - 35"<<endl;
			break;
					
		}
		case 7:
		{
			cout<<"NAME - ANKITHA "<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"NURSE"<<endl;
			cout<<"AGE - 30"<<endl;
					
		}
		case 8:
		{
			cout<<"NAME - SWATHI "<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"NURSE"<<endl;
			cout<<"AGE - 28"<<endl;
			break;
					
		}
		case 9:
		{
			cout<<"NAME - TEJASWINI "<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"NURSE"<<endl;
			cout<<"AGE - 26"<<endl;
			break;
			
					
		}
		case 10:
		{
			cout<<"NAME - NITHYA "<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"NURSE"<<endl;
			cout<<"AGE - 35"<<endl;
			break;
					
		}
		default:
		cout<<"SORRY NO MORE";
		break;
		
}}};
struct app
                            {
                                char symptom[500];
                                char diagnosis[500];
                                char medicine[500];
                                char addmission[30];
                                string ward;
                                int s;
                                char specialist[50];
                            };
           app add;
 struct patient_info
                        {
                            char name[20];
                            char address[100];
                            char contact[10];
                            char age[5];
                            char sex[8];
                            char blood_gp[5];
                            char disease_past[50];
                            int id;
                        };

            patient_info ak;
int cost=0;
int main()
//NOTE: RUN THE PROGRAM IN FULL SCREEN ONLY
{
char fname[20];
time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );
cout<<"HOSPITAL MANAGEMENT SYSTEM";
int i;
int login();
login();
void doctor(); 
void bill();
stfmanage ob;
//giving option to the user for their choice
int choice;
cout<<"enter a-h to get their choice";
cin>>"choice";
switch(choice)
{
	case a:
		{
			cout<<"add new patient record";
			break;
		}
	case b:
	    {
	    	cout<<"add diagnosis information";
	    	break;
		}	
	case c:
	    {
		 cout<<"full history of the patient";
		 break;
		}	
	case d:
			{
				cout<<"information about the hospital";
				break;
			}
	case e:
			{
			 cout<<"doctor's appointment";
			 break;	
			}
	case f:
	        {
	        	cout<<"staff information";
	        	break;
			}		
	case g:
	        {
	        	cout<<"room information";
	        	break;
			}		
	case h:
	        {
	        	cout<<"exit the program";
	        	break;
			}
	default:
	        {
	        	cout<<"invalid choice";
			}				
}


system("cls");

//displaying the information about the hospital........option 4
if(i==4)
{
	ifstream file;
	file.open("hos.txt");
		if(!file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the Hospital.............................\n\n";
		    string line;
			while(file.good())
			{
			getline(file,line);
			cout<<line<<"\n\t\t";
			}
			cout<<"\n\n\t\t";
			system("pause");
            system("cls");
			goto b;
		}
}
if(i==7)
{
	ifstream file;
	file.open("ot.txt");
		if(!file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the rooms.............................\n\n";
		    string line;
			while(file.good())
			{
			getline(file,line);
			cout<<line<<"\n\t\t";
			}
			cout<<"\n\n\t\t";
			system("pause");
            system("cls");
			goto b;
		}
}

//Adding the record of the new patient..................option 3
if(i==1)
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
  ofstream pat_file;
  char fname[20];
  cout<<"\n\n\n\nEnter the patient's file name : ";
  cin.ignore();
  gets(fname);
  pat_file.open(fname);
  		if(!fname)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
                        
            cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";//fn1353 st
            	ak.id=pid++;
            cout<<"\nPatient ID : "<<ak.id;pat_file<<"Patient ID : ";pat_file<<ak.id<<"\n";
			cout<<"\nName : ";pat_file<<"Name : ";gets(ak.name);pat_file<<ak.name<<"\n";
            cout<<"\nAddress : ";pat_file<<"Address : ";gets(ak.address);pat_file<<ak.address<<"\n";
            cout<<"\nContact Number : ";pat_file<<"Contact Number : ";gets(ak.contact);pat_file<<ak.contact<<"\n";
            cout<<"\nAge : ";pat_file<<"Age : ";gets(ak.age);pat_file<<ak.age<<"\n";
            cout<<"\nSex : ";pat_file<<"Sex : ";gets(ak.sex);pat_file<<ak.sex<<"\n";
            cout<<"\nBlood Group : ";pat_file<<"Blood Group : ";gets(ak.blood_gp);pat_file<<ak.blood_gp<<"\n";
            cout<<"\nAny Major disease suffered earlier : ";pat_file<<"Any Major disease suffered earlier : ";gets(ak.disease_past);pat_file<<ak.disease_past<<"\n";
			cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";
            cout<<"\nInformation Saved Successfully\n";
            }

  system("pause");
  system("cls");
  goto b;

}

//Appending diagnosis information of patient datewise.................option 2
if(i==2)
{
    fstream pat_file;
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<fname<<" ........................................\n\n\n\n";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
			pat_file.close();
			pat_file.open(fname, ios::out | ios::app);
            cout<<"\n";
			cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);pat_file<<"Description of "<<asctime (timeinfo)<<"\n";
                            
                            

            int s;
            cout<<"\nSymptoms : "; pat_file<<"Symptoms : ";gets(add.symptom); pat_file<<add.symptom<<"\n";
            cout<<"\nDiagnosis : "; pat_file<<"Diagnosis : ";gets(add.diagnosis); pat_file<<add.diagnosis<<"\n";
            cout<<"\nMedicines : "; pat_file<<"Medicines : ";gets(add.medicine); pat_file<<add.medicine<<"\n";
            cout<<"\nSpecialist : ";pat_file<<"Specialist : ";gets(add.specialist);pat_file<<add.specialist<<"\n";
			cout<<"\nAddmission Required? : "; pat_file<<"Addmission Required? : ";gets(add.addmission); pat_file<<add.addmission<<"\n";
            cout<<"\nType of ward :\n 1.General:\n 2.Private\n ENTER YOUR CHOICE\n"; 
          	cin>>s;
		    switch(s)
            {
            	case 1:
            	cout<<"General Ward";
            	add.ward="General";
            	pat_file<<"Type of ward"; pat_file<<add.ward<<"\n";pat_file<<"\n*************************************************************************\n";
            	break;
            	case 2:
            	cout<<"Private ward";
            	add.ward="Private";
            	pat_file<<"Type of ward"; pat_file<<add.ward<<"\n";pat_file<<"\n*************************************************************************\n";
            	break;
            	default :
            	cout<<"Sorry";
            	break;
            }
            cout<<"\n\n"<<add.ward<<" ward is alloted Successfully\n";
            cout<<"\nTotal billing cost : ";bill();pat_file<<"Total billing cost : ";pat_file<<cost<<"\n";
			pat_file.close();
			cout<<"\n\n";
			system("pause");
            system("cls");
			goto b;
		}
	
}

//For displaying the full medical history of patient in that hospital............option 3
if(i==3)
{
    fstream pat_file;
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<fname<<" ........................................\n\n\n\n";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
}
if(i==5)
{
	doctor();
	system("pause");
   system("cls");
   goto b;
}
if(i==6)
{
	ob.getinfo();
	system("pause");
   system("cls");
   goto b;
}


//Exiting Through the system with a Thank You note........................option 5
if(i==8)
{
system("cls");
 cout<<"THANK YOU FOR USING HOSPITAL";
}


cout<<"\n";

}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13)
   {  //character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
void doctor()
{
		//doctor appointment module
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                     |\n";
cout<<"\t\t\t\t\t\t|             1  >> CARDIOLOGIST                                  |\n";
cout<<"\t\t\t\t\t\t|             2  >> NEPHROLOGIST                                  |\n";
cout<<"\t\t\t\t\t\t|             3  >> UROLOGISTS                                    |\n";
cout<<"\t\t\t\t\t\t|             4  >> NEUROLOGIST                                   |\n";
cout<<"\t\t\t\t\t\t|             5  >> ORTHOPEDIC                                    |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
	int i;
	cin>>i;
	switch (i)
	{
		case 1:
		cout<<"DR. SIVA RAM\n TIME :- 10 am TO 1 pm "<<endl;
		break;
		case 2:
		cout<<"DR. AKHIL SHAIK\n TIME :- 10 am TO 1 pm "<<endl;
		break;
		case 3:
		cout<<"DR. PRIYA\n TIME :- 10 am TO 1 pm "<<endl;
		break;
		case 4:
		cout<<"DR. ANAND KUMAR\n TIME :- 10 am TO 1 pm "<<endl;
		break;
		case 5:
		cout<<"DR. ABHAY SINGH\n TIME :- 10 am TO 1 pm "<<endl;
		break;
		default :
		cout<<"THANK YOU"<<endl;
		break;
	}
	cout<<"IF YOU WANT TO CANCEL YOUR APPOINMENT  SAY YES OR NO "<<endl;
	string s;
	cin>>s;
	if(s=="YES")
	cout<<"YOUR APPOINMENT HAS BEEN CANCELLED"<<endl;
	else
	cout<<"THANK YOU"<<endl;
}
void bill()
{

	cost=500; //admisiion fees(300)+medicine fees(200)
	//ward cost
	if(add.ward=="General")
	cost+=2000; //general ward cost (2000)
	else if(add.ward=="Private")
	cost+=5000; //private ward cost (5000)
	//Appointment Cost
	if(strcmpi(add.specialist,"CARDIOLOGIST")==0)
	cost+=2500;  
	else if(strcmpi(add.specialist,"NEPHROLOGIST")==0)  
	cost+=1500;
	else if(strcmpi(add.specialist,"UROLOGISTS")==0)  
	cost+=1000;                          
 	else if(strcmpi(add.specialist,"NEUROLOGIST")==0)  
	cost+=3000;  
	else if(strcmpi(add.specialist,"ORTHOPEDIC")==0)  
	cost+=2000;  
	cout<<cost;                                
}

	
	
	
	
	
