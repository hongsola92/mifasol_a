

int getSerialNumber(void)
{
	static int count = 0;
	++count;
	
	return count;
}
