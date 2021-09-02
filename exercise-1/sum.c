int main()
{
	long first_number = cs1010_read_long();
	long second_number = cs1010_read_long();
	long sum = 0;
	if ((first_number<0) && (second_number<0)) {
		cs1010_print_long(sum);
	} else if (first_number<0) {
		cs1010_print_long(second_number);
	} else if (second_number<0) {
		cs_1010_print_long(first_number);
	} else {
		sum = first_number + second_number;
		cs_1010_print_long(sum);
	}
}
