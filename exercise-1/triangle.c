int main()
{
	long* values = cs1010_read_long_array(3);
	if (values != NULL) {
		a = values[0];
		b = values[1];
		c = values[2];
		double s = (a+b+c)/(double)2;
		double heron_value = s(s-a)(s-b)(s-c);
		if (heron_value <= 0) {
			cs1010_println_string('Impossible');
		} else {
			area = sqrt(heron_value);
			cs1010_println_string('Possible');
			cs1010_println_double(area);
		}
	}
}
		
