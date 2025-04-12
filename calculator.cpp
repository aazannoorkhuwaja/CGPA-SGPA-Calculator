#include<iostream>
#include<cstdlib>
#include<string>
#include<conio.h>
#include<iomanip>
using namespace std;
void calculatesgpa()
{
    cout<<" --------------------------------------------------------------- "<<endl;
    cout <<"                  Welcome To SGPA Calculator "<<endl;
    cout<<" ---------------------------------------------------------------"<<endl;
    
    string student_name;
    cout<<"--> Enter The Student Name:";
    cin.ignore();
    getline(cin,student_name);
    cout<<endl<<endl;
    int total_semesters;
    cout<<"--> Enter your No: Of Courses:";
    cin>>total_semesters;
    cout<<endl<<endl;
    float sgpa,credits_sem ,sgpaxcredits_persem[total_semesters], sum=0,total_CreditHours=0;
    string name[total_semesters];
    double cr[total_semesters],pints[total_semesters],cgpa;
        if(total_semesters>0){
            for(int i=0; i<total_semesters; i++){
                    string course_name;
                    cout<<"Enter The Course Name:"<<endl;
                    cin.ignore();
                    getline(cin,course_name);
                    name[i]=course_name;

                    cout<<"--> Enter Credit Hours of Your Course : "<<course_name<<endl;
                    cin>>sgpa;
                    cr[i]=sgpa;
        
                    cout<<"--> Grade Points You Achieved In Your Course: "<<course_name<<endl;
                    cin>>credits_sem;
                    pints[i]=credits_sem;
        
                    sgpaxcredits_persem[i]=sgpa*credits_sem;
                    sum+=sgpaxcredits_persem[i];
                    total_CreditHours+=sgpa;
                }
            
             
                    cgpa = sum/total_CreditHours;
                    cout << "Your Total cgpa Is :"<<cgpa<<endl;
        }
        else{
            cout<<"--- !!!Input Not Valid!!! ---"<<endl;
            exit(0);
        }

        cout<<"                         ---------------------------"<<endl;
        cout<<"                         | Your SGPA Data Is Given |"<<endl;
        cout<<"                         ---------------------------"<<endl<<endl;

        cout<<"                          Name:"<<student_name<<endl;
        cout<<"----------------------------------------------------------------------------------------"<<endl;
        cout<<"----------------------------------------------------------------------------------------"<<endl;
        for(int i=0;i<total_semesters;i++)
        {
            cout<<"\tCourse Name: "<<name[i]<<" \tCr.Hr: "<<cr[i]<<" \tGrade Points: "<<pints[i]<<endl;
        }
        cout<<"----------------------------------------------------------------------------------------"<<endl;
        cout<<"----------------------------------------------------------------------------------------"<<endl;
        cout<<"------------------------------------------------SGPA :"<<cgpa<<endl;

        if(cgpa >= 0 && cgpa < 2) {
            cout << "\"Don’t be discouraged. Every expert was once a beginner, failure is just the first step toward success.\"\n\n\n\n\n";
        }
        else if(cgpa >= 2 && cgpa < 3.5) {
            cout << "\"Progress is progress, no matter how small. Stay consistent , success is just around the corner!\"\n\n\n\n\n";
        }
        else if(cgpa >= 3.5 && cgpa <= 4) {
            cout << "\"Excellence is not a skill, its an attitude. Keep striving, you're shaping a bright future!\"\n\n\n\n\n";
        }
        

}

