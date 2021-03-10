int main(void)
{
	int a = 10;
	int b = 20;

	// pointer to constant value
	const int* pf = &a;
	pf = &b;						// (O)
	//*pf = 20;						// (X)

	// constant pointer
	int* const ps = &a;
	//ps = &b;						// (X)
	*ps = 20;						// (O)

	// constant pointer to a constant value
	const int* const pt = &a;
	//pt = &b;						// (X)
	//*pt = 20;						// (O)
}
