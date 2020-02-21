

Skip to content
Using Gmail with screen readers
in:sent 

Conversations
0.04 GB (0%) of 15 GB used
Manage
Terms · Privacy · Program Policies
Last account activity: 0 minutes ago
Details

#include<iostream.h>
#include<conio.h>
#include <stdio.h>
#include <string.h>
/*int main()
{
    char s[15];
    char tmp_var;
    int i,j,n,str;

    cout<<"Enter a string";
    gets(str);
    n=strlen(str);

    for(i=0;i<n/2;i++)
    {
	tmp_var  = str[i];
	str[i]   = str[n-i];
	str[n-i] = tmp_var;
    }
    cout<<"\n Rotated String is %s \n"<<str;
    return 0;
}    */
printf("Before Rotation: %s\n", str);

	for (i = 0; i < n - k; i++)
	{
		for (j = i + k; j > i; j--)
		{
			temp = str[j];
			str[j] = str[j - 1];
			str[j - 1] = temp;
		}
	}
	printf("After Rotation: %s\n", str);
}
ROATION.CPP
Displaying ROATION.CPP.
