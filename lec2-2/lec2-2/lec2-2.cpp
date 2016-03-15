using namespace std;

int main()
{
	int *p1, j;//, *p2;
	double *q, i = 13.5;
	void *v;
	
	i = 13.5;
	q = &i;

	v = q;
	//p2 = v;
	p1 = (int *) q;

	j = *p1;
}