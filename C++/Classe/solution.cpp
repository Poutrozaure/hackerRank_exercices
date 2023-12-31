#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private:
        int age,standard;
        string first_name,last_name;
    public:
        void set_age(int age_val){
            age = age_val;
        }
        void set_standard(int std_val){
            standard = std_val;
        }
        void set_first_name(string fn_val){
            first_name = fn_val;
        }
        void set_last_name(string ln_val){
            last_name = ln_val;
        }
        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        string to_string(){
            stringstream ss;
            ss << age;
            ss << ",";
            ss << first_name;
            ss << ",";
            ss << last_name;
            ss << ",";
            ss << standard;
            return ss.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
