
int mx_digit_count(int n) {
	int count = 0; 
	while(n != 0){
		n/=10;
		count++;
	}
	return count;
}
