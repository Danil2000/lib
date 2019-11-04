#include "libmx.h"

char *mx_itoa(int number){
	int count = mx_digit_count(number);
	char *res = mx_strnew(count);
	
	if (number == -2147483648) {
		res = "-2147483648";
		return res;
	}

	if (number < 0)
		{
			res[0] = '-';
			number *= -1;
			//i++;
		}

	for(int i = count; i > 0; i--) {
		
		int ost = number % 10;
		
		switch(ost){
			case 0: res[i] = 48; break;
			case 1: res[i] = 49; break;
			case 2: res[i] = 50; break;
			case 3: res[i] = 51; break;
			case 4: res[i] = 52; break;
			case 5: res[i] = 53; break;
			case 6: res[i] = 54; break;
			case 7: res[i] = 55; break;
			case 8: res[i] = 56; break;
			case 9: res[i] = 57; break;
			default: return 0;        
		}
		number = number / 10;
	}
	return res;
}

