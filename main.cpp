// Author: Fransiskus Agapa
// 8/17/22
// Practices make improvement - Have Fun !
// :)

#include <iostream>
#include "string"

// ====================
// user input any word and it would be reversed
// keep playing as long as user want
// ====================

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;

int main()
{
    string userResponse;
    cout << "\n== Reverse Word ==\n" << endl;
    cout << "Would you like to start (yes/no): ";
    cin >> userResponse;

    while(userResponse != "no" and userResponse != "No" and userResponse != "NO")
    {
        if(userResponse == "yes" or userResponse == "Yes" or userResponse == "YES")
        {
            cout << endl;
            string wordOriginal;
            cout << "Input word: ";
            cin >> wordOriginal;
            cout << endl << "Original: " << wordOriginal << endl;

            string wordReversed[wordOriginal.size()];                    // the size of array wordReversed is matched to the length of wordOriginal
            int reversedIndex = 0;                                       // indexing for reversed array
            int inputSize = wordOriginal.size();                         // get size of user input

           while(inputSize != 0)                                          // input size will be decreased by one along the way
           {
               wordReversed[reversedIndex] = wordOriginal[inputSize-1];   // start take from the last index of wordOriginal
               reversedIndex++;                                           // move (right) to next item for reversed array
               inputSize--;                                               // move (left) to previous item in wordOriginal
           }

            cout << "Reversed: ";
            for(size_t i = 0; i < wordOriginal.size(); ++i)
            {
                cout << wordReversed[i];                                        // output one by one
            }
            cout << endl;
        }
        else
        {
            cout << "\n[ Invalid response ]" << endl;
        }

        cout << "\n== Reverse Words ==\n" << endl;
        cout << "Would you like to do it again (yes/no): ";
        cin >> userResponse;
    }

    if(userResponse != "no" or userResponse != "No" or userResponse != "NO")     // different case user might type 'no'
    {
        cout << "\n== Exit Program ==" << endl;
    }

    return 0;
}
