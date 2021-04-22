#include <iostream>
#include <vector>
int main()
{

	struct Point
	{
		float x;
		float y;
	};


	std::cout << "Z=A(X)+B(Y)" << std::endl;



	std::vector<Point> puntos;

	//Z=A(X)+B(Y);
	float a;
	std::cout << "insert A"<<std::endl;
	std::cin >> a;

	float b;
	std::cout << "insert B" << std::endl;
	std::cin >> b;

	int cant;
	std::cout << "Point Count :" << std::endl;
	std::cin >> cant;

	for (int i = 0; i < cant; ++i)
	{
		Point punto;
		std::cout << "insert point " <<(i+1)<<" :"<< std::endl;
		std::cin >> punto.x >> punto.y;

		puntos.push_back(punto);

	}
	for (int i = 0; i < cant; ++i)
	{
		float res = (a * puntos[i].x) + (b * puntos[i].y);
		std::cout << "en el punto " << (i + 1) << " Z es: " << res << std::endl;

	}







   
}
