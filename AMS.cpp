#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


void all_result();
void menu();
void quiz1();
void quiz2();
void oht1();
void oht2();
void enterMarksQuiz1();
void get_data();
void show_data();
void assign_1();
void assign_2();
void sem_proj();
void final();
void all_result();
void student();
void teacher();
void login();
void login_s();
void menu_s(string id);
int all_result_s(string id);
void back();
void back_s();
void reverse();



void teacher()
{
 
    login();
}

//teacher---login
void login()
{
	 ofstream out;
	 out.open("teacher_data.txt");
	 out<<"nadeem@ist.edu.pk\n";
	 out<<"nadeem#ist\n";
	 out.close();

	 int count;

	string userid,password,id,pass;
	
        cout<<"\t\t\t\t     /-----------------------------------------------------------------/\n";
        cout<<"\t\t\t\t    /                                                                 /\n";
		cout<<"\t\t\t\t   /             Welcome to the Teacher Login Page                   /\n";
        cout<<"\t\t\t\t  /                                                                 /\n";
        cout<<"\t\t\t\t /-----------------------------------------------------------------/\n\n";

	cout<<"Enter the mail: ";
	cin>>userid;
    cout<<"Enter the password: ";
	cin>>password;
	cout<<endl;
	
	ifstream input("teacher_data.txt");
	
	while(input>>id>>pass)
    {
    	if(id==userid && pass==password)
    	{
			count=1;
    		cout<<"your login is successful"<<endl;
            system("cls");
		}
    }
	input.close();

	if(count==1)
	{

        menu();
    		
	}
	else
	{
        system("cls");
		cout<<"  Login error, try again with the correct username and password  \n\n";
        login();
	}
}

//Student---display---Quiz1
int quiz1_s(string id)
{
    int regNo;
    ifstream file("QUIZ1.txt");
    string line;
 
    string targetRegistrationNumber = id; // Replace with the desired registration number
    bool studentFound = false;

    if (!file.is_open()) {
        cout << "Error opening file!\n";
        return 1;
    }

    while (getline(file, line)) 
	{
        string registrationNumber;
        int marks;

        // Extract registration number and marks from the line (assuming they are separated by a space)
        istringstream iss(line);
        iss>>registrationNumber >> marks;

        if (registrationNumber == targetRegistrationNumber) 
        {
            system("cls");
            cout << "Quiz-1 Marks: " << marks << "\n\n";
            studentFound = true;
            break; // Exit the loop once the student is found
        }
    }

    file.close();

    if (!studentFound) 
    {
        cout << "Student with registration number " << targetRegistrationNumber << " not found!\n";
    }

    return 0;
}

int quiz2_s(string id)
{
    int regNo;
    ifstream file("QUIZ2.txt");
    string line;
 
    string targetRegistrationNumber = id; // Replace with the desired registration number
    bool studentFound = false;

    if (!file.is_open()) 
    {
        cout << "Error opening file!\n";
        return 1;
    }

    while (getline(file, line)) 
	{
        string registrationNumber;
        int marks;

        // Extract registration number and marks from the line 
        istringstream iss(line);
        iss>>registrationNumber >> marks;

        if (registrationNumber == targetRegistrationNumber) 
        {
            system("cls");
            cout << "Quiz-2 Marks: " << marks << "\n\n";
            studentFound = true;
            break; // Exit the loop once the student is found
        }
    }

    file.close();

    if (!studentFound) {
        cerr << "Student with registration number " << targetRegistrationNumber << " not found!\n";
    }

    return 0;
}

