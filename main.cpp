#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "Enter the path to the file:" << endl;
    char path[256];
    gets(path);
    unsigned int size = strlen(path);

    for (unsigned int i = size - 1; i > 0; i--)
        if (path[i] == '/' || path[i] == '\'')
        {
               for (unsigned j = i + 1; j < size; j++)
                cout << path[j];
               break;
        }
    return 0;
}
