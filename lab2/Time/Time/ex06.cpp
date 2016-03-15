# include <iostream>
using namespace std;

typedef struct 
{
	int hour; 
	int minute; 
	char meridian[3];
} Time;

void get_input(Time &time);
void convert_time(Time &time);
void give_output(Time &time);

int main()
{
	Time time;
	while (1)
	{
		get_input(time);
		convert_time(time);
		give_output(time);
	}
	return 0;
}

void get_input(Time &time)
{
	cout << "Hours: " << endl;
	cin >> time.hour;
	cout << "Minutes: " << endl;
	cin >> time.minute;
	time.meridian[0] = '\0';
	time.meridian[1] = 'M';
}

void convert_time(Time &time)
{
	if (time.hour >= 12)
	{
		time.meridian[0] = 'P';
		time.hour = time.hour - 12;
	}
	else
	{
		time.meridian[0] = 'A';
	}
}

void give_output(Time &time)
{
	cout << "Time is: " << time.hour << ":" << time.minute << time.meridian[0] << time.meridian[1] << endl;
}