void calculatecgpa(){
    cout<<" --------------------------------------------------------------- "<<endl;
    cout <<"                  Welcome To CGPA Calculator "<<endl;
    cout<<" ---------------------------------------------------------------"<<endl;
    
    string student_name;
    cout<<"--> Enter The Student Name:";
    cin.ignore();
    getline(cin,student_name);
    cout<<endl<<endl;
    int total_semesters;
    cout<<"--> Enter your Number Of Semesters: ";
    cin>>total_semesters;
    cout<<endl<<endl;

    double sgpa,credits_sem ,sgpaxcredits_persem[total_semesters], sum=0,total_CreditHours=0;
    double cr[total_semesters],pints[total_semesters],cgpa;
        if(total_semesters>0){
            for(int i=1; i<=total_semesters; i++){

                    cout<<"--> Enter SGPA of Your Semester : "<<i<<endl;
                    cin>>sgpa;
                    cr[i]=sgpa;
        
                    cout<<"--> Total Credit Hours in Your Semester : "<<i<<endl;
                    cin>>credits_sem;
                    pints[i]=credits_sem;
        
                    sgpaxcredits_persem[i]=sgpa*credits_sem;
                    sum+=sgpaxcredits_persem[i];
                    total_CreditHours+=credits_sem;
                }
            
             
                    cgpa = sum/total_CreditHours;
                    cout << "Your Total cgpa Is :"<<cgpa<<endl;
        }
        else{
            cout<<"--- !!!Input Not Valid!!! ---"<<endl;
            exit(0);
        }
        cout<<endl<<endl;
        cout<<"                         ---------------------------"<<endl;
        cout<<"                         | Your CGPA Data Is Given |"<<endl;
        cout<<"                         ---------------------------"<<endl<<endl;
        cout<<"                          Name:"<<student_name<<endl;
        cout<<"-------------------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------------------"<<endl;
        for(int i=1;i<=total_semesters;i++) 
        {
            cout<<"\tSemester : "<<i<<" \t SGPA : "<<cr[i]<<" \t Total CR.Hr Per Semester: "<<pints[i]<<endl;
        }
        cout<<"-------------------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------------------------------------------------------"<<endl;
        cout<<"                                                      CGPA :"<<cgpa<<endl<<endl<<endl;

        if(cgpa >= 0 && cgpa < 2) {
            cout << "\"Don’t be discouraged. Every expert was once a beginner , failure is just the first step toward success.\"\n\n\n\n\n";
        }
        else if(cgpa >= 2 && cgpa < 3.5) {
            cout << "\"Progress is progress, no matter how small. Stay consistent , success is just around the corner!\"\n\n\n\n\n";
        }
        else if(cgpa >= 3.5 && cgpa <= 4) {
            cout << "\"Excellence is not a skill, its an attitude. Keep striving, you're shaping a bright future!\"\n\n\n\n\n";
        }
        
}
void detailsofcalculator(){
    
        cout << "\n\n --------------------------------------------------------------- "<<endl;
        cout << "            Welcome to the CGPA & SGPA Calculator Details!               "<<endl;
        cout << " --------------------------------------------------------------- \n\n"<<endl;
        cout << endl;
        
            cout << " Developed by: Aazan Noor Khuwaja\n";
            cout << " University  : National University of Computer and Emerging Sciences\n";
            cout << "              (Known as FAST)\n\n";
        
            cout << "---------------------------------------------------------------------\n";
            cout << "Purpose:\n";
            cout << "This calculator is designed to help students quickly and accurately\n";
            cout << "calculate their SGPA (Semester Grade Point Average) and CGPA\n";
            cout << "(Cumulative Grade Point Average).\n\n";
        
            cout << "Whether you're checking your performance for a single semester or\n";
            cout << "over your entire degree, this tool can save your time and effort.\n";
            cout << "---------------------------------------------------------------------\n\n";
        
            cout << "How the Calculator Works:\n\n";
        
            cout << "SGPA Calculation:\n";
            cout << "Formula:\n";
            cout << " SGPA = (Sum of [Grade Points x Credit Hours for each course])\n";
            cout << "         ---------------------------------------------------\n";
            cout << "                   Total Credit Hours in that semester\n\n";
        
            cout << "You need to enter:\n";
            cout << " - Course Names\n";
            cout << " - Credit Hours for each Course\n";
            cout << " - Grade Points earned in each Course\n\n";
        
            cout << "CGPA Calculation:\n";
            cout << "Formula:\n";
            cout << " CGPA = (Sum of [SGPA x Total Credit Hours for each semester])\n";
            cout << "         -----------------------------------------------------\n";
            cout << "                  Total Credit Hours of all semesters\n\n";
        
            cout << "You need to enter:\n";
            cout << " - SGPA for each semester\n";
            cout << " - Total Credit Hours for each semester\n\n";
        
            cout << "---------------------------------------------------------------------\n";
            cout << "Note:\n";
            cout << "Accurate inputs will give you accurate results. Always double-check\n";
            cout << "your Credit Hours and Grade Points before calculating.\n";
            cout << "---------------------------------------------------------------------\n\n";
        
            cout << "Thank you for using the CGPA & SGPA Calculator!\n";
            cout << "Now you can calculate your results with ease and confidence.\n";
            cout << "Keep learning, keep growing.\n\n";
        
            cout << "=====================================================================\n";
            cout << "                          Feedback Section\n";
            cout << "=====================================================================\n";
            cout << "We would love to hear your feedback!\n";
            cout << "Please share your thoughts about this calculator:\nEnter Your Feedback Here: ";
            string feedback;
            cin.ignore();  
            getline(cin, feedback);
        
            cout << "\n-------------------------------------------------------------\n";
            cout << "              Thank you for your feedback!\n";
            cout << "  We appreciate your suggestions, ideas, or feature requests.\n";
            cout << "          Your input helps us improve this system! \n";
            cout << "-------------------------------------------------------------\n\n";
        
        

    }
    


int main()
{
    int work=true;
        do{
            cout << " --------------------------------------------------------------- "<<endl;
            cout << "                | MAIN DASH-BOARD -> Calculator |                "<<endl;
            cout << " --------------------------------------------------------------- "<<endl;
            cout<<"1. How To Calculate CGPA / SGPA \n2. Calculate SGPA \n3. Calulate CGPA \n4. Quit "<<endl;
            int choose;
            cout <<"Choose Any Option Of These (1-4) "<<endl;
            cin>>choose;
            if(choose>0 && choose<=4)
            {
                switch(choose)
                {
                    case 1:
                    {
                        detailsofcalculator();
                       
                    }
                    break;
                    case 2:
                    {
                        calculatesgpa();
                    }
                    break;
                    case 3:
                    {
                        calculatecgpa();
                    }
                    break;
                    case 4:
                    {
                        exit(0);
                    }
                    break;
                    
                }

            }
            else{
                cout<<"Not valid input!"<<endl;
                return 0;
            }

        }
    while(work);

    return 0;
}




