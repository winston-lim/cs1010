int main()
{
	long input = cs1010_read_long();
	bool isEven = input%2 == 0;
	isEven ? input+=1 : input+=2;
	cs1010_print_long(input);
}
