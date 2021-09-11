#include "pch.h"
#include <iostream>
#include "MyList_Decor.h"

int main()
{


	MyList_Decor<int> ml;

	ml.push_back(1);
	ml.push_back(2);
	ml.push_back(1);

	std::cin >> ml;

}
