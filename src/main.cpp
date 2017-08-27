#include "servants/servant.hpp"
#include "servants/distinct_servants/servant_iskandar.hpp"
#include <iostream>

using namespace std;

int main()
{
	Servant iskandar = ServantIskandar();
	cout << "My name is " << iskandar.getName() << "!" << endl;
	cout << "I currently have " << iskandar.getHP() << " HP left!" << endl;
	return 0;
}