int Assignment1_s(string id)
{
    int regNo;
    ifstream file("ASSIGN1.txt");
    string line;
 
    string targetRegistrationNumber = id; // Replace with the desired registration number
    bool studentFound = false;

    if (!file.is_open()) {
        cout << "Error opening file!\n";
        return 1;
    }

    while (getline(file, line)) 
	{
        string registrationNumber;
        int marks;

        // Extract registration number and marks from the line 
        istringstream iss(line);
        iss >> registrationNumber >> marks;

        if (registrationNumber == targetRegistrationNumber) 
        {
            system("cls");
            cout << "Assignment-1 Marks: " << marks << "\n\n";
            studentFound = true;
            break; // Exit the loop once the student is found
        }
    }

    file.close();

    if (!studentFound) 
    {
        cout << "Student with registration number " << targetRegistrationNumber << " not found!\n";
    }

    return 0;
}

 
  
  int Assignment2_s(string id)
{
    int regNo;
    ifstream file("ASSIGN2.txt");
    string line;
 
    string targetRegistrationNumber = id; // Replace with the desired registration number
    bool studentFound = false;

    if (!file.is_open()) {
        cout << "Error opening file!\n";
        return 1;
    }

    while (getline(file, line)) 
	{
        string registrationNumber;
        int marks;

        // Extract registration number and marks from the line 
        istringstream iss(line);
        iss>>registrationNumber >> marks;

        if (registrationNumber == targetRegistrationNumber) 
        {
            system("cls");
            cout << "Assignment-2 Marks: " << marks << "\n\n";
            studentFound = true;
            break; // Exit the loop once the student is found
        }
    }

    file.close();

    if (!studentFound) {
        cout << "Student with registration number " << targetRegistrationNumber << " not found!\n";
    }

    return 0;
}


   
  int Oht1_s(string id)
{
    int regNo;
    ifstream file("OHT1.txt");
    string line;
 
    string targetRegistrationNumber = id; // Replace with the desired registration number
    bool studentFound = false;

    if (!file.is_open()) {
        cout << "Error opening file!\n";
        return 1;
    }

    while (getline(file, line)) 
	{
        string registrationNumber;
        int marks;

        // Extract registration number and marks from the line 
        istringstream iss(line);
        iss>>registrationNumber >> marks;

        if (registrationNumber == targetRegistrationNumber) 
        {
            system("cls");
            cout << "OHT-1 Marks: " << marks << "\n\n";
            studentFound = true;
            break; // Exit the loop once the student is found
        }
    }

    file.close();

    if (!studentFound) {
        cout << "Student with registration number " << targetRegistrationNumber << " not found!\n";
    }

    return 0;
}
  
    
  int Oht2_s(string id)
{
    int regNo;
    ifstream file("OHT2.txt");
    string line;
 
    string targetRegistrationNumber = id; // Replace with the desired registration number
    bool studentFound = false;

    if (!file.is_open()) {
        cout << "Error opening file!\n";
        return 1;
    }

    while (getline(file, line)) 
	{
        string registrationNumber;
        int marks;

        // Extract registration number and marks from the line 
        istringstream iss(line);
        iss>>registrationNumber >> marks;

        if (registrationNumber == targetRegistrationNumber) 
        {
            system("cls");
            cout << "OHT-2 Marks: " << marks << "\n\n";
            studentFound = true;
            break; // Exit the loop once the student is found
        }
    }

    file.close();

    if (!studentFound) {
        cout << "Student with registration number " << targetRegistrationNumber << " not found!\n";
    }

    return 0; 
}
  

    
  int Project_s(string id)
{
    int regNo;
    ifstream file("SEM_PROJ.txt");
    string line;
 
    string targetRegistrationNumber = id; // Replace with the desired registration number
    bool studentFound = false;

    if (!file.is_open()) {
        cout << "Error opening file!\n";
        return 1;
    }

    while (getline(file, line)) 
	{
        string registrationNumber;
        int marks;

        // Extract registration number and marks from the line 
        istringstream iss(line);
        iss>>registrationNumber >> marks;

        if (registrationNumber == targetRegistrationNumber) 
        {
            system("cls");
            cout << "Project-Marks: " << marks << "\n\n";
            studentFound = true;
            break; // Exit the loop once the student is found
        }
    }

    file.close();

    if (!studentFound) {
        cout << "Student with registration number " << targetRegistrationNumber << " not found!\n";
    }

    return 0;
}


     
  int Final_s(string id)
{
    int regNo;
    ifstream file("FINAL.txt");
    string line;
 
    string targetRegistrationNumber = id; // Replace with the desired registration number
    bool studentFound = false;

    if (!file.is_open()) {
        cout << "Error opening file!\n";
        return 1;
    }

    while (getline(file, line)) 
	{
        string registrationNumber;
        int marks;

        // Extract registration number and marks from the line
        istringstream iss(line);
        iss>>registrationNumber >> marks;

        if (registrationNumber == targetRegistrationNumber) 
        {
            system("cls");
            cout << "Final-Marks: " << marks << "\n\n";
            studentFound = true;
            break; // Exit the loop once the student is found
        }
    }

    file.close();

    if (!studentFound) {
         cout << "Student with registration number " << targetRegistrationNumber << " not found!\n";
    }

    return 0;
}

int all_result_s(string id)
{
 
    system("cls");
    cout<<"\n\n";
    int regNo, sum=0;
    ifstream file;
    file.open("ALL_Result.txt");
    string line;
 
    string targetRegistrationNumber = id; // Replace with the desired registration number
    bool studentFound = false;

    if (!file.is_open()) 
    {
        cout << "Error opening file!\n";
        return 1;
    }
   cout<<"Quiz-1\t\t"<<"Quiz-2\t\t"<<"OHT-1\t\t"<<"OHT-2\t\t"<<"Assign-1\t"<<"Assign-2\t"<<"Project\t"<<"\tFinal\n"; 
    while(getline(file, line))
    {
       
        string registrationNumber;
        int marks[12];

        // Extract registration number and marks from the line (assuming they are separated by a space)
        istringstream iss(line);
        for(int i=1; i<=8; i++)
        {
            iss >> registrationNumber >> marks[i];
        }
        

  
        for (int i=1; i<=8; i++)
        {
            if (registrationNumber == targetRegistrationNumber) 
            {
                cout << "   " << marks[i] << "\t\t";
                sum+=marks[i];
                studentFound = true; 
                break;    // Exit the loop once the student is found
            }
        }
        
    }
    file.close();

    cout<<"\n\n";
    cout<<"Your Percentage is "<<sum<<".\n";
     if(sum >= 85)
      {
        cout<<"Your Grade in Programming Fundamental is A.\n";
      }
    else if(sum < 85 && sum >= 70)
      {
        cout<<"Your Grade in Programming Fundamental is B.\n";
      }
    else if(sum < 70 && sum >= 55)
      {
        cout<<"Your Grade in Programming Fundamental is C.\n";
      }
    else if(sum < 55 && sum >= 40)
      {
        cout<<"Your Grade in Programming Fundamental is D.\n";
      }
    else if(sum < 40)
      {
        cout<<"Your Grade in Programming Fundamental is F.\n";
      }

    if (!studentFound) 
    {
        cout << "Student with registration number " << targetRegistrationNumber << " not found!\n";
    }
    cout<<"\n\n";
    return 0;
}

