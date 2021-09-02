int main()
{
	long* values = cs1010_read_long_array(5);
	long* lowest_count = values[0]/3; //burger
	lowest_count = (lowest_count > (values[1]/2)) ? values[1]/2 : lowest_count;
	lowest_count = (lowest_count > (values[2]/1)) ? values[2]/1 : lowest_count;
	lowest_count = (lowest_count > (values[3]/15)) ? values[3]/15 : lowest_count;
	lowest_count = (lowest_count > (values[4]/5)) ? values[4]/5 : lowest_count;
	cs1010_println_long(lowest_count);
}
