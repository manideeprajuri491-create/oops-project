#include "../menus/Main_Menu.h"
#include "../menus/Student_Menu.h"
#include "../menus/Company_Menu.h"
#include "../menus/College_Menu.h"
#include "../utils/File.h"
using namespace std;

int main(){
    
    vector<Student> students;
    vector<Company> companies;
    vector<College> colleges;
    read_file(students,companies,colleges);

    Main_Menu(students,colleges,companies);
    
    return 0;
}