void back_s(string id)
{
    int choice;
    cout<<"1: Go to Main Menu\n";
    cout<<"2: Logout\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            system("cls");
            menu_s(id);
            break;
        }
        case 2:
        {
            system("cls");
            reverse();
            break;
        }
    }
}

void menu_s(string id)
{
        cout<<"             *********************************************   \n";
        cout<<"            * *                                        *  *  \n";
        cout<<"            *    *                                   *    *  \n";
        cout<<"            *      *           Main Menu          *      *  \n";
        cout<<"            *    *                                   *    *  \n";
        cout<<"            *  *                                       *  *  \n";
        cout<<"             *********************************************   \n\n";

    int ch;
	cout<<"\t\t\t\t\t SEMESTER DATA \t\t\t\t\t"<<endl;
	cout<<"1: Quiz 1"<<endl;
	cout<<"2: Quiz 2"<<endl;
	cout<<"3: Assignment 1"<<endl;
	cout<<"4: Assignment 2"<<endl;
    cout<<"5: OHT-1"<<endl;
    cout<<"6: OHT-2"<<endl;
    cout<<"7: Project"<<endl;
	cout<<"8: Final"<<endl;
    cout<<"9: Result"<<endl;
    cout<<"10: Logout\n";
	cout<<"Enter ur choice: ";
	cin>>ch;
	cout<<endl;
	
	switch(ch)
 	{
        case 1:
        {
            quiz1_s(id);
            back_s(id);
		    break;
        }
        case 2:
        {
            quiz2_s(id);
            back_s(id);
            break;

        }
        case 3:
        {
            Assignment1_s(id);
            back_s(id);
            break;
        }
        case 4:
        {
            Assignment2_s(id);
            back_s(id);
            break;
        }
        case 5:
        {
            Oht1_s(id);
            back_s(id);
            break;
        }
      case 6:
        {
            Oht2_s(id);
            back_s(id);
            break;
        }
       case 7:
        {
            Project_s(id);
            back_s(id);
            break;
        }
       case 8:
        {
            Final_s(id);
            back_s(id);
            break;
        }
        case 9:
        {
            all_result_s(id);
             back_s(id);
            break;
        }
        case 10:
        {
            reverse();
            break;
        }
		default:
		cout<<"invalid"<<endl;
	}

}

//Student--Login
void login_s()
{
    int count;
	string ID, pass;

        cout<<"\t\t\t\t     /-----------------------------------------------------------------/\n";
        cout<<"\t\t\t\t    /                                                                 /\n";
		cout<<"\t\t\t\t   /             Welcome to the Student Login Page                   /\n";
        cout<<"\t\t\t\t  /                                                                 /\n";
        cout<<"\t\t\t\t /-----------------------------------------------------------------/\n\n";
	cout<<"Enter the username: \n";
	cin>>ID;
	cout<<"Enter the password: \n"; 
	cin>>pass;


    ifstream out;
    out.open("userw.txt");
    ifstream in;
    in.open("passw.txt");


    if (!out.is_open() || !in.is_open()) 
    {
    cout << "Error opening files!\n\n";
    
    }



    string username, password;
    while (getline(out, username) && getline(in, password)) 
    {
        // Compare username and password here
        if (username == ID  && password == pass) 
        {
            count=1;
            system("cls");
        } 
    }

    if(count==1)
    {
        menu_s(ID);
    }

    else
    {
        system("cls");
        cout<<"Credientials are wrong, try again with correct credientals\n\n";
        login_s();
    }

    out.close();
    in.close();

}




int main()
{
    system("cls");
    int x;
    cout<<"\n\t\t\t\t\t|";
    cout<<"============================================================|\n";
    cout<<"\t\t\t\t\t|\t\t                                             |\n";
    cout<<"\t\t\t\t\t|\t\t                                             |\n";
     cout<<"\t\t\t\t\t|";
    cout << "     ** Welcome to the IST Academic Management System **    |\n";
    cout<<"\t\t\t\t\t|\t\t                                             |\n";
    cout<<"\t\t\t\t\t|\t\t                                             |\n";
    cout<<"\t\t\t\t\t|============================================================|\n";
    
    cout << "\n\n\n   **************************************************\n";
    cout<<"\t\t\tLOGIN AS:"<<endl<<"-->\t1:STDUENT\n-->\t2:TEACHER\n-->\t3:Exit"<<endl;
    cout << "\n   **************************************************\n\n";
    cin>>x;
     
      switch(x)
    {
        case 1:
        {
            system("cls");
            login_s();
            break;
        }
        case 2:
        {
            system("cls");
            teacher();
            break;
        }
        case 3:
        {
            system("cls");
            cout<<"Exiting...................................\n";
            break;
        } 
        default:
            cout<<"invalid option";
            main();
    }

    
  return 0;

}

