using namespace std;

int main()
{
	int a, b = 5, c;
	int *p, d[10];
	d[4] = b;
	p = &a;
	*p = *(d + 4);
	p = &(d[8])++;
	c = p - &d[1];
	return 0;
}
