#include<iostream>
using namespace std;

char Grades(int marks){
    if(marks >= 90){
        return 'A';
    }else if(marks >= 80){
        return 'B';
    }else if (marks >= 70){
        return 'C';
    }else if (marks >= 60){
        return 'D';
    }else if (marks < 60){
        return 'E';
    }

}

int main(){
    
    int marks;

    cout<<"Enter marks: "<<endl;
    cin>>marks;

    char grade = Grades(marks);

    cout<<"Your Grade is : "<<grade;
}