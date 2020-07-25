#include <iostream>
#include <string>

using namespace std;

class TrishalsClass{
    public:
        TrishalsClass(string z){
            name = z;
        }
        string getName(){
            return name;
        }
        
        void setName(string n){
            name = n;
        }
    private:
        string name;
};

int main()
{
    TrishalsClass trishal("Trishal Muthan");
    cout << trishal.getName() << endl;

    TrishalsClass t("Trey Mcr");
    cout << t.getName() << endl;
    return 0;
}