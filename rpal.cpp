#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    string fileName;

    if (argc < 2){
        cout << "Input format error" << endl;
    }

    else if (argc == 2){
        fileName = (string)argv[1];
        // call the parser function
        cout << fileName << endl << "No flag" << endl;
    }

    else if (argc == 3){
        string flag = (string)argv[2];
        fileName = (string)argv[1];

        // cout << argc << endl << argv[1] << endl << argv[2] << endl;

        if (flag == "-ast"){
            // call the parser function with ast flag
            cout <<  fileName << endl << "AST flag" << endl;
        }
        else if (flag == "-st"){
            // call the parser function with st flag
            cout << fileName << endl << "ST flag" << endl;
        }
        else if (flag == "-cse"){
            // call the parser function with cse flag
            cout << fileName << endl << "CSE flag" << endl;
        }
        else{
            cout << "Fuck Input format error" << endl;
        }
    }
    return 0;
}