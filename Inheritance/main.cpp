#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}

};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
  		Student(string firstName, string lastName, int id, vector<int> scores)
            : Person(firstName, lastName, id){
            this->testScores = scores;
        };
        char calculate(){
            int N = this->testScores.size();
            int summed = 0;
            for(int i=0; i<N; i++){
                summed += this->testScores[i];
            }
            int average;
            average = summed / N;
            string grades = "OEAPDT";
            if(average > 89){
                return grades[0];
            }
            if(average > 79){
                return grades[1];
            }
            if(average > 69){
                return grades[2];
            }
            if(average > 54){
                return grades[3];
            }
            if(average > 39){
                return grades[4];
            }
            return grades[5];
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
