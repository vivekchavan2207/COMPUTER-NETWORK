#include <iostream>
#include <string>
using namespace std;

int main()
{
    string stuffed_data;
    string data = "";
    int count = 0;

    cout << "Enter the stuffed data bits: ";
    cin >> stuffed_data;

    // Bit de-stuffing
    for (char bit : stuffed_data)
    {
        if (bit == '1')
        {
            count++;
            data += bit;

            if (count == 5)
            {
                count = 0;
            }
        }
        else
        {
            if (count == 5)
            {
                // Remove the stuffed 0
                count = 0;
            }
            else
            {
                data += bit;
                count = 0;
            }
        }
    }

    cout << "\nStuffed data   : " << stuffed_data << endl;
    cout << "Original data  : " << data << endl;

    return 0;
}
Footer