void reverse()
{
    main(); 
}

void menu()
{
        cout<<"             *********************************************   \n";
        cout<<"            * *                                        *  *  \n";
        cout<<"            *    *                                   *    *  \n";
        cout<<"            *      *           Main Menu          *      *  \n";
        cout<<"            *    *                                   *    *  \n";
        cout<<"            *  *                                       *  *  \n";
        cout<<"             *********************************************   \n\n";

    int choice;
	cout<<"\t\t\t\tWhich information you want to access?\n";
	cout<<"1: Quiz-1\n";
	cout<<"2: Quiz-2\n";
	cout<<"3: OHT 1\n";
	cout<<"4: OHT 2\n";
	cout<<"5: Assignment-1\n"; 
	cout<<"6: Assignment-2\n";
	cout<<"7: SEMESTER PROJECT\n";
    cout<<"8: FINAL\n";
    cout<<"9: ALL RESULTS\n";
    cout<<"10: Logout\n";
    cout<<"Enter your choice: ";
	cin>>choice;
    
    switch(choice)
    {
        case 1:
        {
            quiz1();
            break;
        }
        case 2:
        {
            quiz2();
             break;
        }
        case 3:
        {
            oht1();
             break;
        }
        case 4:
        {
             oht2();
              break;
        }
        case 5:
        {
            assign_1();
             break;
        }
         case 6:
        {
            assign_2();
             break;
        }
          case 7:
        {
            sem_proj();
             break;
        }
          case 8:
        {
            final();
             break;
        }

        case 9:
        {
            all_result();
             break;
        }
        case 10:
        {
            main();
            break;
        }
        
        default:
        {
            cout<<"Error!";
        }
    }
    
    
}

