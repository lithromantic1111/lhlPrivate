#include "Tools.h"
#include <iostream>

MyTools::MyTools()
{
	useTool();
}

MyTools::~MyTools()
{

}

void MyTools::useTool()
{
	std::cout << "useTool()";
}