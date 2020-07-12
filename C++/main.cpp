#include <iostream>
#include <vector>
#include <string>

using namespace std;

class User
{
    string status = "Gold";
    static int user_count;
    public:
        static int get_user_count()
        {
            return user_count;
        }
        string first_name;
        string last_name;
        string get_status()
        {
            return status;
        }
        void set_status(string status)
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                 this->status = status;
            }
            else
            {
                this->status = "No status";
            }
        }
        User()
        {
            cout << "User Created" << endl;
            user_count++;
        }
        User(string fname, string lname, string status)
        {
            first_name = fname;
            last_name = lname;
            this->status = status;
            user_count++;
        }
        ~User()
        {
            user_count--;
        }
        virtual void output()
        {
            cout << "I am a user" << endl;
        }
        friend ostream& operator <<(ostream& output, User user);
        friend istream& operator >> (istream& input, User& user);

        
};

int User::user_count = 0;

ostream& operator <<(ostream& output, User user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name << "\nStatus: " << user.status;
    return output;
}

istream& operator >> (istream& input, User& user)
{
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}

class Teacher : public User
{
    public:
        vector<string> classes_teaching;
        void output()
        {
            cout << "I am a teacher" << endl;
        }
        Teacher()
        {
            cout << "Teacher created" << endl;
        }
};

int main()
{
    Teacher teacher;
    User& u = teacher;
    u.output();
}
