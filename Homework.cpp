#include <iostream>
#include <string>
using namespace std;
void ListStudent(int score[],string [],int number_student);
char Calgrade(int score[],int number_student);
int main() {
    int number_student;
    string name[100] ;
    int score[100] ;
    cout << "Input Number of student : " ;
    cin >> number_student;
    for (int i = 0 ; i < number_student ; i++){
        cout << "Input Name "<< i+1 << " : ";
        cin >> name[i];
        cout << "Input Score " << i+1 << " : ";
        cin >> score[i];
    }
    ListStudent(score ,name,number_student );

    return 0;
}
void ListStudent(int score[],string name[],int number_student){
    for(int i = 0; i< number_student; i++){
        cout << "Student Name : " << name[i] << " Score " << i+1 << " = " << score [i] ;
        cout << "  Your grade is " << Calgrade(score,i) << endl;
    }
}
char Calgrade(int score[],int i){
    char grade;
    if (score[i] <= 100 && score[i] >= 80 )
        grade = 'A';
    else if (score[i] <= 79 && score[i] >= 70 )
        grade = 'B';
    else if (score[i] <= 69 && score[i] >= 60 )
        grade = 'C';
    else if (score[i] <= 59 && score[i] >= 50 )
        grade = 'D';
    else if (score[i] <= 49)
        grade = 'F';
    return(grade);
}