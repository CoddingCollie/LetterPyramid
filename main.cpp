#include <iostream>
#include <string>

using namespace std;

int main() {

    string user_input;

    cout << "Insert a string of characters: ";
    cin >> user_input;
    cout << "Your input was: " << user_input << endl;
    
    size_t space_number = user_input.length();
    size_t num=0;
    
    for(size_t i{1}; i < user_input.length()+1; ++i){
        string space(space_number-1,' ');
        space_number = space_number - 1;
        cout << space;
        cout << user_input.substr(0,i);
        for (size_t j=num; j >= 1; --j) {
            cout << user_input[j-1];
        }
        num=num+1;
        
        cout << endl;
    }
    /*******************************************************
     ********************** Algorithm **********************
     *******************************************************
     * ask the user to insert the a string
     * receive the user input
     * display it back to the usar in pyramid form
     */
     
    return 0;
}