void quiz1()
{

int num[19]; 
string name[19]; 
int m[22];

ifstream out; 
out.open("name.txt");

for (int i = 1; i <= 18; ++i) 
{
    getline(out, name[i]);
}

ifstream in;
in.open("RegNo.txt");

for (int i = 1; i <= 18; ++i) 
{
   in>>num[i];
}
       system("cls");

         cout<<"\t\t\t**Following is the name and reg No:*"<<endl<<endl;

         for (int i=1;i<=18;++i)
         {
             cout<<num[i]<<"\t\t\t"<<name[i]<<endl;  

         }

   
    ofstream file("QUIZ1.txt");
   

    if (!file.is_open()) 
    {
        cerr << "Error opening file: " << "QUIZ1.txt" <<endl;
        return;
    }
    
     cout<<"\n\t\t\t----------------Enter marks of quiz 1---------------"<<endl<<endl;


        
    int minScore = 0; 
    int maxScore = 0; 

for (int i = 1; i <= 18; ++i)
{
    cout << "\t" << num[i] << "\t\t\t" << name[i] << ":";
    cin >> m[i];

    if (m[i] < minScore) 
    {
        minScore = m[i];
    }
    if (m[i] > maxScore) 
    {
        maxScore = m[i];
    }
}
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;


   for (int i = 1; i <= 18; ++i) 
    {
        in >> num[i];
    }

   for(int i=1;i<=18;++i)
    {
        in>>num[i];
    }

    for(int i=1;i<=18;i++)
    {
        file<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    cout<<endl;
    
    cout<<"\n\t\t\t-------------Following is the result u have entered:------------"<<endl<<endl;

   for(int i=1;i<=18;i++)
    {
        cout<<num[i]<<"\t\t"<<name[i]<<"\t\t"<<m[i]<<endl;
    }

        file.close();
      
       ofstream file2("ALL_RESULT.txt", ios::app);

       file2<<"\n\t\t\tQuiz 1\n";
   

    if (!file2.is_open())
    {
        cerr << "Error opening file: " << "ALL_RESULT.txt" <<endl;
        return;
    }

    for(int i=1; i<=18; i++)
    {
        in>>num[i];
    }
   
    for(int i=1;i<=18;i++)
    {
        file2<<num[i]<<"\t\t"<<m[i]<<endl;
    }

    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;

        file2.close();

        cout<<endl<<endl;

        back();


}

void quiz2()
{
  int num[19]; 
string name[19]; 
int m[22];

ifstream out;
out.open("name.txt");

for (int i = 1; i <= 18; ++i) 
{
    getline(out, name[i]);
}

ifstream in;
in.open("RegNo.txt");

for (int i = 1; i <= 18; ++i) 
{
   in>>num[i];
}
       system("cls");

         cout<<"\t\t\t**Following is the name and reg No:*"<<endl<<endl;

         for (int i=1;i<=18;++i)
         {
             cout<<num[i]<<"\t\t\t"<<name[i]<<endl;  

         }

   
    ofstream file("QUIZ2.txt");
   

    if (!file.is_open()) 
    {
        cerr << "Error opening file: " << "QUIZ2.txt" <<endl;
        return;
    }


     cout<<"\n\t\t\t----------------Enter marks of quiz 2:---------------"<<endl<<endl;

        
    int minScore = 0; 
    int maxScore = 0; 

for (int i = 1; i <= 18; ++i)
{
    cout << "\t" << num[i] << "\t\t\t" << name[i] << ":";
    cin >> m[i];

    if (m[i] < minScore) 
    {
        minScore = m[i];
    }
    if (m[i] > maxScore) 
    {
        maxScore = m[i];
    }
}
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;


   for (int i = 1; i <= 18; ++i) 
    {
        in >> num[i];
    }

   for(int i=1;i<=18;++i)
    {
        in>>num[i];
    }

    for(int i=1;i<=18;i++)
    {
        file<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    cout<<endl;
    
   cout<<"\n\t\t\t-------------Following is the result u have entered:------------"<<endl<<endl;

   for(int i=1;i<=18;i++)
    {
       cout<<num[i]<<"\t\t"<<name[i]<<"\t\t"<<m[i]<<endl;
    }

        file.close();
      
       ofstream file2("ALL_RESULT.txt", ios::app);

       file2<<"\n\t\t\tQuiz 2 result:\n";
   

    if (!file2.is_open())
    {
        cerr << "Error opening file: " << "ALL_RESULT.txt" <<endl;
        return;
    }

    for(int i=1; i<=18; i++)
    {
        in>>num[i];
    }
   
    for(int i=1;i<=18;i++)
    {
        file2<<num[i]<<"\t\t"<<m[i]<<endl;
    }

    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;
     
        file2.close();

       cout<<endl<<endl;

        back();

  
}

void oht1()
{
    int num[19]; 
string name[19]; 
int m[22];

ifstream out;
out.open("name.txt");

for (int i = 1; i <= 18; ++i) 
{
    getline(out, name[i]);
}

ifstream in;
in.open("RegNo.txt");

for (int i = 1; i <= 18; ++i) 
{
   in>>num[i];
}
       system("cls");

         cout<<"\t\t\t**Following is the name and reg No:*"<<endl<<endl;

         for (int i=1;i<=18;++i)
         {
             cout<<num[i]<<"\t\t\t"<<name[i]<<endl;  

         }

   
    ofstream file("OHT1.txt");
   

    if (!file.is_open()) 
    {
        cerr << "Error opening file: " << "OHT1.txt" <<endl;
        return;
    }

     cout<<"\n\t\t\t----------------Enter marks of OHT 1:---------------"<<endl<<endl;

        
    int minScore = 0; 
    int maxScore = 0; 

for (int i = 1; i <= 18; ++i)
{
    cout << "\t" << num[i] << "\t\t\t" << name[i] << ":";
    cin >> m[i];

    if (m[i] < minScore) 
    {
        minScore = m[i];
    }
    if (m[i] > maxScore) 
    {
        maxScore = m[i];
    }
}
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;

   for (int i = 1; i <= 18; ++i) 
    {
        in >> num[i];
    }

   for(int i=1;i<=18;++i)
    {
        in>>num[i];
    }

    for(int i=1;i<=18;i++)
    {
        file<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    cout<<endl;
    
    cout<<"\n\t\t\t-------------Following is the result u have entered:------------"<<endl<<endl;

   for(int i=1;i<=18;i++)
    {
        cout<<num[i]<<"\t\t"<<name[i]<<"\t\t"<<m[i]<<endl;
    }

        file.close();
      
       ofstream file2("ALL_RESULT.txt", ios::app);

       file2<<"\n\t\t\tOHT 1 result:\n";
   

    if (!file2.is_open())
    {
        cerr << "Error opening file: " << "ALL_RESULT.txt" <<endl;
        return;
    }

    for(int i=1; i<=18; i++)
    {
        in>>num[i];
    }
   
    for(int i=1;i<=18;i++)
    {
        file2<<num[i]<<"\t\t"<<m[i]<<endl;
    }

    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;


        file2.close();

        cout<<endl<<endl;

        back(); 
}

void oht2()
{

 int num[19]; 
string name[19]; 
int m[22];

ifstream out;
out.open("name.txt");

for (int i = 1; i <= 18; ++i) 
{
    getline(out, name[i]);
}

ifstream in;
in.open("RegNo.txt");

for (int i = 1; i <= 18; ++i) 
{
   in>>num[i];
}
       system("cls");

         cout<<"\t\t\t**Following is the name and reg No:*"<<endl<<endl;

         for (int i=1;i<=18;++i)
         {
             cout<<num[i]<<"\t\t\t"<<name[i]<<endl;  

         }

   
    ofstream file("OHT2.txt");
   

    if (!file.is_open()) 
    {
        cerr << "Error opening file: " << "OHT2.txt" <<endl;
        return;
    }


    

     cout<<"\n\t\t\t----------------Enter marks of OHT 2:---------------"<<endl<<endl;

        
    int minScore = 0; 
    int maxScore = 0; 

for (int i = 1; i <= 18; ++i)
{
    cout << "\t\t\t" << num[i] << "\t\t\t" << name[i] << ":";
    cin >> m[i];

    if (m[i] < minScore) 
    {
        minScore = m[i];
    }
    if (m[i] > maxScore) 
    {
        maxScore = m[i];
    }
}

    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2 << endl; 

   for (int i = 1; i <= 18; ++i) 
    {
        in >> num[i];
    }

   for(int i=1;i<=18;++i)
    {
        in>>num[i];
    }

    for(int i=1;i<=18;i++)
    {
        file<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    cout<<endl;
    
    cout<<"\n\t\t\t-------------Following is the result u have entered:------------"<<endl<<endl;

   for(int i=1;i<=18;i++)
    {
        cout<<num[i]<<"\t\t"<<name[i]<<"\t\t"<<m[i]<<endl;
    }

        file.close();
      
       ofstream file2("ALL_RESULT.txt", ios::app);

       file2<<"\n\t\t\tOHT 2 result:\n";
   

    if (!file2.is_open())
    {
        cerr << "Error opening file: " << "ALL_RESULT.txt" <<endl;
        return;
    }

    for(int i=1; i<=18; i++)
    {
        in>>num[i];
    }
   
    for(int i=1;i<=18;i++)
    {
        file2<<num[i]<<"\t\t"<<m[i]<<endl;
    }

    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;


        file2.close();

        cout<<endl<<endl;

     back(); 




}
   

void assign_1()
{
int num[19]; 
string name[19]; 
int m[19]; 

ifstream out;
out.open("name.txt");

for (int i = 1; i <= 18; ++i) 
{
    getline(out, name[i]);
}

ifstream in;
in.open("RegNo.txt");

for (int i = 1; i <= 18; ++i) 
{
   in>>num[i];
}
       system("cls");

         cout<<"\t\t\t**Following is the name and reg No:*"<<endl<<endl;

         for (int i=1;i<=18;++i)
         {
             cout<<num[i]<<"\t\t\t"<<name[i]<<endl;  

         }

   
    ofstream file("ASSIGN1.txt");
   

    if (!file.is_open()) 
    {
        cerr << "Error opening file: " << "ASSIGN1.txt" <<endl;
        return;
    }

     cout<<"\n\t\t\t----------------Enter marks of ASSIGNMENT 1:---------------"<<endl<<endl;

        
    int minScore=0;
    int maxScore=0; 
  

for (int i = 1; i <= 18; ++i)
{
    cout << "\t\t\t" << num[i] << "\t\t\t" << name[i] << ": ";
    cin >> m[i];

    if (m[i] < minScore) 
    {
        minScore = m[i];
    }
    if (m[i] > maxScore) 
    {
        maxScore = m[i];
    }
}
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << maxScore+minScore/ 2;


   for (int i = 1; i <= 18; ++i) 
    {
        in >> num[i];
    }

   for(int i=1;i<=18;++i)
    {
        in>>num[i];
    }

    for(int i=1;i<=18;i++)
    {
        file<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    cout<<endl;
    
    cout<<"\n\t\t\t-------------Following is the result u have entered:------------"<<endl<<endl;

   for(int i=1;i<=18;i++)
    {
        cout<<num[i]<<"\t\t"<<name[i]<<"\t\t"<<m[i]<<endl;
    }

        file.close();
      
       ofstream file2("ALL_RESULT.txt", ios::app);

       file2<<"\n\t\t\tASSIGNMENT 1\n";
   

    if (!file2.is_open())
    {
        cerr << "Error opening file: " << "ALL_RESULT.txt" <<endl;
        return;
    }

    for(int i=1; i<=18; i++)
    {
        in>>num[i];
    }
   
    for(int i=1;i<=18;i++)
    {
        file2<<num[i]<<"\t\t"<<m[i]<<endl;
    }
        
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;
        

        file2.close();

        cout<<endl<<endl;

        back();
}


void assign_2()
{
    int num[19]; 
string name[19]; 
int m[22];

ifstream out;
out.open("name.txt");

for (int i = 1; i <= 18; ++i) 
{
    getline(out, name[i]);
}

ifstream in;
in.open("RegNo.txt");

for (int i = 1; i <= 18; ++i) 
{
   in>>num[i];
}
       system("cls");

         cout<<"\t\t\t**Following is the name and reg No:*"<<endl<<endl;

         for (int i=1;i<=18;++i)
         {
             cout<<num[i]<<"\t\t\t"<<name[i]<<endl;  

         }

   
    ofstream file("ASSIGN2.txt");
   

    if (!file.is_open()) 
    {
        cerr << "Error opening file: " << "ASSIGN2.txt" <<endl;
        return;
    }


    // int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15,m16,m17,m18;

     cout<<"\n\t\t\t----------------Enter marks of ASSIGNMENT 2:---------------"<<endl<<endl;

    int INT_MAX=0;
    int INT_MIN=0;
        
    int minScore = INT_MAX; 
    int maxScore = INT_MIN; 

for (int i = 1; i <= 18; ++i)
{
    cout << "\t\t\t" << num[i] << "\t\t\t" << name[i] << ":";
    cin >> m[i];

    if (m[i] < minScore) 
    {
        minScore = m[i];
    }
    if (m[i] > maxScore) 
    {
        maxScore = m[i];
    }
}
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;
        system("cls");

   for (int i = 1; i <= 18; ++i) 
    {
        in >> num[i];
    }

   for(int i=1;i<=18;++i)
    {
        in>>num[i];
    }

    for(int i=1;i<=18;i++)
    {
        file<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    cout<<endl;

    
    cout<<"\n\t\t\t-------------Following is the result u have entered:------------"<<endl<<endl;

   for(int i=1;i<=18;i++)
    {
        cout<<num[i]<<"\t\t"<<name[i]<<"\t\t"<<m[i]<<endl;
    }

        file.close();
      
       ofstream file2("ALL_RESULT.txt", ios::app);

       file2<<"\n\t\t\tASSIGNMENT 2\n";
   

    if (!file2.is_open())
    {
        cerr << "Error opening file: " << "ALL_RESULT.txt" <<endl;
        return;
    }

    for(int i=1; i<=18; i++)
    {
        in>>num[i];
    }
   
    for(int i=1;i<=18;i++)
    {
        file2<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;

        file2.close();

        cout<<endl<<endl;

        back(); 
}

void sem_proj()
{

int num[19]; 
string name[19]; 
int m[22];

ifstream out;
out.open("name.txt");

for (int i = 1; i <= 18; ++i) 
{
    getline(out, name[i]);
}

ifstream in;
in.open("RegNo.txt");

for (int i = 1; i <= 18; ++i) 
{
   in>>num[i];
}
       system("cls");

         cout<<"\t\t\t*Following is the name and reg No:"<<endl<<endl;

         for (int i=1;i<=18;++i)
         {
             cout<<num[i]<<"\t\t\t"<<name[i]<<endl;  

         }

   
    ofstream file("SEM_PROJ.txt");
   

    if (!file.is_open()) 
    {
        cerr << "Error opening file: " << "SEM_PROJ.txt" <<endl;
        return;
    }


    int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15,m16,m17,m18;

     cout<<"\n\t\t\t----------------Enter marks of SEMESTER PROJECT:---------------"<<endl<<endl;

    int INT_MAX;
    int INT_MIN;
        
    int minScore = INT_MAX; 
    int maxScore = INT_MIN; 

for (int i = 1; i <= 18; ++i)
{
    cout << "\t\t\t" << num[i] << "\t\t\t" << name[i] << ":";
    cin >> m[i];

    if (m[i] < minScore) 
    {
        minScore = m[i];
    }
    if (m[i] > maxScore) 
    {
        maxScore = m[i];
    }
}
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;


   for (int i = 1; i <= 18; ++i) 
    {
        in >> num[i];
    }

   for(int i=1;i<=18;++i)
    {
        in>>num[i];
    }

    for(int i=1;i<=18;i++)
    {
        file<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    cout<<endl;
    
    cout<<"\n\t\t\t-------------Following is the result u have entered:------------"<<endl<<endl;

   for(int i=1;i<=18;i++)
    {
        cout<<num[i]<<"\t\t"<<name[i]<<"\t\t"<<m[i]<<endl;
    }

        file.close();
      
       ofstream file2("ALL_RESULT.txt", ios::app);

       file2<<"\n\t\t\tSEMESTER PROJECT result:\n";
   

    if (!file2.is_open())
    {
        cerr << "Error opening file: " << "ALL_RESULT.txt" <<endl;
        return;
    }

    for(int i=1; i<=18; i++)
    {
        in>>num[i];
    }
   
    for(int i=1;i<=18;i++)
    {
        file2<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;

        file2.close();

        cout<<endl<<endl;

        back();
     
}

void final()
{
    int num[19]; 
string name[19]; 
int m[22];

ifstream out;
out.open("name.txt");

for (int i = 1; i <= 18; ++i) 
{
    getline(out, name[i]);
}

ifstream in;
in.open("RegNo.txt");

for (int i = 1; i <= 18; ++i) 
{
   in>>num[i];
}
       system("cls");

         cout<<"\t\t\t**Following is the name and reg No:*"<<endl<<endl;

         for (int i=1;i<=18;++i)
         {
             cout<<num[i]<<"\t\t\t"<<name[i]<<endl;  

         }

   
    ofstream file("FINAL.txt");
   

    if (!file.is_open()) 
    {
        cerr << "Error opening file: " << "FINAL.txt" <<endl;
        return;
    }

     cout<<"\n\t\t\t----------------Enter marks of FINAL:---------------"<<endl<<endl;

    int INT_MAX;
    int INT_MIN;
        
    int minScore = INT_MAX; 
    int maxScore = INT_MIN; 

for (int i = 1; i <= 18; ++i)
{
    cout << "\t\t\t" << num[i] << "\t\t\t" << name[i] << ":";
    cin >> m[i];

    if (m[i] < minScore) 
    {
        minScore = m[i];
    }
    if (m[i] > maxScore) 
    {
        maxScore = m[i];
    }
}
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;


   for (int i = 1; i <= 18; ++i) 
    {
        in >> num[i];
    }

   for(int i=1;i<=18;++i)
    {
        in>>num[i];
    }

    for(int i=1;i<=18;i++)
    {
        file<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    cout<<endl;
    
    cout<<"\n\t\t\t-------------Following is the result u have entered:------------"<<endl<<endl;

   for(int i=1;i<=18;i++)
    {
        cout<<num[i]<<"\t\t"<<name[i]<<"\t\t"<<m[i]<<endl;
    }

        file.close();
      
       ofstream file2("ALL_RESULT.txt", ios::app);

       file2<<"\n\t\t\tFINAL result:\n";
   

    if (!file2.is_open())
    {
        cerr << "Error opening file: " << "ALL_RESULT.txt" <<endl;
        return;
    }

    for(int i=1; i<=18; i++)
    {
        in>>num[i];
    }
   
    for(int i=1;i<=18;i++)
    {
        file2<<num[i]<<"\t\t"<<m[i]<<endl;
    }
    
    cout<<endl;
    cout <<"\t\t\t"<< "Minimum Score:" << "\t\t" << minScore << endl;
    cout <<"\t\t\t"<< "Maximum Score:" << "\t\t" << maxScore << endl;
    cout <<"\t\t\t"<< "Average score:" << "\t\t" << (maxScore + minScore) / 2;

        file2.close();

        cout<<endl<<endl;

        back();
}

void all_result()
{
int num[19]; 
string name[19]; 
string m[20]=" ";

    cout<<"\n\n-------List of FINAL Marks---------\n";
    ifstream inn;
    inn.open("QUIZ1.txt");

        for(int i=0; i<18; i++)
        {    
           getline(inn, m[i]);
        }

    inn.close();

        for(int i=0; i<18; i++)
        {
            cout<<m[i]<<endl;
        }
  cout<<"\n\n-------List of Quiz-2 Marks---------\n";

ifstream in;
    in.open("QUIZ2.txt");

        for(int i=0; i<18; i++)
        {    
           getline(in, m[i]);
        }

    in.close();

        for(int i=0; i<18; i++)
        {
            cout<<m[i]<<endl;
        }


  cout<<"\n\n-------List of Assignment-1 Marks---------\n";

ifstream a1;
    a1.open("ASSIGN1.txt");

        for(int i=0; i<18; i++)
        {    
           getline(a1, m[i]);
        }

    a1.close();

        for(int i=0; i<18; i++)
        {
            cout<<m[i]<<endl;
        }


  cout<<"\n\n-------List of Assignment-2 Marks---------\n";

ifstream a2;
    a2.open("ASSIGN2.txt");

        for(int i=0; i<18; i++)
        {    
           getline(a2, m[i]);
        }

    a2.close();

        for(int i=0; i<18; i++)
        {
            cout<<m[i]<<endl;
        }

        cout<<"\n\n-------List of OHT-1 Marks---------\n";

ifstream oht1;
    oht1.open("OHT1.txt");

        for(int i=0; i<18; i++)
        {    
           getline(oht1, m[i]);
        }

    oht1.close();

        for(int i=0; i<18; i++)
        {
            cout<<m[i]<<endl;
        }
 
        cout<<"\n\n-------List of OHT-2 Marks---------\n";

ifstream oht2;
    oht2.open("OHT2.txt");

        for(int i=0; i<18; i++)
        {    
           getline(oht2, m[i]);
        }

    oht2.close();

        for(int i=0; i<18; i++)
        {
            cout<<m[i]<<endl;
        }

         cout<<"\n\n-------List of Semester-Project Marks---------\n";

ifstream proj;
    proj.open("SEM_PROJ.txt");

        for(int i=0; i<18; i++)
        {    
           getline(proj, m[i]);
        }

    proj.close();

        for(int i=0; i<18; i++)
        {
            cout<<m[i]<<endl;
        }

         cout<<"\n\n-------List of FINAL Marks---------\n";

ifstream final;
    final.open("FINAL.txt");

        for(int i=0; i<18; i++)
        {    
           getline(final, m[i]);
        }

    final.close();

        for(int i=0; i<18; i++)
        {
            cout<<m[i]<<endl;
        }
        cout<<endl;
         back();
}

void back()
{
    int choice;
    cout<<"1: Back to the menu\n";
    cout<<"2: Logout\n";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            system("cls");
            menu();
            break;
        }
        case 2:
        {
            main();
            break;
        }
        default:
        {
            cout<<"Invalid Choice!";
        }
    }
}