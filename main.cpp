#include <iostream>

using namespace std;

int main()
{
    const int size=35; 
    float sec10_cgpa[size]={0},sec10_midterm[size]={0},sec10_quiz1[size]={0},sec10_quiz2[size]={0},sec10_quiz3[size]={0};
    float sec11_cgpa[size]={0},sec11_midterm[size]={0},sec11_quiz1[size]={0},sec11_quiz2[size]={0},sec11_quiz3[size]={0};
    float sec12_cgpa[size]={0},sec12_midterm[size]={0},sec12_quiz1[size]={0},sec12_quiz2[size]={0},sec12_quiz3[size]={0};
    int opinion,sec10_coursecode=10213,sec11_coursecode=10811,sec12_coursecode=23011,roll_no,ma=0,mi=0;
    float max,min;
 do{
    cout<<"Press 1 to insert a new record "<<endl;
    cout<<"Press 2 to view a student record"<<endl;
    cout<<"Press 3 to alter a record "<<endl;
    cout<<"Press 4 to show the record of respective section"<<endl;
	cout <<"Press to show the record of respective course" << endl;
    cout<<"Press 5 to show the students with highest CGPA"<<endl;
    cout<<"Press 6 to show students with lowest CGPA"<<endl;
    cout<<"Press 7 to show the students with mid-term marks less than 50"<<endl;
    cout<<"Press 8 to show the students with zero marks in quiz"<<endl;
    cout<<"Press 9 to show the students with CGPA less than 2.0"<<endl;
    cout<<"Press 10 to alter the mid-term marks of student only"<<endl;
    cout<<"Press 11 to alter the quiz 1 marks of student only "<<endl;
    cout<<"Press 12 to alter the quiz 2 marks of student only "<<endl;
    cout<<"Press 13 to alter the quiz 3 marks of student only "<<endl;
    cout<<"Press 14 to show all the records "<<endl;
    cout<<"Press 15 for Exit "<<endl;
    do{
        cin>>opinion;
        if(opinion>15||opinion<0)
        {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
        }
    }
    while(opinion>15||opinion<0);
    
    if(opinion==1)
    {
        cout<<"Press 1 to insert a new record of section A10 course code 10213"<<endl;
        cout<<"Press 2 to insert a new record of section B11 course code 10811"<<endl;
        cout<<"Press 3 to insert a new record of section C12 course code 23011"<<endl;
      do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
        }
        }while(opinion>3||opinion<1);
        if(opinion==1)
        {
            cout<<"Press 1 to insert Mid term marks"<<endl;
            cout<<"Press 2 to insert Quiz 1 marks"<<endl;
            cout<<"Press 3 to insert Quiz 2 marks"<<endl;
            cout<<"Press 4 to insert Quiz 3 marks"<<endl;
            cout<<"Press 5 to insert CGPA"<<endl;
      do{
        cin>>opinion;
        if(opinion>5||opinion<1)
        {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
        }
        }while(opinion>5||opinion<1);
            if(opinion==1)
            {
               for(int i=0;i<size;i++)
               {
                   cout<<"Enter the Midterm marks of student Roll no "<<i+1<<endl;
                   cin>>sec10_midterm[i];
               }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    cout<<"Enter the Quiz 1 marks of student roll no "<<j+1<<endl;
                    cin>>sec10_quiz1[j];
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    cout<<"Enter the Quiz 2 marks of student roll no "<<k+1<<endl;
                    cin>>sec10_quiz2[k];
                }
            }
            else if(opinion==4)
            {
                for(int l=0;l<size;l++)
                {
                    cout<<"Enter the Quiz 3 marks of student roll no "<<l+1<<endl;
                    cin>>sec10_quiz3[l];
                }
            }
            else if(opinion==5)
            {
                for(int m=0;m<size;m++)
                {
                    cout<<"Enter the CGPA of student roll no "<<m+1<<endl;
                    cin>>sec10_cgpa[m];
                }
            }
        }
        else if(opinion==2)
        {
            cout<<"Press 1 to insert Mid term marks"<<endl;
            cout<<"Press 2 to insert Quiz 1 marks"<<endl;
            cout<<"Press 3 to insert Quiz 2 marks"<<endl;
            cout<<"Press 4 to insert Quiz 3 marks"<<endl;
            cout<<"Press 5 to insert CGPA "<<endl;
         do{
            cin>>opinion;
            if(opinion>5||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>5||opinion<1);
            if(opinion==1)
            {
               for(int i=0;i<size;i++)
               {
                   cout<<"Enter the Midterm marks of student Roll no "<<i+1<<endl;
                   cin>>sec11_midterm[i];
               }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    cout<<"Enter the Quiz 1 marks of student roll no "<<j+1<<endl;
                    cin>>sec11_quiz1[j];
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    cout<<"Enter the Quiz 2 marks of student roll no "<<k+1<<endl;
                    cin>>sec11_quiz2[k];
                }
            }
            else if(opinion==4)
            {
                for(int l=0;l<size;l++)
                {
                    cout<<"Enter the Quiz 3 marks of student roll no "<<l+1<<endl;
                    cin>>sec11_quiz3[l];
                }
            }
            else if(opinion==5)
            {
                for(int m=0;m<size;m++)
                {
                    cout<<"Enter the CGPA of student roll no "<<m+1<<endl;
                    cin>>sec11_cgpa[m];
                }
            }
        }
        else if(opinion==3)
        {
            cout<<"Press 1 to insert Mid term marks"<<endl;
            cout<<"Press 2 to insert Quiz 1 marks"<<endl;
            cout<<"Press 3 to insert Quiz 2 marks"<<endl;
            cout<<"Press 4 to insert Quiz 3 marks"<<endl;
            cout<<"Press 5 to insert CGPA "<<endl;
         do{
            cin>>opinion;
            if(opinion>5||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>5||opinion<1);
            if(opinion==1)
            {
               for(int i=0;i<size;i++)
               {
                   cout<<"Enter the Midterm marks of student Roll no "<<i+1<<endl;
                   cin>>sec12_midterm[i];
               }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    cout<<"Enter the Quiz 1 marks of student roll no "<<j+1<<endl;
                    cin>>sec12_quiz1[j];
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    cout<<"Enter the Quiz 2 marks of student roll no "<<k+1<<endl;
                    cin>>sec12_quiz2[k];
                }
            }
            else if(opinion==4)
            {
                for(int l=0;l<size;l++)
                {
                    cout<<"Enter the Quiz 3 marks of student roll no "<<l+1<<endl;
                    cin>>sec12_quiz3[l];
                }
            }
            else if(opinion==5)
            {
                for(int m=0;m<size;m++)
                {
                    cout<<"Enter the CGPA of student roll no "<<m+1<<endl;
                    cin>>sec10_cgpa[m];
                }
            }
        }
    }
    else if(opinion==2)
    {
        cout<<"Choose the section:"<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        
        if(opinion==1)
        {
            cout<<"Enter the roll number of student "<<endl;
            cin>>roll_no;
            cout<<"Student Record is as Follows: "<<endl;
            cout<<"Roll number: "<<roll_no<<endl;
            cout<<"Semester: "<<2<<endl;
            cout<<"CGPA: "<<sec10_cgpa[roll_no-1]<<endl;
            cout<<"Section: "<<10<<endl;
            cout<<"Course code: "<<sec10_coursecode<<endl;
            cout<<"Quiz 1 marks: "<<sec10_quiz1[roll_no-1]<<endl;
            cout<<"Quiz 2 marks: "<<sec10_quiz2[roll_no-1]<<endl;
            cout<<"Quiz 3 marks: "<<sec10_quiz3[roll_no-1]<<endl;
            cout<<"Midterm marks: "<<sec10_midterm[roll_no-1]<<endl;
        }
        else if(opinion==2)
        {
            cout<<"Enter the roll number of student "<<endl;
            cin>>roll_no;
            cout<<"Student Record is as Follows: "<<endl;
            cout<<"Roll number: "<<roll_no<<endl;
            cout<<"Semester: "<<3<<endl;
            cout<<"CGPA: "<<sec11_cgpa[roll_no-1]<<endl;
            cout<<"Section: "<<11<<endl;
            cout<<"Course code: "<<sec11_coursecode<<endl;
            cout<<"Quiz 1 marks: "<<sec11_quiz1[roll_no-1]<<endl;
            cout<<"Quiz 2 marks: "<<sec11_quiz2[roll_no-1]<<endl;
            cout<<"Quiz 3 marks: "<<sec11_quiz3[roll_no-1]<<endl;
            cout<<"Midterm marks: "<<sec11_midterm[roll_no-1]<<endl;
        }
        else if(opinion==3)
        {
            cout<<"Enter the roll number of student "<<endl;
            cin>>roll_no;
            cout<<"Student Record is as Follows: "<<endl;
            cout<<"Roll number: "<<roll_no<<endl;
            cout<<"Semester: "<<4<<endl;
            cout<<"CGPA: "<<sec12_cgpa[roll_no-1]<<endl;
            cout<<"Section: "<<12<<endl;
            cout<<"Course code: "<<sec12_coursecode<<endl;
            cout<<"Quiz 1 marks: "<<sec12_quiz1[roll_no-1]<<endl;
            cout<<"Quiz 2 marks: "<<sec12_quiz2[roll_no-1]<<endl;
            cout<<"Quiz 3 marks: "<<sec12_quiz3[roll_no-1]<<endl;
            cout<<"Midterm marks: "<<sec12_midterm[roll_no-1]<<endl;
        }
    }
    else if(opinion==3)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        
        if(opinion==1)
        {
            cout<<"What do you like to alter: "<<endl;
            cout<<"Press 1 to alter the quiz 1"<<endl;
            cout<<"Press 2 to alter the quiz 2"<<endl;
            cout<<"Press 3 to alter the quiz 3"<<endl;
            cout<<"Press 4 to alter the quiz 4"<<endl;
         do{
            cin>>opinion;
            if(opinion>4||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>4||opinion<1);
            if(opinion==1)
            {
                for(int i=0;i<size;i++)
                {
                    cout<<"Enter the marks of student roll no "<<i+1<<endl;
                    cin>>sec10_quiz1[i];
                }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    cout<<"Enter the marks of student roll no "<<j+1<<endl;
                    cin>>sec10_quiz2[j];
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    cout<<"Enter the marks of student roll no "<<k+1<<endl;
                    cin>>sec10_quiz3[k];
                }
            }
            else if (opinion==4)
            {
                for(int l=0;l<size;l++)
                {
                    cout<<"Enter the marks of student roll no "<<l+1<<endl;
                    cin>>sec10_midterm[l];
                }
            }
        }
        else if(opinion==2)
        {
            cout<<"What do you like to alter: "<<endl;
            cout<<"Press 1 to alter the quiz 1"<<endl;
            cout<<"Press 2 to alter the quiz 2"<<endl;
            cout<<"Press 3 to alter the quiz 3"<<endl;
            cout<<"Press 4 to alter the quiz 4"<<endl;
         do{
            cin>>opinion;
            if(opinion>4||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>4||opinion<1);
            if(opinion==1)
            {
                for(int i=0;i<size;i++)
                {
                    cout<<"Enter the marks of student roll no "<<i+1<<endl;
                    cin>>sec11_quiz1[i];
                }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    cout<<"Enter the marks of student roll no "<<j+1<<endl;
                    cin>>sec11_quiz2[j];
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    cout<<"Enter the marks of student roll no "<<k+1<<endl;
                    cin>>sec11_quiz3[k];
                }
            }
            else if (opinion==4)
            {
                for(int l=0;l<size;l++)
                {
                    cout<<"Enter the marks of student roll no "<<l+1<<endl;
                    cin>>sec11_midterm[l];
                }
            }
        }
        else if(opinion==3)
        {
            cout<<"What do you like to alter: "<<endl;
            cout<<"Press 1 to alter the quiz 1"<<endl;
            cout<<"Press 2 to alter the quiz 2"<<endl;
            cout<<"Press 3 to alter the quiz 3"<<endl;
            cout<<"Press 4 to alter the quiz 4"<<endl;
         do{
            cin>>opinion;
            if(opinion>4||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>4||opinion<1);
            if(opinion==1)
            {
                for(int i=0;i<size;i++)
                {
                    cout<<"Enter the marks of student roll no "<<i+1<<endl;
                    cin>>sec12_quiz1[i];
                }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    cout<<"Enter the marks of student roll no "<<j+1<<endl;
                    cin>>sec12_quiz2[j];
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    cout<<"Enter the marks of student roll no "<<k+1<<endl;
                    cin>>sec12_quiz3[k];
                }
            }
            else if (opinion==4)
            {
                for(int l=0;l<size;l++)
                {
                    cout<<"Enter the marks of student roll no "<<l+1<<endl;
                    cin>>sec12_midterm[l];
                }
            }
        }
    }
    else if(opinion==4)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        if(opinion==1)
        {
            cout<<"Press 1 to show the Quiz 1"<<endl;
            cout<<"Press 2 to show the Quiz 2"<<endl;
            cout<<"Press 3 to show the Quiz 3"<<endl;
            cout<<"Press 4 to show the Midterm"<<endl;
         do{
            cin>>opinion;
            if(opinion>4||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>4||opinion<1);
            if(opinion==1)
            {
                for(int i=0;i<size;i++)
                {
                    cout<<"Marks of student roll no "<<i+1<<" in Quiz 1 is "<<sec10_quiz1[i]<<endl;
                }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    cout<<"Marks of student roll no "<<j+1<<" in Quiz 2 is "<<sec10_quiz2[j]<<endl;
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    cout<<"Marks of student roll no "<<k+1<<" in Quiz 3 is "<<sec10_quiz3[k]<<endl;
                }
            }
            else if(opinion==4)
            {
                for(int l=0;l<size;l++)
                {
                    cout<<"Marks of student roll no "<<l+1<<" in Midterm is "<<sec10_midterm[l]<<endl;
                }
            }
        }
        else if(opinion==2)
        {
            cout<<"Press 1 to show the Quiz 1"<<endl;
            cout<<"Press 2 to show the Quiz 2"<<endl;
            cout<<"Press 3 to show the Quiz 3"<<endl;
            cout<<"Press 4 to show the Midterm"<<endl;
         do{
            cin>>opinion;
            if(opinion>4||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>4||opinion<1);
            if(opinion==1)
            {
                for(int i=0;i<size;i++)
                {
                    cout<<"Marks of student roll no "<<i+1<<" in Quiz 1 is "<<sec11_quiz1[i]<<endl;
                }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    cout<<"Marks of student roll no "<<j+1<<" in Quiz 2 is "<<sec11_quiz2[j]<<endl;
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    cout<<"Marks of student roll no "<<k+1<<" in Quiz 3 is "<<sec11_quiz3[k]<<endl;
                }
            }
            else if(opinion==4)
            {
                for(int l=0;l<size;l++)
                {
                    cout<<"Marks of student roll no "<<l+1<<" in Midterm is "<<sec11_midterm[l]<<endl;
                }
            }
        }
        else if(opinion==3)
        {
            cout<<"Press 1 to show the Quiz 1"<<endl;
            cout<<"Press 2 to show the Quiz 2"<<endl;
            cout<<"Press 3 to show the Quiz 3"<<endl;
            cout<<"Press 4 to show the Midterm"<<endl;
         do{
            cin>>opinion;
            if(opinion>4||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>4||opinion<1);
            if(opinion==1)
            {
                for(int i=0;i<size;i++)
                {
                    cout<<"Marks of student roll no "<<i+1<<" in Quiz 1 is "<<sec12_quiz1[i]<<endl;
                }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    cout<<"Marks of student roll no "<<j+1<<" in Quiz 2 is "<<sec12_quiz2[j]<<endl;
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    cout<<"Marks of student roll no "<<k+1<<" in Quiz 3 is "<<sec12_quiz3[k]<<endl;
                }
            }
            else if(opinion==4)
            {
                for(int l=0;l<size;l++)
                {
                    cout<<"Marks of student roll no "<<l+1<<" in Midterm is "<<sec12_midterm[l]<<endl;
                }
            }
        }
    }
    else if(opinion==5)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        if(opinion==1)
        {
            max=sec10_cgpa[0];
            for(int i=0;i<size;i++)
            {
                if(sec10_cgpa[i]>max)
                {
                    max=sec10_cgpa[i];
                    ma=i;
                }
            }
            cout<<"The details of student with highest CGPA is as follow "<<endl;
            cout<<"Roll number: "<<ma+1<<endl;
            cout<<"Semster: "<<2<<endl;
            cout<<"Course code: "<<sec10_coursecode<<endl;
            cout<<"Quiz 1 marks: "<<sec10_quiz1[ma]<<endl;
            cout<<"Quiz 2 marks: "<<sec10_quiz2[ma]<<endl;
            cout<<"Quiz 3 marks: "<<sec10_quiz3[ma]<<endl;
            cout<<"Midterm marks: "<<sec10_midterm[ma]<<endl;
        }
        else if(opinion==2)
        {
            max=sec11_cgpa[0];
            for(int i=0;i<size;i++)
            {
                if(sec11_cgpa[i]>max)
                {
                    max=sec11_cgpa[i];
                    ma=i;
                }
            }
            cout<<"The details of student with highest CGPA is as follow "<<endl;
            cout<<"Roll number: "<<ma+1<<endl;
            cout<<"Semster: "<<3<<endl;
            cout<<"Course code: "<<sec11_coursecode<<endl;
            cout<<"Quiz 1 marks: "<<sec11_quiz1[ma]<<endl;
            cout<<"Quiz 2 marks: "<<sec11_quiz2[ma]<<endl;
            cout<<"Quiz 3 marks: "<<sec11_quiz3[ma]<<endl;
            cout<<"Midterm marks: "<<sec11_midterm[ma]<<endl;
        }
        else if(opinion==3)
        {
            max=sec12_cgpa[0];
            for(int i=0;i<size;i++)
            {
                if(sec12_cgpa[i]>max)
                {
                    max=sec12_cgpa[i];
                    ma=i;
                }
            }
            cout<<"The details of student with highest CGPA is as follow "<<endl;
            cout<<"Roll number: "<<ma+1<<endl;
            cout<<"Semster: "<<4<<endl;
            cout<<"Course code: "<<sec12_coursecode<<endl;
            cout<<"Quiz 1 marks: "<<sec12_quiz1[ma]<<endl;
            cout<<"Quiz 2 marks: "<<sec12_quiz2[ma]<<endl;
            cout<<"Quiz 3 marks: "<<sec12_quiz3[ma]<<endl;
            cout<<"Midterm marks: "<<sec12_midterm[ma]<<endl;
        }
    }
    else if(opinion==6)
    {
        cout<<"Select the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>5||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>5||opinion<1);
        if(opinion==1)
        {
            min=sec10_cgpa[0];
            for(int i=0;i<size;i++)
            {
                if(sec10_cgpa[i]<min)
                {
                    min=sec10_cgpa[i];
                    mi=i;
                }
            }
            cout<<"The details of student with lowest CGPA is as follow "<<endl;
            cout<<"Roll number: "<<mi+1<<endl;
            cout<<"Semster: "<<2<<endl;
            cout<<"Course code: "<<sec10_coursecode<<endl;
            cout<<"Quiz 1 marks: "<<sec10_quiz1[mi]<<endl;
            cout<<"Quiz 2 marks: "<<sec10_quiz2[mi]<<endl;
            cout<<"Quiz 3 marks: "<<sec10_quiz3[mi]<<endl;
            cout<<"Midterm marks: "<<sec10_midterm[mi]<<endl;
        }
        else if(opinion==2)
        {
            min=sec11_cgpa[0];
            for(int i=0;i<size;i++)
            {
                if(sec11_cgpa[i]<min)
                {
                    min=sec11_cgpa[i];
                    mi=i;
                }
            }
            cout<<"The details of student with lowest CGPA is as follow "<<endl;
            cout<<"Roll number: "<<mi+1<<endl;
            cout<<"Semster: "<<3<<endl;
            cout<<"Course code: "<<sec11_coursecode<<endl;
            cout<<"Quiz 1 marks: "<<sec11_quiz1[mi]<<endl;
            cout<<"Quiz 2 marks: "<<sec11_quiz2[mi]<<endl;
            cout<<"Quiz 3 marks: "<<sec11_quiz3[mi]<<endl;
            cout<<"Midterm marks: "<<sec11_midterm[mi]<<endl;
        }
        else if(opinion==3)
        {
            min=sec12_cgpa[0];
            for(int i=0;i<size;i++)
            {
                if(sec12_cgpa[i]<min)
                {
                    min=sec12_cgpa[i];
                    mi=i;
                }
            }
            cout<<"The details of student with lowest CGPA is as follow "<<endl;
            cout<<"Roll number: "<<mi+1<<endl;
            cout<<"Semster: "<<4<<endl;
            cout<<"Course code: "<<sec12_coursecode<<endl;
            cout<<"Quiz 1 marks: "<<sec12_quiz1[mi]<<endl;
            cout<<"Quiz 2 marks: "<<sec12_quiz2[mi]<<endl;
            cout<<"Quiz 3 marks: "<<sec12_quiz3[mi]<<endl;
            cout<<"Midterm marks: "<<sec12_midterm[mi]<<endl;
        }
    }
    else if(opinion==7)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        if(opinion==1)
        {
            for(int i=0;i<size;i++)
            {
                if(sec10_midterm[i]<50)
                {
                    cout<<"Student roll no "<<i+1<<" has "<<sec10_midterm[i]<<" which is less tha 50"<<endl;
                }
            }
        }
        else if(opinion==2)
        {
            for(int j=0;j<size;j++)
            {
                if(sec11_midterm[j]<50)
                {
                    cout<<"Student roll no "<<j+1<<" has "<<sec11_midterm[j]<<" which is less than 50"<<endl;
                }
            }
        }
        else if(opinion==3)
        {
            for(int k=0;k<size;k++)
            {
                if(sec12_midterm[k]<50)
                {
                    cout<<"Student roll no "<<k+1<<" has "<<sec12_midterm[k]<<" which is less than 50"<<endl;
                }
            }
        }
    }
    else if(opinion==8)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        if(opinion==1)
        {
            cout<<"Press 1 to check the student having 0 marks in quiz 1"<<endl;
            cout<<"Press 2 to check the student having 0 marks in quiz 2"<<endl;
            cout<<"Press 3 to check the student having 0 marks in quiz 3"<<endl;
         do{
            cin>>opinion;
            if(opinion>3||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>3||opinion<1);
            if(opinion==1)
            {
                for(int i=0;i<size;i++)
                {
                    if(sec10_quiz1[i]==0)
                    {
                        cout<<"Student roll no "<<i+1<<" having zero marks in quiz 1"<<endl;
                    }
                }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    if(sec10_quiz2[j]==0)
                    {
                        cout<<"Student roll no "<<j+1<<" having zero marks in quiz 2"<<endl;
                    }
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    if(sec10_quiz3[k]==0)
                    {
                        cout<<"Student roll no "<<k+1<<" having zero marks in quiz 3"<<endl;
                    }
                }
            }
        }
        else if(opinion==2)
        {
            cout<<"Press 1 to check the student having 0 marks in quiz 1"<<endl;
            cout<<"Press 2 to check the student having 0 marks in quiz 2"<<endl;
            cout<<"Press 3 to check the student having 0 marks in quiz 3"<<endl;
         do{
            cin>>opinion;
            if(opinion>3||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>3||opinion<1);
            if(opinion==1)
            {
                for(int i=0;i<size;i++)
                {
                    if(sec11_quiz1[i]==0)
                    {
                        cout<<"Student roll no "<<i+1<<" having zero marks in quiz 1"<<endl;
                    }
                }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    if(sec11_quiz2[j]==0)
                    {
                        cout<<"Student roll no "<<j+1<<" having zero marks in quiz 2"<<endl;
                    }
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    if(sec11_quiz3[k]==0)
                    {
                        cout<<"Student roll no "<<k+1<<" having zero marks in quiz 3"<<endl;
                    }
                }
            }
        }
        else if(opinion==3)
        {
            cout<<"Press 1 to check the student having 0 marks in quiz 1"<<endl;
            cout<<"Press 2 to check the student having 0 marks in quiz 2"<<endl;
            cout<<"Press 3 to check the student having 0 marks in quiz 3"<<endl;
         do{
            cin>>opinion;
            if(opinion>3||opinion<1)
            {
            cout<<"Wrong input"<<endl;
            cout<<"Enter again"<<endl;
            }
           }while(opinion>3||opinion<1);
            if(opinion==1)
            {
                for(int i=0;i<size;i++)
                {
                    if(sec12_quiz1[i]==0)
                    {
                        cout<<"Student roll no "<<i+1<<" having zero marks in quiz 1"<<endl;
                    }
                }
            }
            else if(opinion==2)
            {
                for(int j=0;j<size;j++)
                {
                    if(sec12_quiz2[j]==0)
                    {
                        cout<<"Student roll no "<<j+1<<" having zero marks in quiz 2"<<endl;
                    }
                }
            }
            else if(opinion==3)
            {
                for(int k=0;k<size;k++)
                {
                    if(sec12_quiz3[k]==0)
                    {
                        cout<<"Student roll no "<<k+1<<" having zero marks in quiz 3"<<endl;
                    }
                }
            }
        }
    }
    else if(opinion==9)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        if(opinion==1)
        {
            for(int i=0;i<size;i++)
            {
                if(sec10_cgpa[i]<2)
                {
                    cout<<"Student roll no "<<i+1<<" has CGPA "<<sec10_cgpa[i]<<" which is less than 2.0"<<endl;
                }
            }
        }
        else if(opinion==2)
        {
            for(int j=0;j<size;j++)
            {
                if(sec11_cgpa[j]<2)
                {
                    cout<<"Student roll no "<<j+1<<" has CGPA "<<sec11_cgpa[j]<<" which is less than 2.0"<<endl;
                }
            }
        }
        else if(opinion==3)
        {
            for(int k=0;k<size;k++)
            {
                if(sec12_cgpa[k]<2)
                {
                    cout<<"Student roll no "<<k+1<<" has CGPA "<<sec12_cgpa[k]<<" which is less than 2.0"<<endl;
                }
            }
        }
    }
    else if(opinion==10)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        if(opinion==1)
        {
        do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new Midterm marks of student roll no "<<roll_no<<endl;
            cin>>sec10_midterm[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
            cin>>opinion;
            }
            while(opinion==1);
        }
        else if(opinion==2)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new Midterm marks of student roll no "<<roll_no<<endl;
            cin>>sec11_midterm[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
           do{
              cin>>opinion;
              if(opinion>2||opinion<1)
              {
               cout<<"Wrong input"<<endl;
               cout<<"Enter again"<<endl;
              }
             }while(opinion>2||opinion<1);
            }
            while(opinion==1);
        }
        else if(opinion==3)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new Midterm marks of student roll no "<<roll_no<<endl;
            cin>>sec12_midterm[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
          do{
             cin>>opinion;
             if(opinion>2||opinion<1)
              {
              cout<<"Wrong input"<<endl;
              cout<<"Enter again"<<endl;
              }
            }while(opinion>2||opinion<1);
           }
           while(opinion==1);
        }
    }
    else if(opinion==11)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C11"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        if(opinion==1)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new 1st Quiz marks of student roll no "<<roll_no<<endl;
            cin>>sec10_quiz1[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
          do{
              cin>>opinion;
              if(opinion>2||opinion<1)
              {
              cout<<"Wrong input"<<endl;
              cout<<"Enter again"<<endl;
              }
            }while(opinion>2||opinion<1);
           }
           while(opinion==1);
        }
        else if(opinion==2)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new 1st Quiz marks of student roll no "<<roll_no<<endl;
            cin>>sec11_quiz1[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
          do{
             cin>>opinion;
             if(opinion>2||opinion<1)
             {
             cout<<"Wrong input"<<endl;
             cout<<"Enter again"<<endl;
             }
            }while(opinion>2||opinion<1);
           }
           while(opinion==1);
        }
        else if(opinion==3)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new 1st Quiz marks of student roll no "<<roll_no<<endl;
            cin>>sec12_quiz1[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
          do{
             cin>>opinion;
             if(opinion>2||opinion<1)
             {
             cout<<"Wrong input"<<endl;
             cout<<"Enter again"<<endl;
             }
            }while(opinion>2||opinion<1);
           }
           while(opinion==1);
        }
    }
    else if(opinion==12)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        if(opinion==1)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new 2nd Quiz marks of student roll no "<<roll_no<<endl;
            cin>>sec10_quiz2[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
          do{
             cin>>opinion;
             if(opinion>2||opinion<1)
             {
             cout<<"Wrong input"<<endl;
             cout<<"Enter again"<<endl;
             }
            }while(opinion>2||opinion<1);
           }
           while(opinion==1);
        }
        else if(opinion==2)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new 2nd Quiz marks of student roll no "<<roll_no<<endl;
            cin>>sec11_quiz2[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
          do{
             cin>>opinion;
             if(opinion>2||opinion<1)
             {
              cout<<"Wrong input"<<endl;
              cout<<"Enter again"<<endl;
             }
            }while(opinion>2||opinion<1);
           }
           while(opinion==1);
        }
        else if(opinion==3)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new 2nd Quiz marks of student roll no "<<roll_no<<endl;
            cin>>sec12_quiz2[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
          do{
             cin>>opinion;
             if(opinion>2||opinion<1)
             {
             cout<<"Wrong input"<<endl;
             cout<<"Enter again"<<endl;
             }
            }while(opinion>2||opinion<1);
           }
           while(opinion==1);
        }
    }
    else if(opinion==13)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        if(opinion==1)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new 3rd Quiz marks of student roll no "<<roll_no<<endl;
            cin>>sec10_quiz3[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
          do{
             cin>>opinion;
             if(opinion>2||opinion<1)
             {
             cout<<"Wrong input"<<endl;
             cout<<"Enter again"<<endl;
             }
            }while(opinion>2||opinion<1);
           }
           while(opinion==1);
        }
        else if(opinion==2)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new 3rd Quiz marks of student roll no "<<roll_no<<endl;
            cin>>sec11_quiz3[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
          do{
             cin>>opinion;
             if(opinion>2||opinion<1)
             {
             cout<<"Wrong input"<<endl;
             cout<<"Enter again"<<endl;
             }
            }while(opinion>2||opinion<1);
           }
           while(opinion==1);
        }
        else if(opinion==3)
        {
         do{
            cout<<"Enter the roll number of student"<<endl;
            cin>>roll_no;
            cout<<"Enter the new 3rd Quiz marks of student roll no "<<roll_no<<endl;
            cin>>sec12_quiz3[roll_no-1];
            cout<<"Marks have been updated successfully"<<endl;
            cout<<"Would you like to update further?"<<endl;
            cout<<"Press 1 for yes"<<endl;
            cout<<"Press 2 for no"<<endl;
          do{
             cin>>opinion;
             if(opinion>2||opinion<1)
             {
             cout<<"Wrong input"<<endl;
             cout<<"Enter again"<<endl;
             }
            }while(opinion>2||opinion<1);
           }
           while(opinion==1);
        }
    }
    else if(opinion==14)
    {
        cout<<"Choose the section: "<<endl;
        cout<<"Press 1 for section A10"<<endl;
        cout<<"Press 2 for section B11"<<endl;
        cout<<"Press 3 for section C12"<<endl;
     do{
        cin>>opinion;
        if(opinion>3||opinion<1)
        {
        cout<<"Wrong input"<<endl;
        cout<<"Enter again"<<endl;
        }
       }while(opinion>3||opinion<1);
        if(opinion==1)
        {
            cout<<"ALL THE RECORDS OF SECTION A10 IS AS FOLLOW"<<endl;
            cout<<endl;
            cout<<"Record of Quiz 1 is as follow:"<<endl;
            for(int i=0;i<size;i++)
            {
                cout<<"Marks of student roll no "<<i+1<<" in Quiz 1 is "<<sec10_quiz1[i]<<endl;
            }
            cout<<endl;
            cout<<"Record of Quiz 2 is as follow: "<<endl;
            for(int j=0;j<size;j++)
            {
                cout<<"Marks of student roll no "<<j+1<<" in Quiz 2 is "<<sec10_quiz2[j]<<endl;
            }
            cout<<endl;
            cout<<"Record of Quiz 3 is as follow: "<<endl;
            for(int k=0;k<size;k++)
            {
                cout<<"Marks of student roll no "<<k+1<<" in Quiz 3 is "<<sec10_quiz3[k]<<endl;
            }
            cout<<endl;
            cout<<"Record of Midterm is as follow: "<<endl;
            for(int l=0;l<size;l++)
            {
                cout<<"Student of roll no "<<l+1<<" in Midterm is "<<sec10_midterm[l]<<endl;
            }
            cout<<endl;
        }
        else if(opinion==2)
        {
            cout<<"ALL THE RECORDS OF SECTION B11 IS AS FOLLOW"<<endl;
            cout<<endl;
            cout<<"Record of Quiz 1 is as follow:"<<endl;
            for(int i=0;i<size;i++)
            {
                cout<<"Marks of student roll no "<<i+1<<" in Quiz 1 is "<<sec11_quiz1[i]<<endl;
            }
            cout<<endl;
            cout<<"Record of Quiz 2 is as follow: "<<endl;
            for(int j=0;j<size;j++)
            {
                cout<<"Marks of student roll no "<<j+1<<" in Quiz 2 is "<<sec11_quiz2[j]<<endl;
            }
            cout<<endl;
            cout<<"Record of Quiz 3 is as follow: "<<endl;
            for(int k=0;k<size;k++)
            {
                cout<<"Marks of student roll no "<<k+1<<" in Quiz 3 is "<<sec11_quiz3[k]<<endl;
            }
            cout<<endl;
            cout<<"Record of Midterm is as follow: "<<endl;
            for(int l=0;l<size;l++)
            {
                cout<<"Student of roll no "<<l+1<<" in Midterm is "<<sec11_midterm[l]<<endl;
            }
            cout<<endl;
        }
        else if(opinion==3)
        {
            cout<<"ALL THE RECORDS OF SECTION C12 IS AS FOLLOW"<<endl;
            cout<<endl;
            cout<<"Record of Quiz 1 is as follow:"<<endl;
            for(int i=0;i<size;i++)
            {
                cout<<"Marks of student roll no "<<i+1<<" in Quiz 1 is "<<sec12_quiz1[i]<<endl;
            }
            cout<<endl;
            cout<<"Record of Quiz 2 is as follow: "<<endl;
            for(int j=0;j<size;j++)
            {
                cout<<"Marks of student roll no "<<j+1<<" in Quiz 2 is "<<sec12_quiz2[j]<<endl;
            }
            cout<<endl;
            cout<<"Record of Quiz 3 is as follow: "<<endl;
            for(int k=0;k<size;k++)
            {
                cout<<"Marks of student roll no "<<k+1<<" in Quiz 3 is "<<sec12_quiz3[k]<<endl;
            }
            cout<<endl;
            cout<<"Record of Midterm is as follow: "<<endl;
            for(int l=0;l<size;l++)
            {
                cout<<"Student of roll no "<<l+1<<" in Midterm is "<<sec12_midterm[l]<<endl;
            }
            cout<<endl;
        }
    }
        if(opinion==15)
    {
        cout<<"--------------------GOOD BYE--------------------"<<endl;
        break;
    }
    cout<<"Would you like to repeat again: "<<endl;
    cout<<"Press 1 for yes"<<endl;
    cout<<"Press 2 for no"<<endl;
  do{
    cin>>opinion;
    if(opinion==2)
    {
        cout<<"**********GOOD BYE**********";
    }
    if(opinion>2||opinion<1)
      {
       cout<<"Wrong input"<<endl;
       cout<<"Enter again"<<endl;
      }
    }while(opinion>2||opinion<1);
  }while(opinion==1);

    return 0;
}
