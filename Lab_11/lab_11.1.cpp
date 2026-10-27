#include <iostream>
using namespace std;

int main()
{
    char first, second;   
    bool found;           

    do
    {
        cout << "Vvedit abriviatyry shtaty (dvi veluki literu): ";
        cin >> first >> second;
        found = true;

        
        switch (first)
        {
        case 'A':
            switch (second)
            {
            case 'L': cout << "Alabama" << endl; break;
            case 'K': cout << "Alaska" << endl; break;
            case 'Z': cout << "Arizona" << endl; break;
            case 'R': cout << "Arkansas" << endl; break;
            default: found = false;
            }
            break;
        case 'C':
            switch (second)
            {
            case 'A': cout << "California" << endl; break;
            case 'O': cout << "Colorado" << endl; break;
            case 'T': cout << "Connecticut" << endl; break;
            default: found = false;
            }
            break;
        case 'D':
            switch (second)
            {
            case 'E': cout << "Delaware" << endl; break;
            default: found = false;
            }
            break;
        case 'F':
            switch (second)
            {
            case 'L': cout << "Florida" << endl; break;
            default: found = false;
            }
            break;
        case 'G':
            switch (second)
            {
            case 'A': cout << "Georgia" << endl; break;
            default: found = false;
            }
            break;
        case 'H':
            switch (second)
            {
            case 'I': cout << "Hawaii" << endl; break;
            default: found = false;
            }
            break;
        case 'I':
            switch (second)
            {
            case 'D': cout << "Idaho" << endl; break;
            case 'L': cout << "Illinois" << endl; break;
            case 'N': cout << "Indiana" << endl; break;
            case 'A': cout << "Iowa" << endl; break;
            default: found = false;
            }
            break;
        case 'K':
            switch (second)
            {
            case 'S': cout << "Kansas" << endl; break;
            case 'Y': cout << "Kentucky" << endl; break;
            default: found = false;
            }
            break;
        case 'L':
            switch (second)
            {
            case 'A': cout << "Louisiana" << endl; break;
            default: found = false;
            }
            break;
        case 'M':
            switch (second)
            {
            case 'E': cout << "Maine" << endl; break;
            case 'D': cout << "Maryland" << endl; break;
            case 'A': cout << "Massachusetts" << endl; break;
            case 'I': cout << "Michigan" << endl; break;
            case 'N': cout << "Minnesota" << endl; break;
            case 'S': cout << "Mississippi" << endl; break;
            case 'O': cout << "Missouri" << endl; break;
            case 'T': cout << "Montana" << endl; break;
            default: found = false;
            }
            break;
        case 'N':
            switch (second)
            {
            case 'E': cout << "Nebraska" << endl; break;
            case 'V': cout << "Nevada" << endl; break;
            case 'H': cout << "New Hampshire" << endl; break;
            case 'J': cout << "New Jersey" << endl; break;
            case 'M': cout << "New Mexico" << endl; break;
            case 'Y': cout << "New York" << endl; break;
            case 'C': cout << "North Carolina" << endl; break;
            case 'D': cout << "North Dakota" << endl; break;
            default: found = false;
            }
            break;
        case 'O':
            switch (second)
            {
            case 'H': cout << "Ohio" << endl; break;
            case 'K': cout << "Oklahoma" << endl; break;
            case 'R': cout << "Oregon" << endl; break;
            default: found = false;
            }
            break;
        case 'P':
            switch (second)
            {
            case 'A': cout << "Pennsylvania" << endl; break;
            default: found = false;
            }
            break;
        case 'R':
            switch (second)
            {
            case 'I': cout << "Rhode Island" << endl; break;
            default: found = false;
            }
            break;
        case 'S':
            switch (second)
            {
            case 'C': cout << "South Carolina" << endl; break;
            case 'D': cout << "South Dakota" << endl; break;
            default: found = false;
            }
            break;
        case 'T':
            switch (second)
            {
            case 'N': cout << "Tennessee" << endl; break;
            case 'X': cout << "Texas" << endl; break;
            default: found = false;
            }
            break;
        case 'U':
            switch (second)
            {
            case 'T': cout << "Utah" << endl; break;
            default: found = false;
            }
            break;
        case 'V':
            switch (second)
            {
            case 'T': cout << "Vermont" << endl; break;
            case 'A': cout << "Virginia" << endl; break;
            default: found = false;
            }
            break;
        case 'W':
            switch (second)
            {
            case 'A': cout << "Washington" << endl; break;
            case 'V': cout << "West Virginia" << endl; break;
            case 'I': cout << "Wisconsin" << endl; break;
            case 'Y': cout << "Wyoming" << endl; break;
            default: found = false;
            }
            break;
        default:
            found = false;
        }

        if (!found)
            cout << "Pomulka: nepravelina abrivitura. Vvedit abriviatyry znovy." << endl;

    } while (!found);

    return 0;
}
