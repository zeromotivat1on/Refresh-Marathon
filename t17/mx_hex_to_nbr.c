#include <stdlib.h>
#include <stdbool.h>

unsigned long mx_hex_to_nbr(const char *hex);

bool mx_isdigit(int c);
bool mx_isalpha(int c);
bool mx_islower(int c);
bool mx_isupper(int c);

bool mx_isdigit(int c){
    return(c >= '0' && c <= '9' ? 1 : 0);
}

bool mx_isalpha(int c){
    return((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ? 1 : 0);
}

bool mx_islower(int c){
    return(c >= 'a' && c <= 'z' ? 1 : 0);
}

bool mx_isupper(int c){
    return(c >= 'A' && c <= 'Z' ? 1 : 0);
}

unsigned long mx_hex_to_nbr(const char *hex) {
	if (hex == NULL) return 0;
	int j = 0;
	while (hex[j] != '\0')
		j++;
	unsigned long res = 0;
	unsigned long dec = 1;
	for (int i = j - 1; i >= 0; --i) {
		if (mx_isdigit(hex[i])) {
			res += ((hex[i] - 48) * dec);
			dec *= 16;
		}
		if (mx_isalpha(hex[i])) {
			if (mx_isupper(hex[i])) {
				res += ((hex[i] - 55) * dec);
				dec *= 16;
			}
			if(mx_islower(hex[i])) {
				res += ((hex[i] - 87) * dec);
				dec *= 16;
			}
		}
	}
	return res;
}
