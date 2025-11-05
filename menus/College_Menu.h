#ifndef COLLEGE_MENU_H
#define COLLEGE_MENU_H

#include "../classes/College.h"
#include "../classes/Placement.h"
#include "../utils/File.h"
#include "../utils/Display.h"
void College_Menu(vector<College> &Colleges)
{
    int choice1;
    int college_index = 0;
    if (Colleges.size() > 1)
    {
        display_college_list(Colleges);
        cout<<"Enter the serial number of your college: ";
        cin>>college_index;
        college_index--; 
        cout<<endl;
    }
    cout<<Colleges[college_index];
    cout<<endl;
    cout<<"Choose any one category to see"<<endl;
    cout<<"1. Display previous placement history\n2. Add placement statistics\n3. Display visited companies\n4. Add new companies visited recently\n5. Exit\n-> ";
    cin>>choice1;
    switch(choice1)
    {
        case 1:
            Colleges[college_index].placement_history();
            break;
        case 2:
            Colleges[college_index].add_placement_stats();
            break;
        case 3:
            Colleges[college_index].show_companies();
            break;
        case 4:
            Colleges[college_index].append_companies();
            break;
        case 5:
            display_thank_you();
            exit(0);
        default:
            cout<<"Invalid Choice"<<endl;
            break;
    }
    cout<<"\t\t\t-------------------------------------------------------------------------------------------------------"<<endl;
}
#endif