#include <iostream>
using namespace std;

class Student
{
    private:
    int age, standard;
    string first_name, last_name;

    public: // setter
    void setAge(int ageV){ age = ageV; }
    void setFirstName(string firstName){ first_name = firstName; }
    void setLastName(string lastName){ last_name = lastName; }
    void setStandard(unsigned standardV){ standard = standardV; }

    // getter
    int getAge() { return age; }
    string getFirstName() { return first_name; }
    string getLastName() { return last_name; }
    int getStandard() { return standard; }

    //toString()
    string to_string(){
        string result = std::to_string(age) +','+ getFirstName() + ',' + 
        getLastName()+','+ std::to_string(standard);
        return result;
    }
};

int main() {
    Student aiyaInstance;
    aiyaInstance.setAge(15);
    aiyaInstance.setFirstName("Aiya");
    aiyaInstance.setLastName("Aiyara");
    aiyaInstance.setStandard(10);

    cout << aiyaInstance.getAge() << endl << aiyaInstance.getFirstName() << ", ";
    cout << aiyaInstance.getLastName() << endl << aiyaInstance.getStandard() << endl;
    cout << endl;
    cout << aiyaInstance.to_string();

    return 0;
}