#include "revert_string.h"
#include <string.h>
void RevertString(char *str)
{
	int size = strlen(str);
	int start = 0;
    int end = size - 1;
    
    while (start < end) 
	{
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }

}

