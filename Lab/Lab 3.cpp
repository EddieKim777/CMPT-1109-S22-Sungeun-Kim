#include <iostream>

using namespace std;

int x, y;
char a, b, c;
void options_shape()
{
	cout << "Select the Shape 1. Triangle  2. Dimond" << endl;
	cin >> x;
}
void options_direction()
{
	cout << "Select right or left     Right = R  Left = L" << endl;
	cin >> a;
}

void options_upanddown()
{
	cout << "Select Upside or Downside    Upside = U  Downside = D" << endl;
	cin >> b;
}

void options_size_char()
{
	cout << "Select the # of raw" << endl;
	cin >> y;

	cout << "Select the charactor" << endl;
	cin >> c;
}


void draw_upside_right_triangle(int raw, char xy) {
	for (int i = 1; i <= raw; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << xy;
		}
		cout << endl;
	}

}

void draw_upside_left_triangle(int raw, char xy) {
	for (int i = 1; i <= raw; i++)
	{
		for (int j = 0; j <= raw - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << xy;
		}
		cout << endl;
	}
}

void draw_downside_left_triangle(int raw, char xy) {
	for (int i = 0; i <= raw; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= raw - i; k++)
		{
			cout << xy;
		}
		cout << endl;
	}

}

void draw_downside_right_triangle(int raw, char xy) {
	for (int i = 0; i <= raw; i++)
	{
		for (int j = 0; j <= raw - i; j++)
		{
			cout << xy;
		}
		cout << endl;
	}
}


int main()
{
	options_shape();
	options_direction();
	options_upanddown();
	options_size_char();


	if (x == 1 && a == 'r' && b == 'u') {
		draw_upside_right_triangle(y, c);
	}
	else if (x == 1 && a == 'r' && b == 'd') {
		draw_downside_right_triangle(y, c);
	}
	else if (x == 1 && a == 'l' && b == 'u') {
		draw_upside_left_triangle(y, c);
	}
	else if (x == 1 && a == 'l' && b == 'd') {
		draw_downside_left_triangle(y, c);
	}
	else if (x == 2 && a == 'r') {
		draw_upside_right_triangle(y, c);
		draw_downside_right_triangle(y, c);
	}
	else if (x == 2 && a == 'l') {
		draw_upside_left_triangle(y, c);
		draw_downside_left_triangle(y, c);
	}





	return 0;
}